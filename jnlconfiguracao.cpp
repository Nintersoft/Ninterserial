#include "jnlconfiguracao.h"
#include "ui_jnlconfiguracao.h"

jnlConfiguracao::jnlConfiguracao(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jnlConfiguracao)
{
    ui->setupUi(this);
}

jnlConfiguracao::~jnlConfiguracao()
{
    delete ui;
}

void jnlConfiguracao::on_btSalvarConfig_clicked()
{
    QString idioma = "pt";
    if (ui->csIngles->isChecked()) idioma = "en";
    emit enviaConfig((DWORD)ui->coTaxaCom->currentText().toLong(), (BYTE)ui->coTamByte->currentText().toInt(),
                     (BYTE)ui->coParidade->currentIndex(),(BYTE)ui->coBitParada->currentIndex(), idioma);
    jnlConfiguracao::hide();
}

void jnlConfiguracao::on_btRestaurar_clicked()
{
    ui->coTaxaCom->setCurrentIndex(5);
    ui->coTamByte->setCurrentIndex(1);
    ui->coBitParada->setCurrentIndex(0);
    ui->coParidade->setCurrentIndex(0);
    ui->csPortugues->setChecked(true);
}

void jnlConfiguracao::troca_de_idioma()
{
    ui->retranslateUi(this);
}

void jnlConfiguracao::recebeConfig(int taxaComConf, int tamByteConf, int paridadeConf, int stopBitConf){
    ui->coTaxaCom->setCurrentText(QString::number(taxaComConf));
    ui->coTamByte->setCurrentText(QString::number(tamByteConf));
    ui->coParidade->setCurrentIndex(paridadeConf);
    ui->coBitParada->setCurrentIndex(stopBitConf);
}

