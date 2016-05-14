/********************************************************************************
** Form generated from reading UI file 'jnlprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JNLPRINCIPAL_H
#define UI_JNLPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jnlPrincipal
{
public:
    QAction *menuBtAbrirPorta;
    QAction *menuBtFecharPorta;
    QAction *action;
    QAction *menuBtSalvarSessComo;
    QAction *menuBtSalvarSess;
    QAction *menuBtAbrirSes;
    QAction *menuBtSair;
    QAction *menuBtAjuda;
    QAction *menuBtSobre;
    QAction *menuBtReg;
    QAction *menuBtConfig;
    QWidget *Fundo;
    QGridLayout *gridLayout_2;
    QGridLayout *arrVertPrin;
    QHBoxLayout *arrHorzPrim;
    QVBoxLayout *arrVertSec;
    QGroupBox *grpContrPorta;
    QPushButton *btInCon;
    QPushButton *btEncCon;
    QGroupBox *grpConfigPorta;
    QGridLayout *gridLayout_3;
    QScrollArea *areaRolConfig;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_6;
    QSpinBox *numPorta;
    QLabel *txtPortaAtual;
    QCheckBox *cmEnvioAuto;
    QPushButton *btAjustes;
    QSpacerItem *espcVertConfigPorta;
    QVBoxLayout *arrVertTerc;
    QGroupBox *cxArrDisp;
    QGridLayout *gridLayout_5;
    QScrollArea *areaRolDisp;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_4;
    QRadioButton *csDisp3;
    QRadioButton *csDisp1;
    QRadioButton *csDisp2;
    QRadioButton *csDisp4;
    QRadioButton *csDisp6;
    QRadioButton *csDisp5;
    QGroupBox *cxArrSaida;
    QGridLayout *gridLayout;
    QScrollArea *areaRolSaida;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cmSaida1;
    QCheckBox *cmSaida2;
    QCheckBox *cmSaida3;
    QCheckBox *cmSaida4;
    QCheckBox *cmSaida5;
    QCheckBox *cmSaida6;
    QCheckBox *cmSaida7;
    QCheckBox *cmSaida8;
    QCheckBox *cmSaida9;
    QCheckBox *cmSaida10;
    QCheckBox *cmSaida11;
    QCheckBox *cmSaida12;
    QCheckBox *cmSaida13;
    QCheckBox *cmSaida14;
    QCheckBox *cmSaida15;
    QCheckBox *cmSaida16;
    QCheckBox *cmSaida17;
    QCheckBox *cmSaida18;
    QCheckBox *cmSaida19;
    QCheckBox *cmSaida20;
    QCheckBox *cmSaida21;
    QCheckBox *cmSaida22;
    QCheckBox *cmSaida23;
    QCheckBox *cmSaida24;
    QCheckBox *cmSaida25;
    QCheckBox *cmSaida26;
    QCheckBox *cmSaida27;
    QCheckBox *cmSaida28;
    QCheckBox *cmSaida29;
    QCheckBox *cmSaida30;
    QGroupBox *grpEnvio;
    QGridLayout *gridLayout_7;
    QPushButton *btEnviar;
    QLabel *txtEnvioPerson;
    QCheckBox *cmIncluiNulo;
    QLineEdit *edtMsgPerson;
    QPushButton *btEnviaPerson;
    QMenuBar *barraMenu;
    QMenu *menuArquivo;
    QMenu *menuFerramentas;
    QMenu *menuAjuda;
    QStatusBar *barraEstado;

    void setupUi(QMainWindow *jnlPrincipal)
    {
        if (jnlPrincipal->objectName().isEmpty())
            jnlPrincipal->setObjectName(QStringLiteral("jnlPrincipal"));
        jnlPrincipal->resize(654, 540);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(jnlPrincipal->sizePolicy().hasHeightForWidth());
        jnlPrincipal->setSizePolicy(sizePolicy);
        jnlPrincipal->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #000;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #E1E1E1;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: #FFF;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: #FFF;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #FFF;\n"
"    border: 1px solid #FDAC00;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #FFF,\n"
"        stop:0.4 #FEFEFE/*,\n"
"        stop:0.2 #343434,\n"
"      "
                        "  stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #FDAC00;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"    background-color: #FFF;	\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #FFF;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #555;\n"
"    background-color: #DDD;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FFF, stop: 0.1 #FEFEFE, stop: 1 #FFF);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FFF, stop: 0 #FEFEFE, stop: 1 #FFF);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #000;\n"
""
                        "    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FFF, stop: 0.1 #FFF, stop: 0.5 #FFF, stop: 0.9 #FFF, stop: 1 #FFF);\n"
"    border-width: 1px;\n"
"    border-color: gray;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FFF, stop: 0.1 #FEFEFE, stop: 0.5 #EFEFEF, stop: 0.9 #FFF, stop: 1 #EFEFEF);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FFF, stop: 0.1 #FEFEFE, stop: 0.5 #EEE, stop: 0.9 #FEFEFE, stop: 1 #FFF);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 2;\n"
"}\n"
"\n"
"QComboBox:editable\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: white;\n"
"    border-style: solid;\n"
"    border: 1px solid bla"
                        "ck;\n"
"    border-radius: 2;\n"
"}\n"
"\n"
"QComboBox:editable:hover\n"
"{\n"
"    border: 1px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FFF, stop: 0.1 #FEFEFE, stop: 0.5 #EEE, stop: 0.9 #FEFEFE, stop: 1 #FFF);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     b"
                        "order-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"	 image: url(:/imgs/downarrow.png);\n"
"}\n"
"\n"
"QGroupBox {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFF, stop: 1 #FFF);\n"
"    border: 1px solid gray;\n"
"    border-radius: 5px;\n"
"    margin-top: 4ex; /* leave space at the top for the title */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* position at the top center */\n"
"    padding: 0 3px;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FFF, stop: 1 #FFF);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"	border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7"
                        "801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QPlainTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #FFF, stop: 0.2 #F9F9F9, stop: 1 #FFF);\n"
