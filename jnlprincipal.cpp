#include "jnlprincipal.h"
#include "ui_jnlprincipal.h"

jnlPrincipal::jnlPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jnlPrincipal)
{
    ui->setupUi(this);

    jnlReg = new jnlRegistro();
    jnlSbr = new jnlSobre();
    jnlConfig = new jnlConfiguracao();

    this->ui->barraEstado->showMessage(dataHora.currentDateTime().toString(Qt::SystemLocaleDate) + tr(" : Pronto!"));
    connect(this->ui->menuBtSair, SIGNAL(triggered(bool)), this, SLOT(fecharAplicacao()));
    connect(jnlConfig, SIGNAL(enviaConfig(DWORD,BYTE,BYTE,BYTE)), this, SLOT(defineConf(DWORD,BYTE,BYTE,BYTE)));
    connect(this->ui->menuBtReg, SIGNAL(triggered(bool)), jnlReg, SLOT(show()));
    connect(this->ui->menuBtSobre, SIGNAL(triggered(bool)), jnlSbr, SLOT(show()));
    connect(this->ui->menuBtConfig, SIGNAL(triggered(bool)), jnlConfig, SLOT(show()));
    connect(this->ui->btAjustes, SIGNAL(clicked(bool)), jnlConfig, SLOT(show()));
    connect(this->ui->menuBtAjuda, SIGNAL(triggered(bool)), this, SLOT(abre_docWiki()));
    connect(this->ui->menuBtAbrirPorta, SIGNAL(triggered(bool)), this, SLOT(on_btInCon_clicked()));
    connect(this->ui->barraEstado, SIGNAL(messageChanged(QString)), this, SLOT(mensagem_pronto()));
    connect(this, SIGNAL(regErro(int)), jnlReg, SLOT(registraErro(int)));
    connect(this, SIGNAL(regErro(QString)), jnlReg, SLOT(registraErro(QString)));

    dlgExcessao.setWindowTitle(tr("Erro | Ninterserial"));
    dlgExcessao.setIcon(QMessageBox::Critical);
    dlgExcessao.setStandardButtons(QMessageBox::Ok);

    emit regErro(jnlRegistro::constroiErro(tr("Ninterserial iniciado com sucesso. Aguardando comando.")));

    unsigned char letramin = 'a';
    unsigned char dest = '1';
    for (int i = 0; i < 18; ++i){
        for (int j = 0; j < 30; ++j){
            if (i % 3 == 0) pacotao[i][j] = dest;
            else if ((i+2) % 3 == 0) pacotao[i][j] = letramin++;
            else pacotao[i][j] = '\0';
        }
        letramin = 'a';
        if (i % 3 == 0) ++dest;
    }

    for (int i = 1, letra = 'a'; i <= 30; ++i, ++letra){
        QString nome = "cmSaida" + QString::number(i);
        cmVariavel = ui->areaRolSaida->findChild<QCheckBox*>(nome);
        connect(cmVariavel, SIGNAL(toggled(bool)), this, SLOT(alteraSaida()));
    }
    cmVariavel = NULL;

    for (int i = 1, num = '1'; i <= 6; ++i, ++num){
        QRadioButton* csVariavel = NULL;
        QString nome = "csDisp" + QString::number(i);
        csVariavel = ui->areaRolDisp->findChild<QRadioButton*>(nome);
        connect(csVariavel, SIGNAL(toggled(bool)), this, SLOT(alteraDest()));
        csVariavel = NULL;
        delete csVariavel;
    }

}

jnlPrincipal::~jnlPrincipal()
{
    delete ui;
}

