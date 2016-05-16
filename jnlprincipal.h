#ifndef JNLPRINCIPAL_H
#define JNLPRINCIPAL_H

#include "Windows.h"
#include "jnlregistro.h"
#include "jnlsobre.h"
#include "jnlconfiguracao.h"

#include <QMainWindow>
#include <QDateTime>
#include <QMessageBox>
#include <QCheckBox>
#include <QRadioButton>
#include <QTranslator>
#include <QSettings>

namespace Ui {
class jnlPrincipal;
}

class jnlPrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit jnlPrincipal(QWidget *parent = 0);
    ~jnlPrincipal();

private:
    QDateTime dataHora;
    QMessageBox dlgExcessao;
    Ui::jnlPrincipal *ui;
    jnlRegistro* jnlReg = NULL;
    jnlSobre* jnlSbr = NULL;
    jnlConfiguracao* jnlConfig = NULL;
    QCheckBox* cmVariavel = NULL;
    int destInt = 1;

    QString idiomaAtual = "pt";
    QString camIdioma = NULL;
    QTranslator tradutor;
    QTranslator tradutorQt;
    QSettings* confProg;

    void copiamatriz();
    void lerconf();

protected:
    handle_t porta;
    COMMTIMEOUTS tempos;
    DCB configuracao;
    DWORD taxaCom = 19200;
    BYTE tamByte = 8;
    BYTE paridade = NOPARITY;
    BYTE bitParada = ONESTOPBIT;
    unsigned char pacotao[18][30];
    unsigned char pacotaoAntigo[18][30];
    bool confMsgLida = false;
    unsigned long tamanho_escrito,tamanho_lido;

protected slots:
    int fecharAplicacao();
    void changeEvent(QEvent* evento);

private slots:
    void on_btInCon_clicked();
    void mensagem_pronto();
    void abre_docWiki();
    void on_btEncCon_clicked();
    void on_btEnviar_clicked();
    void alteraSaida();
    void alteraDest();
    void enviaAlterado();
    void define_saidas();
    void lerIdioma(const QString& idioma);
    void on_cmEnvioAuto_toggled(bool checked);
    void defineConf(DWORD taxaComC, BYTE tamByteC, BYTE paridadeC, BYTE bitParadaC, QString idioma, bool salva);
    void on_btEnviaPerson_clicked();

signals:
    void regErro(int erro);
    void regErro(QString erro);
    void mudanca_de_idioma();
    void enviaConfig(int taxaComConf, int tamByteConf, int paridadeConf, int stopBitConf);
    void config_in(QString taxaComConf, QString tamByteConf, int paridadeConf, int stopBitConf, QString idiomaC);
};

#endif // JNLPRINCIPAL_H
