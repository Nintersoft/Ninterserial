#ifndef JNLCONFIGURACAO_H
#define JNLCONFIGURACAO_H

#include "Windows.h"

#include <QMainWindow>

namespace Ui {
class jnlConfiguracao;
}

class jnlConfiguracao : public QMainWindow
{
    Q_OBJECT

public:
    explicit jnlConfiguracao(QWidget *parent = 0);
    ~jnlConfiguracao();

private slots:
    void on_btSalvarConfig_clicked();
    void on_btRestaurar_clicked();

protected slots:
    void troca_de_idioma();
    void recebeConfig(int taxaComConf, int tamByteConf, int paridadeConf, int stopBitConf);

private:
    Ui::jnlConfiguracao *ui;

signals:
    void enviaConfig(DWORD taxaCom, BYTE tamByte, BYTE paridade, BYTE bitParada, QString idioma);
};

#endif // JNLCONFIGURACAO_H
