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

private:
    Ui::jnlConfiguracao *ui;

signals:
    void enviaConfig(DWORD taxaCom, BYTE tamByte, BYTE paridade, BYTE bitParada);
};

#endif // JNLCONFIGURACAO_H