void jnlPrincipal::defineConf(DWORD taxaComC, BYTE tamByteC, BYTE paridadeC, BYTE bitParadaC){

    this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::NOVASCONFIGS) + tr("Veja o registro para mais detalhes."), 5000);
    emit regErro(jnlRegistro::NOVASCONFIGS);
    taxaCom = taxaComC;
    emit regErro(tr("----- Taxa de comunicação : ") + QString::number((int)taxaCom));
    tamByte = tamByteC;
    emit regErro(tr("----- Tamanho do byte : ") + QString::number((int)tamByte));
    paridade = paridadeC;
    emit regErro(tr("----- Paridade : ") + QString::number((int)paridade));
    bitParada = bitParadaC;
    emit regErro(tr("----- Bit de parada : ") + QString::number((int)bitParada));

}

int jnlPrincipal::fecharAplicacao()
{
    QMessageBox dlgFechar;
    dlgFechar.setText(tr("Você está certo que deseja fechar esta aplicação?"));
    dlgFechar.setIcon(QMessageBox::Question);
    dlgFechar.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    dlgFechar.setDefaultButton(QMessageBox::Cancel);
    if (dlgFechar.exec() == QMessageBox::Yes)   QApplication::exit(0);
    else return 1;

    return 0;
}

void jnlPrincipal::on_btInCon_clicked()
{
    QString portaStr = "COM" + QString::number(ui->numPorta->value());
    wchar_t *portaWcr = new wchar_t[portaStr.size()+1];
    portaStr.toWCharArray(portaWcr);

    regErro(jnlRegistro::constroiErro(tr("Tentativa de conexão com a porta ") + portaStr));

    //endereço da porta a ser acessada (COMX)
    //porta foi declarado como HANDLE na seção private da declaração de classe Form
    //HANDLE porta

    porta = CreateFileW(portaWcr,GENERIC_READ+GENERIC_WRITE,0,NULL,OPEN_EXISTING,0,NULL);
    delete portaWcr;
    if(porta == INVALID_HANDLE_VALUE){
        this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::ERROABERTURA), 5000);
        emit regErro(jnlRegistro::ERROABERTURA);
        dlgExcessao.setText(jnlRegistro::constroiErroBasico(jnlRegistro::ERROABERTURA) +
                            tr("\nPor favor, tente novamente!"));
        dlgExcessao.exec();
        return;
     }

    //Tempo máximo entre o recebimento de 2 bytes (ms)
    tempos.ReadIntervalTimeout = 20;

    //Multiplicador de tempo de recebimento por byte
    tempos.ReadTotalTimeoutMultiplier = 0;
    tempos.ReadTotalTimeoutConstant = 100;
    tempos.WriteTotalTimeoutMultiplier = 0;
    tempos.WriteTotalTimeoutConstant = 100;
    if(!SetCommTimeouts(porta ,&tempos))
    {
       CloseHandle(porta);
       this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::ERROTIMEOUT), 5000);
       emit regErro(jnlRegistro::ERROTIMEOUT);
       dlgExcessao.setText(jnlRegistro::constroiErroBasico(jnlRegistro::ERROTIMEOUT));
       dlgExcessao.exec();
       return;
    }

    GetCommState(porta, &configuracao);

    configuracao.BaudRate = taxaCom;
    configuracao.ByteSize = tamByte;
    configuracao.Parity = paridade;
    configuracao.StopBits = bitParada;

    if(!SetCommState(porta,&configuracao))
    {
         CloseHandle(porta);
         this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::ERROCONFIGPORTA), 5000);
         emit regErro(jnlRegistro::ERROCONFIGPORTA);
         dlgExcessao.setText(jnlRegistro::constroiErroBasico(jnlRegistro::ERROCONFIGPORTA));
         dlgExcessao.exec();
         return;
    }

    emit regErro(jnlRegistro::CONECTADO);
    this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::CONECTADO), 5000);
    this->ui->areaRolDisp->setEnabled(true);
    this->ui->areaRolSaida->setEnabled(true);
    this->ui->btEncCon->setEnabled(true);
    this->ui->menuBtFecharPorta->setEnabled(true);
    if (!this->ui->cmEnvioAuto->isChecked()) this->ui->btEnviar->setEnabled(true);
    this->ui->btEnviaPerson->setEnabled(true);
    this->ui->edtMsgPerson->setEnabled(true);
    this->ui->cmIncluiNulo->setEnabled(true);
    this->ui->btInCon->setEnabled(false);
    this->ui->menuBtAbrirPorta->setEnabled(false);
}