"      height: 11px;\n"
"      margin: 0px 20px 0px 20px;\n"
"      border: 1px solid #EEE;\n"
"      border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #EEE;\n"
"      border-radius: 5px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
""
                        "      width: 18px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #EEE;\n"
"      border-radius: 5px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 18px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 0px solid #EEE;\n"
"      width: 0px;\n"
"      height: 0px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #FFF, stop: 0.2 #F9F9F9, stop: 1 #FFF);\n"
"      width: 11px;\n"
"      margin: 20px 0 20px 0;\n"
"      border: 1px solid #EEE;\n"
"      border-radius: 5px;	  \n"
"}\n"
"\n"
"QScrollBar::"
                        "handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 5px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #EEE;\n"
"      border-radius: 5px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 18px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #EEE;\n"
"      border-radius: 5px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 18px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 0px solid #EEE;\n"
"      width: 0px;\n"
"      height: 0px;\n"
"      background: white;\n"
""
                        "}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #FEFEFE;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #FEFEFE;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"	color: #414141;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar "
                        "*/\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
""
                        "QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/imgs/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 1px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #777, stop: 0.5 #777, stop: 0.6 #777, stop:1 #777);\n"
"    color: #777;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid lightgrey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid"
                        " #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
"	margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #000;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121,"
                        " stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #000;\n"
"    background-color: #FFF;\n"
"    border: 1px solid #B1B1B1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton:disabled{\n"
"    color: #555;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #FFAA00,\n"
"        stop: 0.3 #FFF\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #000;\n"
"    background-color: #FFF;\n"
"    border: 1px solid #000;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #FFAA00;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/i"
                        "mgs/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}\n"
