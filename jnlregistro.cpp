#include "jnlregistro.h"
#include "ui_jnlregistro.h"

jnlRegistro::jnlRegistro(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jnlRegistro)
{
    ui->setupUi(this);
    connect(ui->menuBtSalvarComo, SIGNAL(triggered(bool)), this, SLOT(salvar_registro()));
}

jnlRegistro::~jnlRegistro()
{
    delete ui;
}

QString jnlRegistro::constroiErro(int erro){
    const QString espc = " : ";
    return QDateTime::currentDateTime().toString(Qt::SystemLocaleDate) +  espc +
            jnlRegistro::constroiErroBasico(erro);
}

QString jnlRegistro::constroiErroBasico(int erro){
    switch (erro){
        case jnlRegistro::CONECTADO:
            return tr("Conectado e pronto para envio!");
        case jnlRegistro::ERROABERTURA:
            return tr("Não foi possível abrir a porta COM.");
        case jnlRegistro::ERROCONFIGPORTA:
            return tr("Erro na Configuração da porta!");
        case jnlRegistro::ERROTIMEOUT:
            return tr("Falha na configuração de Timeout.");
        case jnlRegistro::DESCONECTADO:
            return tr("Porta desconectada com sucesso! Conexão encerrada.");
        case jnlRegistro::SINALENVIADOAUTO:
            return tr("Sinal enviado automaticamente : ");
        case jnlRegistro::SINALENVIADOMANUAL:
            return tr("Sinal enviado manualmente : ");
        case jnlRegistro::SINALENVIADOPERSON:
            return tr("Sinal personalizado enviado manualmente : ");
        case jnlRegistro::SINALRECEBIDO:
            return tr("Sinal de retorno recebido : ");
        case jnlRegistro::TROCAMETODOENVIOMAN:
            return tr("O método de envio foi alternado para manual.");
        case jnlRegistro::TROCAMETODOENVIOAUTO:
            return tr("O método de envio foi alternado para automático.");
        case jnlRegistro::NOVASCONFIGS:
            return tr("As seguintes configurações foram aplicadas : ");
        default:
            return tr("Erro ou evento desconhecido...");
    }
}

QString jnlRegistro::constroiErro(QString erro){
    return QDateTime::currentDateTime().toString(Qt::SystemLocaleDate)
            + " : " + erro;
}

void jnlRegistro::registraErro(int erro){
    ui->txtReg->appendPlainText(jnlRegistro::constroiErro(erro));
}

void jnlRegistro::registraErro(QString erro){
    ui->txtReg->appendPlainText(jnlRegistro::constroiErro(erro));
}

void jnlRegistro::salvar_registro(){
    QString nomeArq = QFileDialog::getSaveFileName(this, tr("Ninterserial | Salvar arquivo de registro"),
                                                   QDir::homePath(), tr("Arquivo de texto ( *.txt);;Arquivo de registro de eventos ( *.log)"));
    if (nomeArq != ""){
        QFile arquivo(nomeArq);
        if (arquivo.open(QIODevice::ReadWrite | QIODevice::Append | QIODevice::Text)){
            QTextStream opSalva(&arquivo);
            opSalva << ui->txtReg->toPlainText();
            arquivo.flush();
            arquivo.close();
            registraErro(tr("Arquivo de registro de erro salvo com sucesso!"));
            ui->barraEstado->showMessage(tr("Arquivo de registro de erro salvo com sucesso!"), 5000);
        }
        else {
            registraErro(tr("O arquivo de registro de erro não pôde ser salvo! Falha na operação."));
            ui->barraEstado->showMessage(tr("O arquivo de registro de erro não pôde ser salvo! Falha na operação."), 5000);
        }
    }
    else{
        registraErro(tr("O arquivo de registro de erro não pôde ser salvo! Diretório nulo."));
        ui->barraEstado->showMessage(tr("O arquivo de registro de erro não pôde ser salvo! Diretório nulo."), 5000);
    }
}

void jnlRegistro::troca_de_idioma(){
    ui->retranslateUi(this);
}