void jnlPrincipal::mensagem_pronto(){
    if (this->ui->barraEstado->currentMessage().isEmpty())
        this->ui->barraEstado->showMessage(dataHora.currentDateTime().toString(Qt::SystemLocaleDate) + tr(" : Pronto!"));
}

void jnlPrincipal::abre_docWiki(){
    ShellExecuteW(NULL, L"open", L"http://docwiki.nintersoft.com/Ninterserial", NULL, NULL, SW_SHOW);
}

void jnlPrincipal::on_btEncCon_clicked()
{
    CloseHandle(porta);
    emit regErro(jnlRegistro::DESCONECTADO);
    this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::DESCONECTADO), 5000);
    this->ui->areaRolDisp->setEnabled(false);
    this->ui->areaRolSaida->setEnabled(false);
    this->ui->btEncCon->setEnabled(false);
    this->ui->menuBtFecharPorta->setEnabled(false);
    this->ui->btInCon->setEnabled(true);
    this->ui->menuBtAbrirPorta->setEnabled(true);
    this->ui->btEnviar->setEnabled(false);
    this->ui->btEnviaPerson->setEnabled(false);
    this->ui->edtMsgPerson->setEnabled(false);
    this->ui->cmIncluiNulo->setEnabled(false);
}

void jnlPrincipal::alteraSaida(){

    jnlPrincipal::copiamatriz();

    for (int i = 1, letra = 'a'; i <= 30; ++i, ++letra){
        QString nome = "cmSaida" + QString::number(i);
        cmVariavel = ui->areaRolSaida->findChild<QCheckBox*>(nome);
        if (cmVariavel->isChecked()) pacotao[destInt*3 - 2][i-1] = toupper((char)letra);
        else pacotao[destInt*3 - 2][i-1] = (char)letra;
    }

    cmVariavel = NULL;
    if (ui->cmEnvioAuto->isChecked()) enviaAlterado();
}

void jnlPrincipal::enviaAlterado(){

    QString enviado = "---------->";

    for (int j = 0; j < 30; ++j){
        if (pacotao[destInt*3 - 2][j] != pacotaoAntigo[destInt*3 - 2][j]){

            unsigned char pacote[3];
            for (int i = destInt*3 - 3, k = 0; i < destInt*3; ++i, ++k)
            {
                pacote[k] = pacotao[i][j];
                enviado += pacote[k];
            }

            // Porta correspondente ao handle obtido na inicialização
            // Transmissão do PACOTE pela porta serial (RS232)
            WriteFile(porta,pacote,3,&tamanho_escrito,NULL);
            break;
        }
    }

    this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALENVIADOAUTO) + enviado, 5000);
    emit regErro(jnlRegistro::constroiErro(jnlRegistro::SINALENVIADOAUTO) + enviado);

    jnlPrincipal::copiamatriz();
}

void jnlPrincipal::on_btEnviar_clicked()
{
    QString enviado = "---------->";
    emit regErro(jnlRegistro::SINALENVIADOMANUAL);
    for (int j = 0; j < 30; ++j){
        unsigned char pacote[3];
        for (int i = destInt*3 - 3, k = 0; i < destInt*3; ++i, ++k)
        {
            pacote[k] = pacotao[i][j];
            enviado += pacote[k];
        }

        // Porta correspondente ao handle obtido na inicialização
        // Transmissão do PACOTE pela porta serial (RS232)
        WriteFile(porta,pacote,3,&tamanho_escrito,NULL);
        if (j != 29) enviado += "\n---------->";
    }

    this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALENVIADOMANUAL) +
                                       tr("verificar registro."), 5000);
    emit regErro(enviado);

}

