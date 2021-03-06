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
    confProg = new QSettings("Nintersoft","Ninterserial");

    connect(this->ui->menuBtSair, SIGNAL(triggered(bool)), this, SLOT(fecharAplicacao()));
    connect(jnlConfig, SIGNAL(enviaConfig(DWORD,BYTE,BYTE,BYTE,QString,bool)), this, SLOT(defineConf(DWORD,BYTE,BYTE,BYTE,QString,bool)));
    connect(this, SIGNAL(config_in(QString,QString,int,int,QString)), jnlConfig, SLOT(config_in(QString,QString,int,int,QString)));
    connect(this->ui->menuBtReg, SIGNAL(triggered(bool)), jnlReg, SLOT(show()));
    connect(this->ui->menuBtSobre, SIGNAL(triggered(bool)), jnlSbr, SLOT(show()));
    connect(this->ui->menuBtConfig, SIGNAL(triggered(bool)), jnlConfig, SLOT(show()));
    connect(this->ui->btAjustes, SIGNAL(clicked(bool)), jnlConfig, SLOT(show()));
    connect(this->ui->menuBtAjuda, SIGNAL(triggered(bool)), this, SLOT(abre_docWiki()));
    connect(this->ui->menuBtAbrirPorta, SIGNAL(triggered(bool)), this, SLOT(on_btInCon_clicked()));
    connect(this->ui->barraEstado, SIGNAL(messageChanged(QString)), this, SLOT(mensagem_pronto()));
    connect(this, SIGNAL(regErro(int)), jnlReg, SLOT(registraErro(int)));
    connect(this, SIGNAL(regErro(QString)), jnlReg, SLOT(registraErro(QString)));

    connect(this, SIGNAL(mudanca_de_idioma()), jnlConfig, SLOT(troca_de_idioma()));
    connect(this, SIGNAL(mudanca_de_idioma()), jnlReg, SLOT(troca_de_idioma()));
    connect(this, SIGNAL(mudanca_de_idioma()), jnlSbr, SLOT(troca_de_idioma()));

    connect(this, SIGNAL(enviaConfig(int,int,int,int)), jnlConfig, SLOT(recebeConfig(int,int,int,int)));

    dlgExcessao.setWindowTitle(tr("Erro | Ninterserial"));
    dlgExcessao.setIcon(QMessageBox::Critical);
    dlgExcessao.setStandardButtons(QMessageBox::Ok);

    camIdioma = QApplication::applicationDirPath();
    camIdioma.append("/idiomas/");

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

    if (confProg->childGroups().contains("Geral", Qt::CaseInsensitive)) lerconf();
    this->ui->barraEstado->showMessage(dataHora.currentDateTime().toString(Qt::SystemLocaleDate) + tr(" : Pronto!"));
    emit regErro(tr("Ninterserial iniciado com sucesso. Aguardando comando."));

}

jnlPrincipal::~jnlPrincipal()
{
    delete ui;
}

void jnlPrincipal::defineConf(DWORD taxaComC, BYTE tamByteC, BYTE paridadeC, BYTE bitParadaC, QString idioma, bool salva){

    confProg->beginGroup("Geral");
    this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::NOVASCONFIGS) + tr("Veja o registro para mais detalhes."), 5000);
    emit regErro(jnlRegistro::NOVASCONFIGS);
    taxaCom = taxaComC;
    if (salva) confProg->setValue("taxaCom", (int)taxaComC);
    emit regErro(tr("----- Taxa de comunicação : ") + QString::number((int)taxaCom));
    tamByte = tamByteC;
    if (salva) confProg->setValue("tamByte", tamByteC);
    emit regErro(tr("----- Tamanho do byte : ") + QString::number((int)tamByte));
    paridade = paridadeC;
    if (salva) confProg->setValue("paridade", paridadeC);
    emit regErro(tr("----- Paridade : ") + QString::number((int)paridade));
    bitParada = bitParadaC;
    if (salva) confProg->setValue("bitParada", bitParadaC);
    emit regErro(tr("----- Bit de parada : ") + QString::number((int)bitParada));
    if (idiomaAtual != idioma){
        disconnect(this, SIGNAL(mudanca_de_idioma()), jnlReg, SLOT(troca_de_idioma()));
        idiomaAtual = idioma;
        lerIdioma(idiomaAtual);
        if (salva) confProg->setValue("idioma", idioma);
        emit regErro(tr("----- Idioma : ") + idiomaAtual);
        QMessageBox aviso;
        aviso.setWindowTitle(tr("Aviso | Ninterserial"));
        aviso.setText(tr("Atenção!\nParece que você alterou o idioma da aplicação, reinicie-a para que a alteração seja aplicada por completo."));
        aviso.setButtonText(QMessageBox::Ok, tr("Entendi"));
        aviso.setIcon(QMessageBox::Information);
        aviso.exec();
        emit enviaConfig((int)taxaComC, (int)tamByteC, (int)paridadeC, (int)bitParadaC);
    }

    if (taxaComC == 19200 && tamByteC == 8 && paridadeC == NOPARITY && bitParadaC == ONESTOPBIT && idioma == "pt") confProg->clear();
    confProg->endGroup();
}

