#-------------------------------------------------
#
# Project created by QtCreator 2016-04-30T15:48:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ninterserial
TEMPLATE = app


SOURCES += main.cpp\
        jnlprincipal.cpp \
        jnlregistro.cpp \
        jnlsobre.cpp \
        jnlconfiguracao.cpp

HEADERS  += jnlprincipal.h \
            jnlregistro.h \
        jnlsobre.h \
        jnlconfiguracao.h

FORMS    += jnlprincipal.ui \
            jnlregistro.ui \
        jnlsobre.ui \
        jnlconfiguracao.ui

RESOURCES += \
            estilos.qrc
