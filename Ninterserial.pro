#----------------------------------------------------------
#
# Project created by QtCreator 2016-04-30T15:48:22
# This project is under Nintersoft Open Souce code Licence
# Developer: Mauro Mascarenhas de Araújo
# Organization: Nintersoft
#
#----------------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ninterserial
TEMPLATE = app

VERSION = 1.0.0.0
QMAKE_TARGET_COMPANY = Nintersoft
QMAKE_TARGET_PRODUCT = Ninterserial
QMAKE_TARGET_DESCRIPTION = Despertador de codigo aberto
QMAKE_TARGET_COPYRIGHT = Copyright (c) 2016 Nintersoft
RC_ICONS = imgs\Ninterserial.ico
RC_LANG = 0x0416

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

TRANSLATIONS = idiomas\Ninterserial_pt.ts \
               idiomas\Ninterserial_en.ts

RESOURCES += \
            estilos.qrc