void jnlPrincipal::lerconf(){
    confProg->beginGroup("Geral");
    QString idioma = confProg->value("idioma").toString();
    if (idioma != "pt"){
        idiomaAtual = idioma;
        lerIdioma(idioma);
        emit mudanca_de_idioma();
    }
    taxaCom = (DWORD)confProg->value("taxaCom").toInt();
    tamByte = (BYTE)confProg->value("tamByte").toInt();
    paridade = (BYTE)confProg->value("paridade").toInt();
    bitParada = (BYTE)confProg->value("bitParada").toInt();
    emit config_in(confProg->value("taxaCom").toString(), confProg->value("tamByte").toString(),
                  confProg->value("paridade").toInt(), confProg->value("bitParada").toInt(), idioma);
    confProg->endGroup();
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

void trocarTradutor(QTranslator &trad, const QString &localArq)
{
    QApplication::removeTranslator(&trad);
    if(trad.load(localArq)) QApplication::installTranslator(&trad);
}

void jnlPrincipal::lerIdioma(const QString &idioma)
{
    idiomaAtual = idioma;
    trocarTradutor(tradutor, QString(camIdioma + "Ninterserial_%1.qm").arg(idioma));
    trocarTradutor(tradutorQt, QString(camIdioma + "qt_%1.qm").arg(idioma));
}

void jnlPrincipal::changeEvent(QEvent* evento)
{
    if(0 != evento) {
        switch(evento->type()) {

            case QEvent::LanguageChange:
                ui->retranslateUi(this);
                emit mudanca_de_idioma();
            break;

            case QEvent::LocaleChange:
            {
                QString local = QLocale::system().name();
                local.truncate(local.lastIndexOf('_'));
                lerIdioma(local);
            }
            break;
        }
    }
    QMainWindow::changeEvent(evento);
}

void jnlPrincipal::on_btInCon_clicked()
{
    QString portaStr = "COM" + QString::number(ui->numPorta->value());
    wchar_t *portaWcr = new wchar_t[portaStr.size()+1];
    portaStr.toWCharArray(portaWcr);

    regErro(tr("Tentativa de conexão com a porta ") + portaStr);

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
            if (WriteFile(porta,pacote,3,&tamanho_escrito,NULL)){
                this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALENVIADOAUTO) + enviado, 5000);
                emit regErro(jnlRegistro::constroiErroBasico(jnlRegistro::SINALENVIADOAUTO) + enviado);
            }
            else{
                this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALNAOENVIADOAUTO) + enviado, 5000);
                emit regErro(jnlRegistro::constroiErroBasico(jnlRegistro::SINALNAOENVIADOAUTO) + enviado);
                on_btEncCon_clicked();
            }
            break;
        }
    }

    jnlPrincipal::copiamatriz();
}

void jnlPrincipal::on_btEnviar_clicked()
{
    QString enviado = "---------->";
    bool foiEnviado = true;
    for (int j = 0; j < 30; ++j){
        unsigned char pacote[3];
        for (int i = destInt*3 - 3, k = 0; i < destInt*3; ++i, ++k)
        {
            pacote[k] = pacotao[i][j];
            enviado += pacote[k];
        }

        // Porta correspondente ao handle obtido na inicialização
        // Transmissão do PACOTE pela porta serial (RS232)
        if (!WriteFile(porta,pacote,3,&tamanho_escrito,NULL)) foiEnviado = false;
        if (j != 29) enviado += "\n---------->";
    }
    if (foiEnviado){
        emit regErro(jnlRegistro::SINALENVIADOMANUAL);
        this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALENVIADOMANUAL) +
                                           tr("verificar registro."), 5000);
        emit regErro(enviado);
    }
    else {
        emit regErro(jnlRegistro::SINALNAOENVIADOMANUAL);
        this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALNAOENVIADOMANUAL) +
                                           tr("verificar registro."), 5000);
        emit regErro(enviado);
        on_btEncCon_clicked();
    }

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
        bool enviado = true;
        if (!ui->cmIncluiNulo->isChecked()){
            char* pacotePers = new char[ui->edtMsgPerson->text().length()];
            std::string pacotePersStr = ui->edtMsgPerson->text().toStdString();
            std::strncpy(pacotePers, pacotePersStr.c_str(), pacotePersStr.length());
            DWORD tam = DWORD(pacotePersStr.length());
            if (!WriteFile(porta,pacotePers,tam,&tamanho_escrito,NULL)) enviado = false;
        }
        else{
            char* pacotePers = new char[ui->edtMsgPerson->text().length() + 1];
            std::string pacotePersStr = ui->edtMsgPerson->text().toStdString();
            std::strcpy(pacotePers, pacotePersStr.c_str());
            DWORD tam = DWORD(pacotePersStr.length() + 1);
            if (!WriteFile(porta,pacotePers,tam,&tamanho_escrito,NULL)) enviado = false;
            delete [] pacotePers;
        }

        if (enviado){
            this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALENVIADOPERSON) + ui->edtMsgPerson->text(), 5000);
            emit regErro(jnlRegistro::SINALENVIADOPERSON);
            emit regErro("---------->" + ui->edtMsgPerson->text());
        }
        else {
            this->ui->barraEstado->showMessage(jnlRegistro::constroiErro(jnlRegistro::SINALNAOENVIADOPERSON) + ui->edtMsgPerson->text(), 5000);
            emit regErro(jnlRegistro::SINALNAOENVIADOPERSON);
            emit regErro("---------->" + ui->edtMsgPerson->text());
            on_btEncCon_clicked();
        }
        ui->edtMsgPerson->setText(NULL);
    }
}
