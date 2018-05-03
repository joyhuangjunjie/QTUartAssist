/********************************************************************************
** Form generated from reading UI file 'uartassist.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
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
#include <QtWidgets/QSpacerItem>
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
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *cleanCntButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLCDNumber *RxLCD;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLCDNumber *TxLCD;
    QTextEdit *RecvtextEdit;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QWidget *layoutWidget6;
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
        actionLoRaTherm = new QAction(UartAssist);
        actionLoRaTherm->setObjectName(QStringLiteral("actionLoRaTherm"));
        centralWidget = new QWidget(UartAssist);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 161, 241));
        openSerialPortButton = new QPushButton(groupBox);
        openSerialPortButton->setObjectName(QStringLiteral("openSerialPortButton"));
        openSerialPortButton->setGeometry(QRect(20, 190, 101, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../Resources/open_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        openSerialPortButton->setIcon(icon);
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
        RefreshBtn->setGeometry(QRect(10, 160, 21, 21));
        RefreshBtn->setCursor(QCursor(Qt::OpenHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../Resources/refresh_32px_1133650.png"), QSize(), QIcon::Normal, QIcon::Off);
        RefreshBtn->setIcon(icon1);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 250, 161, 121));
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
        layoutWidget2->setGeometry(QRect(10, 40, 81, 81));
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
        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(180, 490, 391, 31));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        cleanCntButton = new QPushButton(layoutWidget4);
        cleanCntButton->setObjectName(QStringLiteral("cleanCntButton"));

        horizontalLayout_11->addWidget(cleanCntButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        RxLCD = new QLCDNumber(layoutWidget4);
        RxLCD->setObjectName(QStringLiteral("RxLCD"));

        horizontalLayout_9->addWidget(RxLCD);


        horizontalLayout_11->addLayout(horizontalLayout_9);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_10->addWidget(label_7);

        TxLCD = new QLCDNumber(layoutWidget4);
        TxLCD->setObjectName(QStringLiteral("TxLCD"));

        horizontalLayout_10->addWidget(TxLCD);


        horizontalLayout_11->addLayout(horizontalLayout_10);

        RecvtextEdit = new QTextEdit(centralWidget);
        RecvtextEdit->setObjectName(QStringLiteral("RecvtextEdit"));
        RecvtextEdit->setGeometry(QRect(180, 10, 481, 371));
        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
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
        groupBox_5->setGeometry(QRect(670, 430, 91, 91));
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
        textEdit_netlistenlog->setGeometry(QRect(670, 260, 211, 131));
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
        comboBox_clientIPaddr->setGeometry(QRect(730, 400, 151, 22));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(670, 401, 51, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_13->setFont(font4);
        label_Log = new QLabel(centralWidget);
        label_Log->setObjectName(QStringLiteral("label_Log"));
        label_Log->setGeometry(QRect(770, 420, 101, 111));
        label_Log->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Resources/6_96px_1168279_easyicon.ico")));
        pushButton_clearListenlog = new QPushButton(centralWidget);
        pushButton_clearListenlog->setObjectName(QStringLiteral("pushButton_clearListenlog"));
        pushButton_clearListenlog->setGeometry(QRect(810, 240, 71, 21));
        pushButton_clearListenlog->setCursor(QCursor(Qt::PointingHandCursor));
        UartAssist->setCentralWidget(centralWidget);
        layoutWidget->raise();
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
        menuItem->addAction(actionLoraMeter);
        menuItem->addAction(actionLoRaTherm);
        menuAbout->addSeparator();
        menuAbout->addAction(actionAbout);

        retranslateUi(UartAssist);

        QMetaObject::connectSlotsByName(UartAssist);
    } // setupUi

    void retranslateUi(QMainWindow *UartAssist)
    {
        UartAssist->setWindowTitle(QApplication::translate("UartAssist", "UartAssist", 0));
        actionAbout->setText(QApplication::translate("UartAssist", "about..", 0));
        actionLoraMeter->setText(QApplication::translate("UartAssist", "LoRaMeter", 0));
        actionLoRaTherm->setText(QApplication::translate("UartAssist", "LoRaTerminal", 0));
        groupBox->setTitle(QApplication::translate("UartAssist", "\344\270\262\345\217\243\350\256\276\347\275\256", 0));
        openSerialPortButton->setText(QApplication::translate("UartAssist", "\346\211\223\345\274\200", 0));
        label->setText(QApplication::translate("UartAssist", "\344\270\262\345\217\243\345\217\267", 0));
        label_2->setText(QApplication::translate("UartAssist", "\346\263\242\347\211\271\347\216\207", 0));
        label_3->setText(QApplication::translate("UartAssist", "\346\240\241\351\252\214\344\275\215", 0));
        label_4->setText(QApplication::translate("UartAssist", "\346\225\260\346\215\256\344\275\215", 0));
        label_5->setText(QApplication::translate("UartAssist", "\345\201\234\346\255\242\344\275\215", 0));
        RefreshBtn->setText(QString());
        groupBox_2->setTitle(QApplication::translate("UartAssist", "\346\216\245\346\224\266\350\256\276\347\275\256", 0));
        ASCIIRadio->setText(QApplication::translate("UartAssist", "ACSII", 0));
        HexRadio->setText(QApplication::translate("UartAssist", "HEX", 0));
        clear->setText(QApplication::translate("UartAssist", "\346\270\205\351\231\244\346\216\245\346\224\266", 0));
        CalSendWriteInfo->setText(QApplication::translate("UartAssist", "\346\224\266\345\217\221\347\273\237\350\256\241", 0));
        ShowSend->setText(QApplication::translate("UartAssist", "\346\230\276\347\244\272\345\217\221\351\200\201", 0));
        ShowTime->setText(QApplication::translate("UartAssist", "\346\230\276\347\244\272\346\227\266\351\227\264", 0));
        groupBox_3->setTitle(QApplication::translate("UartAssist", "\345\217\221\351\200\201\350\256\276\347\275\256", 0));
        ASCIIRadio_Recieve->setText(QApplication::translate("UartAssist", "ACSII", 0));
        HexRadio_Receive->setText(QApplication::translate("UartAssist", "HEX", 0));
        cleanSendBtn->setText(QApplication::translate("UartAssist", "\346\270\205\351\231\244\345\217\221\351\200\201", 0));
        check_Repeat->setText(QApplication::translate("UartAssist", "\345\276\252\347\216\257\345\217\221\351\200\201", 0));
        label_6->setText(QApplication::translate("UartAssist", "ms", 0));
        sendBtn->setText(QApplication::translate("UartAssist", "\345\217\221\351\200\201", 0));
        SUMBtn->setText(QApplication::translate("UartAssist", "SUM", 0));
        CRC16Btn->setText(QApplication::translate("UartAssist", "CRC16", 0));
        cleanCntButton->setText(QApplication::translate("UartAssist", "\350\256\241\346\225\260\346\270\205\351\233\266", 0));
        label_8->setText(QApplication::translate("UartAssist", "RX:", 0));
        label_7->setText(QApplication::translate("UartAssist", "TX:", 0));
        groupBox_4->setTitle(QApplication::translate("UartAssist", "\347\275\221\347\273\234\350\256\276\347\275\256", 0));
        label_9->setText(QApplication::translate("UartAssist", "\357\274\2101\357\274\211\345\215\217\350\256\256\347\261\273\345\236\213", 0));
        label_10->setText(QApplication::translate("UartAssist", "\357\274\2102\357\274\211\346\234\254\345\234\260\344\270\273\346\234\272\345\234\260\345\235\200", 0));
        label_11->setText(QApplication::translate("UartAssist", "\357\274\2102\357\274\211\346\234\254\345\234\260\344\270\273\346\234\272\347\253\257\345\217\243", 0));
        pushButton_netlisten->setText(QApplication::translate("UartAssist", "\345\274\200\345\247\213\347\233\221\345\220\254", 0));
        groupBox_5->setTitle(QApplication::translate("UartAssist", "\345\217\221\351\200\201\351\200\211\346\213\251", 0));
        checkBox_UARTsendEN->setText(QApplication::translate("UartAssist", "\344\270\262\345\217\243\345\217\221\351\200\201", 0));
        checkBox_NETsendEN->setText(QApplication::translate("UartAssist", "\347\275\221\347\273\234\345\217\221\351\200\201", 0));
        label_12->setText(QApplication::translate("UartAssist", "\347\233\221\345\220\254\346\227\245\345\277\227\357\274\232", 0));
        label_13->setText(QApplication::translate("UartAssist", "\345\256\242\346\210\267\347\253\257", 0));
        label_Log->setText(QString());
        pushButton_clearListenlog->setText(QApplication::translate("UartAssist", "clear", 0));
        menuFile->setTitle(QApplication::translate("UartAssist", "File", 0));
        menuEdit->setTitle(QApplication::translate("UartAssist", "Edit", 0));
        menuItem->setTitle(QApplication::translate("UartAssist", "Item", 0));
        menuAbout->setTitle(QApplication::translate("UartAssist", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class UartAssist: public Ui_UartAssist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UARTASSIST_H