"\n"
"QLabel:disabled\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QSizeGrip\n"
"{\n"
"    image: url(:/imgs/sizegrip.png);\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}"));
        menuBtAbrirPorta = new QAction(jnlPrincipal);
        menuBtAbrirPorta->setObjectName(QStringLiteral("menuBtAbrirPorta"));
        menuBtFecharPorta = new QAction(jnlPrincipal);
        menuBtFecharPorta->setObjectName(QStringLiteral("menuBtFecharPorta"));
        menuBtFecharPorta->setEnabled(false);
        action = new QAction(jnlPrincipal);
        action->setObjectName(QStringLiteral("action"));
        menuBtSalvarSessComo = new QAction(jnlPrincipal);
        menuBtSalvarSessComo->setObjectName(QStringLiteral("menuBtSalvarSessComo"));
        menuBtSalvarSess = new QAction(jnlPrincipal);
        menuBtSalvarSess->setObjectName(QStringLiteral("menuBtSalvarSess"));
        menuBtAbrirSes = new QAction(jnlPrincipal);
        menuBtAbrirSes->setObjectName(QStringLiteral("menuBtAbrirSes"));
        menuBtSair = new QAction(jnlPrincipal);
        menuBtSair->setObjectName(QStringLiteral("menuBtSair"));
        menuBtAjuda = new QAction(jnlPrincipal);
        menuBtAjuda->setObjectName(QStringLiteral("menuBtAjuda"));
        menuBtSobre = new QAction(jnlPrincipal);
        menuBtSobre->setObjectName(QStringLiteral("menuBtSobre"));
        menuBtReg = new QAction(jnlPrincipal);
        menuBtReg->setObjectName(QStringLiteral("menuBtReg"));
        menuBtConfig = new QAction(jnlPrincipal);
        menuBtConfig->setObjectName(QStringLiteral("menuBtConfig"));
        Fundo = new QWidget(jnlPrincipal);
        Fundo->setObjectName(QStringLiteral("Fundo"));
        gridLayout_2 = new QGridLayout(Fundo);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        arrVertPrin = new QGridLayout();
        arrVertPrin->setSpacing(6);
        arrVertPrin->setObjectName(QStringLiteral("arrVertPrin"));
        arrHorzPrim = new QHBoxLayout();
        arrHorzPrim->setSpacing(6);
        arrHorzPrim->setObjectName(QStringLiteral("arrHorzPrim"));
        arrVertSec = new QVBoxLayout();
        arrVertSec->setSpacing(6);
        arrVertSec->setObjectName(QStringLiteral("arrVertSec"));
        grpContrPorta = new QGroupBox(Fundo);
        grpContrPorta->setObjectName(QStringLiteral("grpContrPorta"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grpContrPorta->sizePolicy().hasHeightForWidth());
        grpContrPorta->setSizePolicy(sizePolicy1);
        grpContrPorta->setMinimumSize(QSize(300, 120));
        grpContrPorta->setMaximumSize(QSize(300, 120));
        QFont font;
        font.setPointSize(12);
        grpContrPorta->setFont(font);
        btInCon = new QPushButton(grpContrPorta);
        btInCon->setObjectName(QStringLiteral("btInCon"));
        btInCon->setGeometry(QRect(10, 20, 281, 41));
        btInCon->setFont(font);
        btEncCon = new QPushButton(grpContrPorta);
        btEncCon->setObjectName(QStringLiteral("btEncCon"));
        btEncCon->setEnabled(false);
        btEncCon->setGeometry(QRect(10, 70, 281, 41));
        btEncCon->setFont(font);

        arrVertSec->addWidget(grpContrPorta);

        grpConfigPorta = new QGroupBox(Fundo);
        grpConfigPorta->setObjectName(QStringLiteral("grpConfigPorta"));
        grpConfigPorta->setEnabled(true);
        grpConfigPorta->setMinimumSize(QSize(300, 0));
        grpConfigPorta->setMaximumSize(QSize(300, 16777215));
        grpConfigPorta->setFont(font);
        gridLayout_3 = new QGridLayout(grpConfigPorta);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        areaRolConfig = new QScrollArea(grpConfigPorta);
        areaRolConfig->setObjectName(QStringLiteral("areaRolConfig"));
        areaRolConfig->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        areaRolConfig->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        areaRolConfig->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 278, 184));
        gridLayout_6 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        numPorta = new QSpinBox(scrollAreaWidgetContents_2);
        numPorta->setObjectName(QStringLiteral("numPorta"));
        numPorta->setFont(font);
        numPorta->setMaximum(255);

        gridLayout_6->addWidget(numPorta, 0, 2, 1, 1);

        txtPortaAtual = new QLabel(scrollAreaWidgetContents_2);
        txtPortaAtual->setObjectName(QStringLiteral("txtPortaAtual"));
        txtPortaAtual->setFont(font);

        gridLayout_6->addWidget(txtPortaAtual, 0, 0, 1, 2, Qt::AlignTop);

        cmEnvioAuto = new QCheckBox(scrollAreaWidgetContents_2);
        cmEnvioAuto->setObjectName(QStringLiteral("cmEnvioAuto"));
        cmEnvioAuto->setEnabled(true);
        cmEnvioAuto->setFont(font);
        cmEnvioAuto->setChecked(true);

        gridLayout_6->addWidget(cmEnvioAuto, 3, 0, 1, 3);

        btAjustes = new QPushButton(scrollAreaWidgetContents_2);
        btAjustes->setObjectName(QStringLiteral("btAjustes"));
        btAjustes->setMinimumSize(QSize(0, 30));
        btAjustes->setMaximumSize(QSize(16777215, 30));
        btAjustes->setFont(font);

        gridLayout_6->addWidget(btAjustes, 8, 0, 3, 3);

        espcVertConfigPorta = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(espcVertConfigPorta, 11, 1, 1, 1);

        areaRolConfig->setWidget(scrollAreaWidgetContents_2);

        gridLayout_3->addWidget(areaRolConfig, 0, 0, 1, 1);


        arrVertSec->addWidget(grpConfigPorta);


        arrHorzPrim->addLayout(arrVertSec);

        arrVertTerc = new QVBoxLayout();
        arrVertTerc->setSpacing(6);
        arrVertTerc->setObjectName(QStringLiteral("arrVertTerc"));
        cxArrDisp = new QGroupBox(Fundo);
        cxArrDisp->setObjectName(QStringLiteral("cxArrDisp"));
        cxArrDisp->setEnabled(true);
        cxArrDisp->setMinimumSize(QSize(300, 150));
        cxArrDisp->setMaximumSize(QSize(16777215, 150));
        cxArrDisp->setFont(font);
        gridLayout_5 = new QGridLayout(cxArrDisp);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        areaRolDisp = new QScrollArea(cxArrDisp);
        areaRolDisp->setObjectName(QStringLiteral("areaRolDisp"));
        areaRolDisp->setEnabled(false);
        areaRolDisp->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        areaRolDisp->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 289, 116));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        csDisp3 = new QRadioButton(scrollAreaWidgetContents_3);
        csDisp3->setObjectName(QStringLiteral("csDisp3"));
        csDisp3->setFont(font);

        gridLayout_4->addWidget(csDisp3, 1, 0, 1, 1);

        csDisp1 = new QRadioButton(scrollAreaWidgetContents_3);
        csDisp1->setObjectName(QStringLiteral("csDisp1"));
        csDisp1->setFont(font);
        csDisp1->setCheckable(true);
        csDisp1->setChecked(true);

        gridLayout_4->addWidget(csDisp1, 0, 0, 1, 1);

        csDisp2 = new QRadioButton(scrollAreaWidgetContents_3);
        csDisp2->setObjectName(QStringLiteral("csDisp2"));
        csDisp2->setFont(font);

        gridLayout_4->addWidget(csDisp2, 0, 1, 1, 1);

        csDisp4 = new QRadioButton(scrollAreaWidgetContents_3);
        csDisp4->setObjectName(QStringLiteral("csDisp4"));
        csDisp4->setFont(font);

        gridLayout_4->addWidget(csDisp4, 1, 1, 1, 1);

        csDisp6 = new QRadioButton(scrollAreaWidgetContents_3);
        csDisp6->setObjectName(QStringLiteral("csDisp6"));
        csDisp6->setFont(font);

        gridLayout_4->addWidget(csDisp6, 2, 1, 1, 1);

        csDisp5 = new QRadioButton(scrollAreaWidgetContents_3);
        csDisp5->setObjectName(QStringLiteral("csDisp5"));
        csDisp5->setFont(font);

        gridLayout_4->addWidget(csDisp5, 2, 0, 1, 1);

        areaRolDisp->setWidget(scrollAreaWidgetContents_3);

        gridLayout_5->addWidget(areaRolDisp, 0, 0, 1, 1);


        arrVertTerc->addWidget(cxArrDisp);

        cxArrSaida = new QGroupBox(Fundo);
        cxArrSaida->setObjectName(QStringLiteral("cxArrSaida"));
        cxArrSaida->setEnabled(true);
        cxArrSaida->setMinimumSize(QSize(300, 0));
        cxArrSaida->setFont(font);
        gridLayout = new QGridLayout(cxArrSaida);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        areaRolSaida = new QScrollArea(cxArrSaida);
        areaRolSaida->setObjectName(QStringLiteral("areaRolSaida"));
        areaRolSaida->setEnabled(false);
        areaRolSaida->setFont(font);
        areaRolSaida->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        areaRolSaida->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 278, 762));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cmSaida1 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida1->setObjectName(QStringLiteral("cmSaida1"));
        cmSaida1->setFont(font);

        verticalLayout_2->addWidget(cmSaida1);

        cmSaida2 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida2->setObjectName(QStringLiteral("cmSaida2"));
        cmSaida2->setFont(font);

        verticalLayout_2->addWidget(cmSaida2);

        cmSaida3 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida3->setObjectName(QStringLiteral("cmSaida3"));
        cmSaida3->setFont(font);
        cmSaida3->setChecked(false);

        verticalLayout_2->addWidget(cmSaida3);

        cmSaida4 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida4->setObjectName(QStringLiteral("cmSaida4"));
        cmSaida4->setFont(font);
        cmSaida4->setChecked(false);

        verticalLayout_2->addWidget(cmSaida4);

        cmSaida5 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida5->setObjectName(QStringLiteral("cmSaida5"));
        cmSaida5->setFont(font);

        verticalLayout_2->addWidget(cmSaida5);

        cmSaida6 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida6->setObjectName(QStringLiteral("cmSaida6"));
        cmSaida6->setFont(font);

        verticalLayout_2->addWidget(cmSaida6);

        cmSaida7 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida7->setObjectName(QStringLiteral("cmSaida7"));
        cmSaida7->setFont(font);

        verticalLayout_2->addWidget(cmSaida7);

        cmSaida8 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida8->setObjectName(QStringLiteral("cmSaida8"));
        cmSaida8->setFont(font);

        verticalLayout_2->addWidget(cmSaida8);

        cmSaida9 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida9->setObjectName(QStringLiteral("cmSaida9"));
        cmSaida9->setFont(font);

        verticalLayout_2->addWidget(cmSaida9);

        cmSaida10 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida10->setObjectName(QStringLiteral("cmSaida10"));
        cmSaida10->setFont(font);

        verticalLayout_2->addWidget(cmSaida10);

        cmSaida11 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida11->setObjectName(QStringLiteral("cmSaida11"));
        cmSaida11->setFont(font);

        verticalLayout_2->addWidget(cmSaida11);

        cmSaida12 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida12->setObjectName(QStringLiteral("cmSaida12"));
        cmSaida12->setFont(font);

        verticalLayout_2->addWidget(cmSaida12);

        cmSaida13 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida13->setObjectName(QStringLiteral("cmSaida13"));
        cmSaida13->setFont(font);

        verticalLayout_2->addWidget(cmSaida13);

        cmSaida14 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida14->setObjectName(QStringLiteral("cmSaida14"));
        cmSaida14->setFont(font);

        verticalLayout_2->addWidget(cmSaida14);

        cmSaida15 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida15->setObjectName(QStringLiteral("cmSaida15"));
        cmSaida15->setFont(font);

        verticalLayout_2->addWidget(cmSaida15);

        cmSaida16 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida16->setObjectName(QStringLiteral("cmSaida16"));
        cmSaida16->setFont(font);

        verticalLayout_2->addWidget(cmSaida16);

        cmSaida17 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida17->setObjectName(QStringLiteral("cmSaida17"));
        cmSaida17->setFont(font);

        verticalLayout_2->addWidget(cmSaida17);

        cmSaida18 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida18->setObjectName(QStringLiteral("cmSaida18"));
        cmSaida18->setFont(font);

        verticalLayout_2->addWidget(cmSaida18);

        cmSaida19 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida19->setObjectName(QStringLiteral("cmSaida19"));
        cmSaida19->setFont(font);

        verticalLayout_2->addWidget(cmSaida19);

        cmSaida20 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida20->setObjectName(QStringLiteral("cmSaida20"));
        cmSaida20->setFont(font);

        verticalLayout_2->addWidget(cmSaida20);

        cmSaida21 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida21->setObjectName(QStringLiteral("cmSaida21"));
        cmSaida21->setFont(font);

        verticalLayout_2->addWidget(cmSaida21);

        cmSaida22 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida22->setObjectName(QStringLiteral("cmSaida22"));
        cmSaida22->setFont(font);

        verticalLayout_2->addWidget(cmSaida22);

        cmSaida23 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida23->setObjectName(QStringLiteral("cmSaida23"));
        cmSaida23->setFont(font);

        verticalLayout_2->addWidget(cmSaida23);

        cmSaida24 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida24->setObjectName(QStringLiteral("cmSaida24"));
        cmSaida24->setFont(font);

        verticalLayout_2->addWidget(cmSaida24);

        cmSaida25 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida25->setObjectName(QStringLiteral("cmSaida25"));
        cmSaida25->setFont(font);

        verticalLayout_2->addWidget(cmSaida25);

        cmSaida26 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida26->setObjectName(QStringLiteral("cmSaida26"));
        cmSaida26->setFont(font);

        verticalLayout_2->addWidget(cmSaida26);

        cmSaida27 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida27->setObjectName(QStringLiteral("cmSaida27"));
        cmSaida27->setEnabled(false);
        cmSaida27->setFont(font);

        verticalLayout_2->addWidget(cmSaida27);

        cmSaida28 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida28->setObjectName(QStringLiteral("cmSaida28"));
        cmSaida28->setEnabled(false);
        cmSaida28->setFont(font);

        verticalLayout_2->addWidget(cmSaida28);

        cmSaida29 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida29->setObjectName(QStringLiteral("cmSaida29"));
        cmSaida29->setEnabled(false);
        cmSaida29->setFont(font);

        verticalLayout_2->addWidget(cmSaida29);

        cmSaida30 = new QCheckBox(scrollAreaWidgetContents);
        cmSaida30->setObjectName(QStringLiteral("cmSaida30"));
        cmSaida30->setEnabled(false);
        cmSaida30->setFont(font);

        verticalLayout_2->addWidget(cmSaida30);

        areaRolSaida->setWidget(scrollAreaWidgetContents);
        cmSaida1->raise();
        cmSaida3->raise();
        cmSaida4->raise();
        cmSaida5->raise();
        cmSaida6->raise();
        cmSaida7->raise();
        cmSaida9->raise();
        cmSaida10->raise();
        cmSaida11->raise();
        cmSaida12->raise();
        cmSaida13->raise();
        cmSaida14->raise();
        cmSaida15->raise();
        cmSaida16->raise();
        cmSaida17->raise();
        cmSaida18->raise();
        cmSaida19->raise();
        cmSaida20->raise();
        cmSaida2->raise();
        cmSaida24->raise();
        cmSaida30->raise();
        cmSaida21->raise();
        cmSaida28->raise();
        cmSaida25->raise();
        cmSaida22->raise();
        cmSaida23->raise();
        cmSaida29->raise();
        cmSaida27->raise();
        cmSaida26->raise();
        cmSaida8->raise();

        gridLayout->addWidget(areaRolSaida, 0, 0, 1, 1);


        arrVertTerc->addWidget(cxArrSaida);


        arrHorzPrim->addLayout(arrVertTerc);


        arrVertPrin->addLayout(arrHorzPrim, 0, 0, 1, 1);

        grpEnvio = new QGroupBox(Fundo);
        grpEnvio->setObjectName(QStringLiteral("grpEnvio"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(grpEnvio->sizePolicy().hasHeightForWidth());
        grpEnvio->setSizePolicy(sizePolicy2);
        grpEnvio->setMinimumSize(QSize(0, 120));
        grpEnvio->setMaximumSize(QSize(16777215, 120));
        grpEnvio->setFont(font);
        gridLayout_7 = new QGridLayout(grpEnvio);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        btEnviar = new QPushButton(grpEnvio);
        btEnviar->setObjectName(QStringLiteral("btEnviar"));
        btEnviar->setEnabled(false);
        btEnviar->setFont(font);

        gridLayout_7->addWidget(btEnviar, 2, 1, 1, 1);

        txtEnvioPerson = new QLabel(grpEnvio);
        txtEnvioPerson->setObjectName(QStringLiteral("txtEnvioPerson"));
        txtEnvioPerson->setEnabled(false);
        txtEnvioPerson->setFont(font);

        gridLayout_7->addWidget(txtEnvioPerson, 0, 0, 1, 1);

        cmIncluiNulo = new QCheckBox(grpEnvio);
        cmIncluiNulo->setObjectName(QStringLiteral("cmIncluiNulo"));
        cmIncluiNulo->setEnabled(false);
        cmIncluiNulo->setFont(font);
        cmIncluiNulo->setChecked(true);

        gridLayout_7->addWidget(cmIncluiNulo, 1, 1, 1, 1);

        edtMsgPerson = new QLineEdit(grpEnvio);
        edtMsgPerson->setObjectName(QStringLiteral("edtMsgPerson"));
        edtMsgPerson->setEnabled(false);
        edtMsgPerson->setFont(font);

        gridLayout_7->addWidget(edtMsgPerson, 0, 1, 1, 1);

        btEnviaPerson = new QPushButton(grpEnvio);
        btEnviaPerson->setObjectName(QStringLiteral("btEnviaPerson"));
        btEnviaPerson->setEnabled(false);
        btEnviaPerson->setFont(font);

        gridLayout_7->addWidget(btEnviaPerson, 0, 2, 1, 1);


        arrVertPrin->addWidget(grpEnvio, 1, 0, 1, 1);


        gridLayout_2->addLayout(arrVertPrin, 0, 0, 1, 1);

        jnlPrincipal->setCentralWidget(Fundo);
        barraMenu = new QMenuBar(jnlPrincipal);
        barraMenu->setObjectName(QStringLiteral("barraMenu"));
        barraMenu->setGeometry(QRect(0, 0, 654, 21));
        menuArquivo = new QMenu(barraMenu);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuFerramentas = new QMenu(barraMenu);
        menuFerramentas->setObjectName(QStringLiteral("menuFerramentas"));
        menuAjuda = new QMenu(barraMenu);
        menuAjuda->setObjectName(QStringLiteral("menuAjuda"));
        jnlPrincipal->setMenuBar(barraMenu);
        barraEstado = new QStatusBar(jnlPrincipal);
        barraEstado->setObjectName(QStringLiteral("barraEstado"));
        jnlPrincipal->setStatusBar(barraEstado);

        barraMenu->addAction(menuArquivo->menuAction());
        barraMenu->addAction(menuFerramentas->menuAction());
        barraMenu->addAction(menuAjuda->menuAction());
        menuArquivo->addAction(menuBtAbrirPorta);
        menuArquivo->addAction(menuBtFecharPorta);
        menuArquivo->addSeparator();
        menuArquivo->addAction(menuBtSalvarSessComo);
        menuArquivo->addAction(menuBtSalvarSess);
        menuArquivo->addAction(menuBtAbrirSes);
        menuArquivo->addSeparator();
        menuArquivo->addAction(menuBtSair);
        menuFerramentas->addAction(menuBtReg);
        menuFerramentas->addAction(menuBtConfig);
        menuAjuda->addAction(menuBtAjuda);
        menuAjuda->addAction(menuBtSobre);

        retranslateUi(jnlPrincipal);

        QMetaObject::connectSlotsByName(jnlPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *jnlPrincipal)
    {
        jnlPrincipal->setWindowTitle(QApplication::translate("jnlPrincipal", "Ninterserial | Nintersoft", 0));
        menuBtAbrirPorta->setText(QApplication::translate("jnlPrincipal", "Abrir porta", 0));
        menuBtFecharPorta->setText(QApplication::translate("jnlPrincipal", "Fechar porta", 0));
        action->setText(QApplication::translate("jnlPrincipal", "-", 0));
        menuBtSalvarSessComo->setText(QApplication::translate("jnlPrincipal", "Salvar sess\303\243o como...", 0));
        menuBtSalvarSess->setText(QApplication::translate("jnlPrincipal", "Salvar sess\303\243o", 0));
        menuBtAbrirSes->setText(QApplication::translate("jnlPrincipal", "Abrir sess\303\243o", 0));
        menuBtSair->setText(QApplication::translate("jnlPrincipal", "Sair", 0));
        menuBtSair->setShortcut(QApplication::translate("jnlPrincipal", "Ctrl+D", 0));
        menuBtAjuda->setText(QApplication::translate("jnlPrincipal", "Ajuda", 0));
        menuBtAjuda->setShortcut(QApplication::translate("jnlPrincipal", "F1", 0));
        menuBtSobre->setText(QApplication::translate("jnlPrincipal", "Sobre", 0));
        menuBtSobre->setShortcut(QApplication::translate("jnlPrincipal", "Ctrl+G", 0));
        menuBtReg->setText(QApplication::translate("jnlPrincipal", "Registro de eventos", 0));
        menuBtReg->setShortcut(QApplication::translate("jnlPrincipal", "Ctrl+R", 0));
        menuBtConfig->setText(QApplication::translate("jnlPrincipal", "Configura\303\247\303\265es", 0));
        menuBtConfig->setShortcut(QApplication::translate("jnlPrincipal", "Ctrl+O", 0));
        grpContrPorta->setTitle(QApplication::translate("jnlPrincipal", "Ativa\303\247\303\243o e estado", 0));
        btInCon->setText(QApplication::translate("jnlPrincipal", "Iniciar conex\303\243o", 0));
        btEncCon->setText(QApplication::translate("jnlPrincipal", "Encerrar conex\303\243o", 0));
        grpConfigPorta->setTitle(QApplication::translate("jnlPrincipal", "Configura\303\247\303\243o de porta", 0));
        txtPortaAtual->setText(QApplication::translate("jnlPrincipal", "Porta atual :", 0));
        cmEnvioAuto->setText(QApplication::translate("jnlPrincipal", "Envio autom\303\241tico de informa\303\247\303\243o", 0));
        btAjustes->setText(QApplication::translate("jnlPrincipal", "Ajustes", 0));
        cxArrDisp->setTitle(QApplication::translate("jnlPrincipal", "Dispositivo destino", 0));
        csDisp3->setText(QApplication::translate("jnlPrincipal", "Dispositivo 3", 0));
        csDisp1->setText(QApplication::translate("jnlPrincipal", "Dispositivo 1", 0));
        csDisp2->setText(QApplication::translate("jnlPrincipal", "Dispositivo 2", 0));
        csDisp4->setText(QApplication::translate("jnlPrincipal", "Dispositivo 4", 0));
        csDisp6->setText(QApplication::translate("jnlPrincipal", "Dispositivo 6", 0));
        csDisp5->setText(QApplication::translate("jnlPrincipal", "Dispositivo 5", 0));
        cxArrSaida->setTitle(QApplication::translate("jnlPrincipal", "Sa\303\255da destino", 0));
        cmSaida1->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 1", 0));
        cmSaida2->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 2", 0));
        cmSaida3->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 3", 0));
        cmSaida4->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 4", 0));
        cmSaida5->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 5", 0));
        cmSaida6->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 6", 0));
        cmSaida7->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 7", 0));
        cmSaida8->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272meto 8", 0));
        cmSaida9->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 9", 0));
        cmSaida10->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 10", 0));
        cmSaida11->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 11", 0));
        cmSaida12->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 12", 0));
        cmSaida13->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 13", 0));
        cmSaida14->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 14", 0));
        cmSaida15->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 15", 0));
        cmSaida16->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 16", 0));
        cmSaida17->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 17", 0));
        cmSaida18->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 18", 0));
        cmSaida19->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 19", 0));
        cmSaida20->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 20", 0));
        cmSaida21->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 21", 0));
        cmSaida22->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 22", 0));
        cmSaida23->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 23", 0));
        cmSaida24->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 24", 0));
        cmSaida25->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 25", 0));
        cmSaida26->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 26", 0));
        cmSaida27->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 27", 0));
        cmSaida28->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 28", 0));
        cmSaida29->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 29", 0));
        cmSaida30->setText(QApplication::translate("jnlPrincipal", "Sa\303\255da n\303\272mero 30", 0));
        grpEnvio->setTitle(QApplication::translate("jnlPrincipal", "Op\303\247\303\265es e a\303\247\303\265es de envio", 0));
        btEnviar->setText(QApplication::translate("jnlPrincipal", "Enviar todos os comandos marcados", 0));
        txtEnvioPerson->setText(QApplication::translate("jnlPrincipal", "Mensagem : ", 0));
        cmIncluiNulo->setText(QApplication::translate("jnlPrincipal", "Incluir caractere nulo (para indicar fim de transmiss\303\243o)", 0));
        btEnviaPerson->setText(QApplication::translate("jnlPrincipal", "Enviar", 0));
        menuArquivo->setTitle(QApplication::translate("jnlPrincipal", "Arquivo", 0));
        menuFerramentas->setTitle(QApplication::translate("jnlPrincipal", "Ferramentas", 0));
        menuAjuda->setTitle(QApplication::translate("jnlPrincipal", "Ajuda", 0));
    } // retranslateUi

};

namespace Ui {
    class jnlPrincipal: public Ui_jnlPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JNLPRINCIPAL_H
