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
    emit enviaConfig((DWORD)ui->coTaxaCom->currentText().toLong(), (BYTE)ui->coTamByte->currentText().toInt(),
                     (BYTE)ui->coParidade->currentIndex(),(BYTE)ui->coBitParada->currentIndex());
    jnlConfiguracao::hide();
}

void jnlConfiguracao::on_btRestaurar_clicked()
{
    ui->coTaxaCom->setCurrentIndex(5);
    ui->coTamByte->setCurrentIndex(1);
    ui->coBitParada->setCurrentIndex(0);
    ui->coParidade->setCurrentIndex(0);
}
