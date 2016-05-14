/********************************************************************************
** Form generated from reading UI file 'jnlconfiguracao.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JNLCONFIGURACAO_H
#define UI_JNLCONFIGURACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_jnlConfiguracao
{
public:
    QWidget *grupoPrincipal;
    QGroupBox *txtBitParada;
    QLabel *txtTaxaCom;
    QLabel *txtTamByte;
    QLabel *txtParidade;
    QLabel *txt;
    QComboBox *coTaxaCom;
    QComboBox *coTamByte;
    QComboBox *coParidade;
    QComboBox *coBitParada;
    QPushButton *btSalvarConfig;
    QGroupBox *grpConfigInter;
    QRadioButton *csPortugues;
    QRadioButton *csIngles;
    QPushButton *btRestaurar;
    QCheckBox *cmSalvarPadrao;
    QMenuBar *menubar;

    void setupUi(QMainWindow *jnlConfiguracao)
    {
        if (jnlConfiguracao->objectName().isEmpty())
            jnlConfiguracao->setObjectName(QStringLiteral("jnlConfiguracao"));
        jnlConfiguracao->resize(520, 295);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(jnlConfiguracao->sizePolicy().hasHeightForWidth());
        jnlConfiguracao->setSizePolicy(sizePolicy);
        jnlConfiguracao->setMinimumSize(QSize(520, 295));
        jnlConfiguracao->setMaximumSize(QSize(520, 295));
        jnlConfiguracao->setStyleSheet(QLatin1String("QToolTip\n"
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
        grupoPrincipal = new QWidget(jnlConfiguracao);
        grupoPrincipal->setObjectName(QStringLiteral("grupoPrincipal"));
        txtBitParada = new QGroupBox(grupoPrincipal);
        txtBitParada->setObjectName(QStringLiteral("txtBitParada"));
        txtBitParada->setGeometry(QRect(10, 0, 501, 161));
        QFont font;
        font.setPointSize(12);
        txtBitParada->setFont(font);
        txtTaxaCom = new QLabel(txtBitParada);
        txtTaxaCom->setObjectName(QStringLiteral("txtTaxaCom"));
        txtTaxaCom->setGeometry(QRect(10, 30, 191, 21));
        QFont font1;
        font1.setPointSize(10);
        txtTaxaCom->setFont(font1);
        txtTamByte = new QLabel(txtBitParada);
        txtTamByte->setObjectName(QStringLiteral("txtTamByte"));
        txtTamByte->setGeometry(QRect(10, 60, 191, 21));
        txtTamByte->setFont(font1);
        txtParidade = new QLabel(txtBitParada);
        txtParidade->setObjectName(QStringLiteral("txtParidade"));
        txtParidade->setGeometry(QRect(10, 90, 191, 21));
        txtParidade->setFont(font1);
        txt = new QLabel(txtBitParada);
        txt->setObjectName(QStringLiteral("txt"));
        txt->setGeometry(QRect(10, 120, 191, 21));
        txt->setFont(font1);
        coTaxaCom = new QComboBox(txtBitParada);
        coTaxaCom->setObjectName(QStringLiteral("coTaxaCom"));
        coTaxaCom->setGeometry(QRect(200, 30, 291, 21));
        coTaxaCom->setFont(font1);
        coTaxaCom->setEditable(true);
        coTamByte = new QComboBox(txtBitParada);
        coTamByte->setObjectName(QStringLiteral("coTamByte"));
        coTamByte->setGeometry(QRect(200, 60, 291, 22));
        coTamByte->setFont(font1);
        coTamByte->setEditable(true);
        coParidade = new QComboBox(txtBitParada);
        coParidade->setObjectName(QStringLiteral("coParidade"));
        coParidade->setGeometry(QRect(200, 90, 291, 22));
        coParidade->setFont(font1);
        coParidade->setEditable(false);
        coBitParada = new QComboBox(txtBitParada);
        coBitParada->setObjectName(QStringLiteral("coBitParada"));
        coBitParada->setGeometry(QRect(200, 120, 291, 22));
        coBitParada->setFont(font1);
        coBitParada->setEditable(false);
        btSalvarConfig = new QPushButton(grupoPrincipal);
        btSalvarConfig->setObjectName(QStringLiteral("btSalvarConfig"));
        btSalvarConfig->setGeometry(QRect(180, 250, 141, 31));
        btSalvarConfig->setFont(font1);
        grpConfigInter = new QGroupBox(grupoPrincipal);
        grpConfigInter->setObjectName(QStringLiteral("grpConfigInter"));
        grpConfigInter->setGeometry(QRect(10, 170, 501, 61));
        grpConfigInter->setFont(font);
        csPortugues = new QRadioButton(grpConfigInter);
        csPortugues->setObjectName(QStringLiteral("csPortugues"));
        csPortugues->setGeometry(QRect(20, 30, 221, 21));
        csPortugues->setFont(font);
        csPortugues->setChecked(true);
        csIngles = new QRadioButton(grpConfigInter);
        csIngles->setObjectName(QStringLiteral("csIngles"));
        csIngles->setEnabled(true);
        csIngles->setGeometry(QRect(260, 30, 221, 21));
        csIngles->setFont(font);
        csIngles->setCheckable(true);
        btRestaurar = new QPushButton(grupoPrincipal);
        btRestaurar->setObjectName(QStringLiteral("btRestaurar"));
        btRestaurar->setGeometry(QRect(20, 250, 141, 31));
        cmSalvarPadrao = new QCheckBox(grupoPrincipal);
        cmSalvarPadrao->setObjectName(QStringLiteral("cmSalvarPadrao"));
        cmSalvarPadrao->setEnabled(true);
        cmSalvarPadrao->setGeometry(QRect(330, 260, 151, 17));
        cmSalvarPadrao->setFont(font1);
        jnlConfiguracao->setCentralWidget(grupoPrincipal);
        menubar = new QMenuBar(jnlConfiguracao);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 520, 21));
        jnlConfiguracao->setMenuBar(menubar);

        retranslateUi(jnlConfiguracao);

        coTaxaCom->setCurrentIndex(5);
        coTamByte->setCurrentIndex(1);
        coParidade->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(jnlConfiguracao);
    } // setupUi

    void retranslateUi(QMainWindow *jnlConfiguracao)
    {
        jnlConfiguracao->setWindowTitle(QApplication::translate("jnlConfiguracao", "Configura\303\247\303\265es | Ninterserial", 0));
        txtBitParada->setTitle(QApplication::translate("jnlConfiguracao", "Configura\303\247\303\265es da porta", 0));
        txtTaxaCom->setText(QApplication::translate("jnlConfiguracao", "Taxa de comunica\303\247\303\243o :", 0));
        txtTamByte->setText(QApplication::translate("jnlConfiguracao", "Tamanho do Byte :", 0));
        txtParidade->setText(QApplication::translate("jnlConfiguracao", "Modo de paridade :", 0));
        txt->setText(QApplication::translate("jnlConfiguracao", "Bit de parada :", 0));
        coTaxaCom->clear();
        coTaxaCom->insertItems(0, QStringList()
         << QApplication::translate("jnlConfiguracao", "230400", 0)
         << QApplication::translate("jnlConfiguracao", "115200", 0)
         << QApplication::translate("jnlConfiguracao", "57600", 0)
         << QApplication::translate("jnlConfiguracao", "38400", 0)
         << QApplication::translate("jnlConfiguracao", "28800", 0)
         << QApplication::translate("jnlConfiguracao", "19200", 0)
         << QApplication::translate("jnlConfiguracao", "14400", 0)
         << QApplication::translate("jnlConfiguracao", "9600", 0)
         << QApplication::translate("jnlConfiguracao", "4800", 0)
         << QApplication::translate("jnlConfiguracao", "2400", 0)
        );
        coTamByte->clear();
        coTamByte->insertItems(0, QStringList()
         << QApplication::translate("jnlConfiguracao", "4", 0)
         << QApplication::translate("jnlConfiguracao", "8", 0)
        );
        coParidade->clear();
        coParidade->insertItems(0, QStringList()
         << QApplication::translate("jnlConfiguracao", "NOPARITY", 0)
         << QApplication::translate("jnlConfiguracao", "ODDPARITY", 0)
         << QApplication::translate("jnlConfiguracao", "EVENPARITY", 0)
         << QApplication::translate("jnlConfiguracao", "MARKPARITY", 0)
         << QApplication::translate("jnlConfiguracao", "SPACEPARITY", 0)
        );
        coBitParada->clear();
        coBitParada->insertItems(0, QStringList()
         << QApplication::translate("jnlConfiguracao", "ONESTOPBIT", 0)
         << QApplication::translate("jnlConfiguracao", "ONE5STOPBITS", 0)
         << QApplication::translate("jnlConfiguracao", "TWOSTOPBITS", 0)
        );
        btSalvarConfig->setText(QApplication::translate("jnlConfiguracao", "Salvar", 0));
        grpConfigInter->setTitle(QApplication::translate("jnlConfiguracao", "Idioma", 0));
        csPortugues->setText(QApplication::translate("jnlConfiguracao", "Portugu\303\252s", 0));
        csIngles->setText(QApplication::translate("jnlConfiguracao", "Ingl\303\252s", 0));
        btRestaurar->setText(QApplication::translate("jnlConfiguracao", "Restaurar", 0));
        cmSalvarPadrao->setText(QApplication::translate("jnlConfiguracao", "Salvar como padr\303\243o", 0));
    } // retranslateUi

};

namespace Ui {
    class jnlConfiguracao: public Ui_jnlConfiguracao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JNLCONFIGURACAO_H