void jnlPrincipal::copiamatriz(){
    for (int i = 0; i < (sizeof(pacotao)/sizeof(pacotao[i])); ++i)
        for (int j = 0; j < (sizeof(pacotao[i])/sizeof(unsigned char)); ++j)
            pacotaoAntigo[i][j] = pacotao[i][j];
}

void jnlPrincipal::on_cmEnvioAuto_toggled(bool checked)
{
    if (checked){
        this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::TROCAMETODOENVIOAUTO), 5000);
        emit regErro(jnlRegistro::TROCAMETODOENVIOAUTO);
        this->ui->btEnviar->setEnabled(false);
    }
    else{
        if (this->ui->areaRolSaida->isEnabled()) this->ui->btEnviar->setEnabled(true);
        this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::TROCAMETODOENVIOMAN), 5000);
        emit regErro(jnlRegistro::TROCAMETODOENVIOMAN);
        if (!confMsgLida){
            QMessageBox aviso;
            aviso.setWindowTitle(tr("Aviso | Ninterserial"));
            aviso.setText(tr("Atenção!\nAo desativar o envio automático TODAS as saídas serão enviadas ao destino selecionado, ou seja, a comunicação poderá demorar um pouco mais."));
            aviso.setButtonText(QMessageBox::Ok, tr("Entendi"));
            aviso.setIcon(QMessageBox::Warning);
            aviso.exec();
            confMsgLida = true;
        }
    }
}

void jnlPrincipal::alteraDest(){
    if (ui->csDisp1->isChecked()) destInt = 1;
    else if (ui->csDisp2->isChecked()) destInt = 2;
    else if (ui->csDisp3->isChecked()) destInt = 3;
    else if (ui->csDisp4->isChecked()) destInt = 4;
    else if (ui->csDisp5->isChecked()) destInt = 5;
    else destInt = 6;

    define_saidas();
}

void jnlPrincipal::define_saidas(){
    for (int j = 1; j <= 30; ++j){
        QString nome = "cmSaida" + QString::number(j);
        cmVariavel = ui->areaRolSaida->findChild<QCheckBox *>(nome);
        disconnect(cmVariavel, SIGNAL(toggled(bool)), this, SLOT(alteraSaida()));
        if (isupper(pacotao[destInt*3 - 2][j])) cmVariavel->setChecked(true);
        else cmVariavel->setChecked(false);
        connect(cmVariavel, SIGNAL(toggled(bool)), this, SLOT(alteraSaida()));
    }
    cmVariavel = NULL;
}

void jnlPrincipal::on_btEnviaPerson_clicked()
{
    if (!ui->edtMsgPerson->text().isEmpty()){
        if (!ui->cmIncluiNulo->isChecked()){
            char* pacotePers = new char[ui->edtMsgPerson->text().length()];
            std::string pacotePersStr = ui->edtMsgPerson->text().toStdString();
            std::strncpy(pacotePers, pacotePersStr.c_str(), pacotePersStr.length());
            DWORD tam = DWORD(pacotePersStr.length());
            WriteFile(porta,pacotePers,tam,&tamanho_escrito,NULL);
        }
        else{
            char* pacotePers = new char[ui->edtMsgPerson->text().length() + 1];
            std::string pacotePersStr = ui->edtMsgPerson->text().toStdString();
            std::strcpy(pacotePers, pacotePersStr.c_str());
            DWORD tam = DWORD(pacotePersStr.length() + 1);
            WriteFile(porta,pacotePers,tam,&tamanho_escrito,NULL);
            delete [] pacotePers;
        }

        this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALENVIADOPERSON) + ui->edtMsgPerson->text(), 5000);
        emit regErro(jnlRegistro::SINALENVIADOPERSON);
        emit regErro("---------->" + ui->edtMsgPerson->text());
        ui->edtMsgPerson->setText(NULL);
    }
}
