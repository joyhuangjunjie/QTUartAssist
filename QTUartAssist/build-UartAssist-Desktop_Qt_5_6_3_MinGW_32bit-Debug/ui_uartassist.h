/********************************************************************************
** Form generated from reading UI file 'uartassist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UARTASSIST_H
#define UI_UARTASSIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UartAssist
{
public:
    QAction *actionAbout;
    QAction *actionLoraMeter;
    QAction *actionLoRaTherm;
    QAction *actionOpen;
    QAction *actionConfig;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *openSerialPortButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *serialPortcomboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *BaudRatecomboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *ParityWidthcomboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *DataWidthcomboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *StopWidthcomboBox;
    QPushButton *RefreshBtn;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *ASCIIRadio;
    QRadioButton *HexRadio;
    QPushButton *clear;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *CalSendWriteInfo;
    QCheckBox *ShowSend;
    QCheckBox *ShowTime;
    QCheckBox *SaveRecDataToTxtFile;
    QGroupBox *groupBox_3;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *ASCIIRadio_Recieve;
    QRadioButton *HexRadio_Receive;
    QPushButton *cleanSendBtn;
    QCheckBox *check_Repeat;
    QSpinBox *spinBox;
    QLabel *label_6;
    QTextBrowser *textBrowserLog;
    QPushButton *sendBtn;
    QTextEdit *SendtextEdit;
    QPushButton *SUMBtn;
    QPushButton *CRC16Btn;
    QTextEdit *RecvtextEdit;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_3;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QComboBox *comboBox_nettype;
    QLabel *label_9;
    QLabel *label_10;
    QComboBox *comboBox_myIPaddr;
    QLabel *label_11;
    QLineEdit *lineEdit_netport;
    QPushButton *pushButton_netlisten;
    QGroupBox *groupBox_5;
    QCheckBox *checkBox_UARTsendEN;
    QCheckBox *checkBox_NETsendEN;
    QTextEdit *textEdit_netlistenlog;
    QLabel *label_12;
    QComboBox *comboBox_clientIPaddr;
    QLabel *label_13;
    QLabel *label_Log;
    QPushButton *pushButton_clearListenlog;
    QPushButton *cleanCntButton;
    QLabel *label_8;
    QLCDNumber *RxLCD;
    QLabel *label_7;
    QLCDNumber *TxLCD;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuItem;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UartAssist)
    {
        if (UartAssist->objectName().isEmpty())
            UartAssist->setObjectName(QStringLiteral("UartAssist"));
        UartAssist->resize(888, 580);
        actionAbout = new QAction(UartAssist);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionLoraMeter = new QAction(UartAssist);
        actionLoraMeter->setObjectName(QStringLiteral("actionLoraMeter"));
        actionLoraMeter->setCheckable(true);
        actionLoRaTherm = new QAction(UartAssist);
        actionLoRaTherm->setObjectName(QStringLiteral("actionLoRaTherm"));
        actionLoRaTherm->setCheckable(true);
        actionOpen = new QAction(UartAssist);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Resources/open_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionConfig = new QAction(UartAssist);
        actionConfig->setObjectName(QStringLiteral("actionConfig"));
        centralWidget = new QWidget(UartAssist);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 161, 221));
        openSerialPortButton = new QPushButton(groupBox);
        openSerialPortButton->setObjectName(QStringLiteral("openSerialPortButton"));
        openSerialPortButton->setGeometry(QRect(10, 160, 121, 51));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Resources/open_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        openSerialPortButton->setIcon(icon1);
        openSerialPortButton->setIconSize(QSize(48, 48));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 118, 136));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        serialPortcomboBox = new QComboBox(layoutWidget);
        serialPortcomboBox->setObjectName(QStringLiteral("serialPortcomboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serialPortcomboBox->sizePolicy().hasHeightForWidth());
        serialPortcomboBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(serialPortcomboBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        BaudRatecomboBox = new QComboBox(layoutWidget);
        BaudRatecomboBox->setObjectName(QStringLiteral("BaudRatecomboBox"));
        sizePolicy.setHeightForWidth(BaudRatecomboBox->sizePolicy().hasHeightForWidth());
        BaudRatecomboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(BaudRatecomboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        ParityWidthcomboBox = new QComboBox(layoutWidget);
        ParityWidthcomboBox->setObjectName(QStringLiteral("ParityWidthcomboBox"));
        sizePolicy.setHeightForWidth(ParityWidthcomboBox->sizePolicy().hasHeightForWidth());
        ParityWidthcomboBox->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(ParityWidthcomboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        DataWidthcomboBox = new QComboBox(layoutWidget);
        DataWidthcomboBox->setObjectName(QStringLiteral("DataWidthcomboBox"));
        sizePolicy.setHeightForWidth(DataWidthcomboBox->sizePolicy().hasHeightForWidth());
        DataWidthcomboBox->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(DataWidthcomboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_5->addWidget(label_5);

        StopWidthcomboBox = new QComboBox(layoutWidget);
        StopWidthcomboBox->setObjectName(QStringLiteral("StopWidthcomboBox"));
        sizePolicy.setHeightForWidth(StopWidthcomboBox->sizePolicy().hasHeightForWidth());
        StopWidthcomboBox->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(StopWidthcomboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        RefreshBtn = new QPushButton(groupBox);
        RefreshBtn->setObjectName(QStringLiteral("RefreshBtn"));
        RefreshBtn->setGeometry(QRect(130, 20, 21, 21));
        RefreshBtn->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../Resources/refresh_32px_1133650.png"), QSize(), QIcon::Normal, QIcon::Off);
        RefreshBtn->setIcon(icon2);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 230, 161, 141));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 121, 21));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        ASCIIRadio = new QRadioButton(layoutWidget1);
        ASCIIRadio->setObjectName(QStringLiteral("ASCIIRadio"));

        horizontalLayout_6->addWidget(ASCIIRadio);

        HexRadio = new QRadioButton(layoutWidget1);
        HexRadio->setObjectName(QStringLiteral("HexRadio"));

        horizontalLayout_6->addWidget(HexRadio);

        clear = new QPushButton(groupBox_2);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(90, 90, 61, 23));
        clear->setCursor(QCursor(Qt::PointingHandCursor));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 40, 81, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        CalSendWriteInfo = new QCheckBox(layoutWidget2);
        CalSendWriteInfo->setObjectName(QStringLiteral("CalSendWriteInfo"));

        verticalLayout_2->addWidget(CalSendWriteInfo);

        ShowSend = new QCheckBox(layoutWidget2);
        ShowSend->setObjectName(QStringLiteral("ShowSend"));

        verticalLayout_2->addWidget(ShowSend);

        ShowTime = new QCheckBox(layoutWidget2);
        ShowTime->setObjectName(QStringLiteral("ShowTime"));

        verticalLayout_2->addWidget(ShowTime);

        SaveRecDataToTxtFile = new QCheckBox(groupBox_2);
        SaveRecDataToTxtFile->setObjectName(QStringLiteral("SaveRecDataToTxtFile"));
        SaveRecDataToTxtFile->setGeometry(QRect(10, 110, 131, 21));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 380, 161, 151));
        layoutWidget3 = new QWidget(groupBox_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 20, 121, 21));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        ASCIIRadio_Recieve = new QRadioButton(layoutWidget3);
        ASCIIRadio_Recieve->setObjectName(QStringLiteral("ASCIIRadio_Recieve"));

        horizontalLayout_7->addWidget(ASCIIRadio_Recieve);

        HexRadio_Receive = new QRadioButton(layoutWidget3);
        HexRadio_Receive->setObjectName(QStringLiteral("HexRadio_Receive"));

        horizontalLayout_7->addWidget(HexRadio_Receive);

        cleanSendBtn = new QPushButton(groupBox_3);
        cleanSendBtn->setObjectName(QStringLiteral("cleanSendBtn"));
        cleanSendBtn->setGeometry(QRect(90, 80, 61, 23));
        cleanSendBtn->setCursor(QCursor(Qt::PointingHandCursor));
        check_Repeat = new QCheckBox(groupBox_3);
        check_Repeat->setObjectName(QStringLiteral("check_Repeat"));
        check_Repeat->setGeometry(QRect(10, 50, 71, 21));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(80, 50, 61, 20));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(145, 50, 21, 21));
        textBrowserLog = new QTextBrowser(groupBox_3);
        textBrowserLog->setObjectName(QStringLiteral("textBrowserLog"));
        textBrowserLog->setGeometry(QRect(0, 100, 161, 41));
        check_Repeat->raise();
        spinBox->raise();
        label_6->raise();
        layoutWidget->raise();
        cleanSendBtn->raise();
        textBrowserLog->raise();
        sendBtn = new QPushButton(centralWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(580, 390, 81, 71));
        sendBtn->setCursor(QCursor(Qt::PointingHandCursor));
        SendtextEdit = new QTextEdit(centralWidget);
        SendtextEdit->setObjectName(QStringLiteral("SendtextEdit"));
        SendtextEdit->setGeometry(QRect(180, 390, 391, 91));
        SUMBtn = new QPushButton(centralWidget);
        SUMBtn->setObjectName(QStringLiteral("SUMBtn"));
        SUMBtn->setGeometry(QRect(580, 470, 71, 21));
        CRC16Btn = new QPushButton(centralWidget);
        CRC16Btn->setObjectName(QStringLiteral("CRC16Btn"));
        CRC16Btn->setGeometry(QRect(580, 500, 71, 23));
        RecvtextEdit = new QTextEdit(centralWidget);
        RecvtextEdit->setObjectName(QStringLiteral("RecvtextEdit"));
        RecvtextEdit->setGeometry(QRect(180, 10, 481, 371));
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_3 = new QVBoxLayout(layoutWidget4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(670, 10, 211, 221));
        comboBox_nettype = new QComboBox(groupBox_4);
        comboBox_nettype->setObjectName(QStringLiteral("comboBox_nettype"));
        comboBox_nettype->setGeometry(QRect(10, 40, 141, 22));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 20, 121, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("AcadEref"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_9->setFont(font1);
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 70, 151, 16));
        label_10->setFont(font1);
        comboBox_myIPaddr = new QComboBox(groupBox_4);
        comboBox_myIPaddr->setObjectName(QStringLiteral("comboBox_myIPaddr"));
        comboBox_myIPaddr->setGeometry(QRect(10, 90, 141, 22));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 120, 151, 16));
        label_11->setFont(font1);
        lineEdit_netport = new QLineEdit(groupBox_4);
        lineEdit_netport->setObjectName(QStringLiteral("lineEdit_netport"));
        lineEdit_netport->setGeometry(QRect(10, 140, 141, 21));
        pushButton_netlisten = new QPushButton(groupBox_4);
        pushButton_netlisten->setObjectName(QStringLiteral("pushButton_netlisten"));
        pushButton_netlisten->setGeometry(QRect(10, 170, 141, 41));
        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(670, 410, 91, 91));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        groupBox_5->setFont(font2);
        checkBox_UARTsendEN = new QCheckBox(groupBox_5);
        checkBox_UARTsendEN->setObjectName(QStringLiteral("checkBox_UARTsendEN"));
        checkBox_UARTsendEN->setGeometry(QRect(10, 20, 71, 31));
        checkBox_NETsendEN = new QCheckBox(groupBox_5);
        checkBox_NETsendEN->setObjectName(QStringLiteral("checkBox_NETsendEN"));
        checkBox_NETsendEN->setGeometry(QRect(10, 50, 71, 31));
        textEdit_netlistenlog = new QTextEdit(centralWidget);
        textEdit_netlistenlog->setObjectName(QStringLiteral("textEdit_netlistenlog"));
        textEdit_netlistenlog->setGeometry(QRect(670, 260, 211, 91));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(670, 240, 71, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_12->setFont(font3);
        comboBox_clientIPaddr = new QComboBox(centralWidget);
        comboBox_clientIPaddr->setObjectName(QStringLiteral("comboBox_clientIPaddr"));
        comboBox_clientIPaddr->setGeometry(QRect(670, 380, 211, 21));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(670, 360, 101, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_13->setFont(font4);
        label_Log = new QLabel(centralWidget);
        label_Log->setObjectName(QStringLiteral("label_Log"));
        label_Log->setGeometry(QRect(770, 410, 101, 101));
        label_Log->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Resources/6_96px_1168279_easyicon.ico")));
        pushButton_clearListenlog = new QPushButton(centralWidget);
        pushButton_clearListenlog->setObjectName(QStringLiteral("pushButton_clearListenlog"));
        pushButton_clearListenlog->setGeometry(QRect(810, 240, 71, 21));
        pushButton_clearListenlog->setCursor(QCursor(Qt::PointingHandCursor));
        cleanCntButton = new QPushButton(centralWidget);
        cleanCntButton->setObjectName(QStringLiteral("cleanCntButton"));
        cleanCntButton->setGeometry(QRect(181, 494, 75, 23));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(310, 490, 18, 31));
        RxLCD = new QLCDNumber(centralWidget);
        RxLCD->setObjectName(QStringLiteral("RxLCD"));
        RxLCD->setGeometry(QRect(331, 492, 81, 23));
        RxLCD->setDigitCount(7);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(460, 490, 18, 31));
        TxLCD = new QLCDNumber(centralWidget);
        TxLCD->setObjectName(QStringLiteral("TxLCD"));
        TxLCD->setGeometry(QRect(478, 492, 91, 23));
        TxLCD->setDigitCount(7);
        UartAssist->setCentralWidget(centralWidget);
        cleanCntButton->raise();
        label_8->raise();
        RxLCD->raise();
        label_7->raise();
        TxLCD->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        sendBtn->raise();
        SendtextEdit->raise();
        SUMBtn->raise();
        CRC16Btn->raise();
        RecvtextEdit->raise();
        groupBox_4->raise();
        groupBox_5->raise();
        textEdit_netlistenlog->raise();
        label_12->raise();
        comboBox_clientIPaddr->raise();
        label_13->raise();
        label_Log->raise();
        pushButton_clearListenlog->raise();
        menuBar = new QMenuBar(UartAssist);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 888, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuItem = new QMenu(menuBar);
        menuItem->setObjectName(QStringLiteral("menuItem"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        UartAssist->setMenuBar(menuBar);
        mainToolBar = new QToolBar(UartAssist);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        UartAssist->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UartAssist);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UartAssist->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuItem->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuEdit->addAction(actionConfig);
        menuItem->addAction(actionLoraMeter);
        menuItem->addAction(actionLoRaTherm);
        menuAbout->addSeparator();
        menuAbout->addAction(actionAbout);

        retranslateUi(UartAssist);

        QMetaObject::connectSlotsByName(UartAssist);
    } // setupUi

    void retranslateUi(QMainWindow *UartAssist)
    {
        UartAssist->setWindowTitle(QApplication::translate("UartAssist", "UartAssist", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("UartAssist", "about..", Q_NULLPTR));
        actionLoraMeter->setText(QApplication::translate("UartAssist", "LoRaMeter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLoraMeter->setToolTip(QApplication::translate("UartAssist", "<html><head/><body><p><span style=\" color:#5500ff;\">lora\350\256\276\345\244\207</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionLoRaTherm->setText(QApplication::translate("UartAssist", "LoRaTerminal", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("UartAssist", "open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("UartAssist", "<html><head/><body><p><span style=\" color:#5500ff;\">\346\211\223\345\274\200\344\270\200\344\270\252TXT\346\226\207\346\234\254\345\271\266\345\260\206\345\206\205\345\256\271\350\257\273\345\217\226\345\210\260\345\217\221\351\200\201\345\214\272</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionConfig->setText(QApplication::translate("UartAssist", "Config...", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("UartAssist", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        openSerialPortButton->setText(QApplication::translate("UartAssist", "\346\211\223\345\274\200", Q_NULLPTR));
        label->setText(QApplication::translate("UartAssist", "\344\270\262\345\217\243\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("UartAssist", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        label_3->setText(QApplication::translate("UartAssist", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("UartAssist", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("UartAssist", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        RefreshBtn->setToolTip(QApplication::translate("UartAssist", "<html><head/><body><p><span style=\" color:#ff00ff;\">\345\205\263\351\227\255\344\270\262\345\217\243\345\271\266\345\210\267\346\226\260\345\210\227\350\241\250</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        RefreshBtn->setText(QString());
        groupBox_2->setTitle(QApplication::translate("UartAssist", "\346\216\245\346\224\266\350\256\276\347\275\256", Q_NULLPTR));
        ASCIIRadio->setText(QApplication::translate("UartAssist", "ACSII", Q_NULLPTR));
        HexRadio->setText(QApplication::translate("UartAssist", "HEX", Q_NULLPTR));
        clear->setText(QApplication::translate("UartAssist", "\346\270\205\351\231\244\346\216\245\346\224\266", Q_NULLPTR));
        CalSendWriteInfo->setText(QApplication::translate("UartAssist", "\346\224\266\345\217\221\347\273\237\350\256\241", Q_NULLPTR));
        ShowSend->setText(QApplication::translate("UartAssist", "\346\230\276\347\244\272\345\217\221\351\200\201", Q_NULLPTR));
        ShowTime->setText(QApplication::translate("UartAssist", "\346\230\276\347\244\272\346\227\266\351\227\264", Q_NULLPTR));
        SaveRecDataToTxtFile->setText(QApplication::translate("UartAssist", "\346\216\245\346\224\266\346\225\260\346\215\256\344\277\235\345\255\230\344\270\272TXT", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("UartAssist", "\345\217\221\351\200\201\350\256\276\347\275\256", Q_NULLPTR));
        ASCIIRadio_Recieve->setText(QApplication::translate("UartAssist", "ACSII", Q_NULLPTR));
        HexRadio_Receive->setText(QApplication::translate("UartAssist", "HEX", Q_NULLPTR));
        cleanSendBtn->setText(QApplication::translate("UartAssist", "\346\270\205\351\231\244\345\217\221\351\200\201", Q_NULLPTR));
        check_Repeat->setText(QApplication::translate("UartAssist", "\345\276\252\347\216\257\345\217\221\351\200\201", Q_NULLPTR));
        label_6->setText(QApplication::translate("UartAssist", "ms", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("UartAssist", "\345\217\221\351\200\201", Q_NULLPTR));
        SUMBtn->setText(QApplication::translate("UartAssist", "SUM", Q_NULLPTR));
        CRC16Btn->setText(QApplication::translate("UartAssist", "CRC16", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("UartAssist", "\347\275\221\347\273\234\350\256\276\347\275\256", Q_NULLPTR));
        label_9->setText(QApplication::translate("UartAssist", "\357\274\2101\357\274\211\345\215\217\350\256\256\347\261\273\345\236\213", Q_NULLPTR));
        label_10->setText(QApplication::translate("UartAssist", "\357\274\2102\357\274\211\346\234\254\345\234\260\344\270\273\346\234\272\345\234\260\345\235\200", Q_NULLPTR));
        label_11->setText(QApplication::translate("UartAssist", "\357\274\2102\357\274\211\346\234\254\345\234\260\344\270\273\346\234\272\347\253\257\345\217\243", Q_NULLPTR));
        pushButton_netlisten->setText(QApplication::translate("UartAssist", "\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("UartAssist", "\345\217\221\351\200\201\351\200\211\346\213\251", Q_NULLPTR));
        checkBox_UARTsendEN->setText(QApplication::translate("UartAssist", "\344\270\262\345\217\243\345\217\221\351\200\201", Q_NULLPTR));
        checkBox_NETsendEN->setText(QApplication::translate("UartAssist", "\347\275\221\347\273\234\345\217\221\351\200\201", Q_NULLPTR));
        label_12->setText(QApplication::translate("UartAssist", "\347\233\221\345\220\254\346\227\245\345\277\227\357\274\232", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        comboBox_clientIPaddr->setToolTip(QApplication::translate("UartAssist", "<html><head/><body><p><span style=\" color:#ff55ff;\">\351\200\211\346\213\251\344\270\200\344\270\252\345\256\242\346\210\267\347\253\257,\345\217\221\351\200\201\346\225\260\346\215\256</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("UartAssist", "\351\200\211\346\213\251\345\256\242\346\210\267\347\253\257\357\274\232", Q_NULLPTR));
        label_Log->setText(QString());
        pushButton_clearListenlog->setText(QApplication::translate("UartAssist", "clear", Q_NULLPTR));
        cleanCntButton->setText(QApplication::translate("UartAssist", "\350\256\241\346\225\260\346\270\205\351\233\266", Q_NULLPTR));
        label_8->setText(QApplication::translate("UartAssist", "RX:", Q_NULLPTR));
        label_7->setText(QApplication::translate("UartAssist", "TX:", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("UartAssist", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("UartAssist", "Edit", Q_NULLPTR));
        menuItem->setTitle(QApplication::translate("UartAssist", "Item", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("UartAssist", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UartAssist: public Ui_UartAssist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UARTASSIST_H
