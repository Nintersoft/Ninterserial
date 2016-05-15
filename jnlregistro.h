#ifndef JNLREGISTRO_H
#define JNLREGISTRO_H

#include <QMainWindow>
#include <QDateTime>
#include <QTextStream>
#include <QFileDialog>
#include <QFile>

namespace Ui {
class jnlRegistro;
}

class jnlRegistro : public QMainWindow
{
    Q_OBJECT

public:
    explicit jnlRegistro(QWidget *parent = 0);
    ~jnlRegistro();

    const static int    CONECTADO = 0,
                        DESCONECTADO = 1,
                        ERROABERTURA = 2,
                        ERROTIMEOUT = 3,
                        ERROCONFIGPORTA = 4,
                        SINALENVIADOAUTO = 5,
                        SINALENVIADOMANUAL = 6,
                        SINALENVIADOPERSON = 7,
                        SINALRECEBIDO = 8,
                        TROCAMETODOENVIOMAN = 9,
                        TROCAMETODOENVIOAUTO = 10,
                        NOVASCONFIGS = 11;

    static QString constroiErro(int erro);
    static QString constroiErroBasico(int erro);
    static QString constroiErro(QString erro);

private:
    Ui::jnlRegistro *ui;

public slots:
    void registraErro(int erro);
    void registraErro(QString erro);

protected slots:
    void troca_de_idioma();
    void salvar_registro();

};

#endif // JNLREGISTRO_H
