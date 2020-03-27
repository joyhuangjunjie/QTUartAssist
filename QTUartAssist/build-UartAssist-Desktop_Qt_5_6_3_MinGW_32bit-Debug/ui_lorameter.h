/********************************************************************************
** Form generated from reading UI file 'lorameter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LORAMETER_H
#define UI_LORAMETER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoRaMeter
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *ReadMeterNoButton;
    QLineEdit *lineEdit_MeterNo;
    QPushButton *SetMeterNoButton;
    QGroupBox *groupBox_2;
    QFrame *line;
    QGroupBox *groupBox_8;
    QSpinBox *spinBox_End_T;
    QSpinBox *spinBox_End_D;
    QSpinBox *spinBox_Begin_T;
    QSpinBox *spinBox_Begin_D;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_26;
    QLabel *label_27;
    QGroupBox *groupBox_9;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *cBox_UP_GL;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *cBox_UP_ML;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QComboBox *cBox_UP_KPYZ;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QComboBox *cBox_UP_DK;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QSpinBox *sBox_UP_PL;
    QGroupBox *groupBox_10;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cBox_week_GL;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *cBox_week_ML;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cBox_week_KPYZ;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cBox_week_DK;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *sBox_week_PL;
    QGroupBox *groupBox_7;
    QLabel *label_UP_DayNum;
    QLabel *label_UP_CINUM;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QSpinBox *spinBox_UP_DayNum;
    QSpinBox *spinBox_UP_CINUM;
    QPushButton *readRFButton;
    QPushButton *writeRFButton;
    QGroupBox *groupBox_3;
    QTextEdit *TextEditLogPrintf;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *checkBox_save_log;
    QPushButton *ClearLog;
    QLabel *label_29;
    QSpinBox *spinBox_CMDTime;
    QLabel *label_28;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_MT_Data;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *readMeterButton;
    QComboBox *comboBox_MT_Status;
    QLineEdit *lineEdit_Volatage;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_MT_ver;
    QLineEdit *lineEdit_Protocol_ver;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *lineEdit_DQ_DJL;
    QLabel *label_21;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_13;
    QComboBox *comboBox_Gatecont;
    QPushButton *GateControlButton;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_DataSys;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_22;
    QDateEdit *dateEdit_Balance;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_23;
    QLineEdit *lineEdit_BalanceMoney;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_25;
    QLineEdit *lineEdit_PriceMoney;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_24;
    QComboBox *comboBox_Gatecont_SYS;
    QGroupBox *groupBox_11;
    QPushButton *pushButton_ReadMTpara;
    QPushButton *pushButton_WriteMTpara;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_30;
    QSpinBox *spinBox_DJ_DATE;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_31;
    QSpinBox *spinBox_DJ_TIME;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_32;
    QSpinBox *spinBox_Lostcommi;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_33;
    QSpinBox *spinBox_LongNoData;
    QGroupBox *groupBox_12;
    QPushButton *pushButton_CleanMT;
    QGroupBox *groupBox_13;
    QPushButton *pushButton_ReadTime;
    QPushButton *pushButton_WriteTime;
    QDateTimeEdit *dateTimeEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoRaMeter)
    {
        if (LoRaMeter->objectName().isEmpty())
            LoRaMeter->setObjectName(QStringLiteral("LoRaMeter"));
        LoRaMeter->resize(708, 587);
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        LoRaMeter->setPalette(palette);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Resources/6_96px_1168279net.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoRaMeter->setWindowIcon(icon);
        centralwidget = new QWidget(LoRaMeter);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 121, 101));
        QFont font;
        font.setKerning(true);
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 20, 101, 93));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        ReadMeterNoButton = new QPushButton(layoutWidget);
        ReadMeterNoButton->setObjectName(QStringLiteral("ReadMeterNoButton"));
        ReadMeterNoButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(ReadMeterNoButton);

        lineEdit_MeterNo = new QLineEdit(layoutWidget);
        lineEdit_MeterNo->setObjectName(QStringLiteral("lineEdit_MeterNo"));

        verticalLayout_3->addWidget(lineEdit_MeterNo);

        SetMeterNoButton = new QPushButton(layoutWidget);
        SetMeterNoButton->setObjectName(QStringLiteral("SetMeterNoButton"));
        SetMeterNoButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(SetMeterNoButton);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 10, 391, 221));
        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(130, 20, 20, 121));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_8 = new QGroupBox(groupBox_2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(80, 170, 191, 51));
        spinBox_End_T = new QSpinBox(groupBox_8);
        spinBox_End_T->setObjectName(QStringLiteral("spinBox_End_T"));
        spinBox_End_T->setGeometry(QRect(150, 30, 39, 20));
        spinBox_End_D = new QSpinBox(groupBox_8);
        spinBox_End_D->setObjectName(QStringLiteral("spinBox_End_D"));
        spinBox_End_D->setGeometry(QRect(110, 30, 39, 20));
        spinBox_Begin_T = new QSpinBox(groupBox_8);
        spinBox_Begin_T->setObjectName(QStringLiteral("spinBox_Begin_T"));
        spinBox_Begin_T->setGeometry(QRect(70, 30, 39, 20));
        spinBox_Begin_D = new QSpinBox(groupBox_8);
        spinBox_Begin_D->setObjectName(QStringLiteral("spinBox_Begin_D"));
        spinBox_Begin_D->setGeometry(QRect(30, 30, 39, 20));
        spinBox_Begin_D->setMinimum(1);
        spinBox_Begin_D->setMaximum(31);
        layoutWidget1 = new QWidget(groupBox_8);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 10, 151, 20));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        QFont font1;
        font1.setFamily(QStringLiteral("AcadEref"));
        font1.setPointSize(6);
        label_11->setFont(font1);

        horizontalLayout_15->addWidget(label_11);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font1);

        horizontalLayout_15->addWidget(label_12);

        label_26 = new QLabel(layoutWidget1);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setFont(font1);

        horizontalLayout_15->addWidget(label_26);

        label_27 = new QLabel(layoutWidget1);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setFont(font1);

        horizontalLayout_15->addWidget(label_27);

        groupBox_9 = new QGroupBox(groupBox_2);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 10, 121, 161));
        layoutWidget_4 = new QWidget(groupBox_9);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 20, 158, 145));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        cBox_UP_GL = new QComboBox(layoutWidget_4);
        cBox_UP_GL->setObjectName(QStringLiteral("cBox_UP_GL"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cBox_UP_GL->sizePolicy().hasHeightForWidth());
        cBox_UP_GL->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(cBox_UP_GL);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        cBox_UP_ML = new QComboBox(layoutWidget_4);
        cBox_UP_ML->setObjectName(QStringLiteral("cBox_UP_ML"));

        horizontalLayout_7->addWidget(cBox_UP_ML);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        cBox_UP_KPYZ = new QComboBox(layoutWidget_4);
        cBox_UP_KPYZ->setObjectName(QStringLiteral("cBox_UP_KPYZ"));

        horizontalLayout_8->addWidget(cBox_UP_KPYZ);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        cBox_UP_DK = new QComboBox(layoutWidget_4);
        cBox_UP_DK->setObjectName(QStringLiteral("cBox_UP_DK"));

        horizontalLayout_9->addWidget(cBox_UP_DK);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        sBox_UP_PL = new QSpinBox(layoutWidget_4);
        sBox_UP_PL->setObjectName(QStringLiteral("sBox_UP_PL"));

        horizontalLayout_10->addWidget(sBox_UP_PL);


        verticalLayout_2->addLayout(horizontalLayout_10);

        groupBox_10 = new QGroupBox(groupBox_2);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(150, 10, 151, 161));
        layoutWidget2 = new QWidget(groupBox_10);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 20, 158, 145));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        cBox_week_GL = new QComboBox(layoutWidget2);
        cBox_week_GL->setObjectName(QStringLiteral("cBox_week_GL"));
        sizePolicy.setHeightForWidth(cBox_week_GL->sizePolicy().hasHeightForWidth());
        cBox_week_GL->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(cBox_week_GL);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        cBox_week_ML = new QComboBox(layoutWidget2);
        cBox_week_ML->setObjectName(QStringLiteral("cBox_week_ML"));

        horizontalLayout_2->addWidget(cBox_week_ML);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cBox_week_KPYZ = new QComboBox(layoutWidget2);
        cBox_week_KPYZ->setObjectName(QStringLiteral("cBox_week_KPYZ"));

        horizontalLayout_3->addWidget(cBox_week_KPYZ);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        cBox_week_DK = new QComboBox(layoutWidget2);
        cBox_week_DK->setObjectName(QStringLiteral("cBox_week_DK"));

        horizontalLayout_4->addWidget(cBox_week_DK);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        sBox_week_PL = new QSpinBox(layoutWidget2);
        sBox_week_PL->setObjectName(QStringLiteral("sBox_week_PL"));

        horizontalLayout_5->addWidget(sBox_week_PL);


        verticalLayout->addLayout(horizontalLayout_5);

        groupBox_7 = new QGroupBox(groupBox_2);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(270, 170, 121, 51));
        label_UP_DayNum = new QLabel(groupBox_7);
        label_UP_DayNum->setObjectName(QStringLiteral("label_UP_DayNum"));
        label_UP_DayNum->setGeometry(QRect(100, 0, 16, 21));
        label_UP_CINUM = new QLabel(groupBox_7);
        label_UP_CINUM->setObjectName(QStringLiteral("label_UP_CINUM"));
        label_UP_CINUM->setGeometry(QRect(100, 26, 20, 20));
        layoutWidget3 = new QWidget(groupBox_7);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(39, 2, 61, 51));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        spinBox_UP_DayNum = new QSpinBox(layoutWidget3);
        spinBox_UP_DayNum->setObjectName(QStringLiteral("spinBox_UP_DayNum"));

        verticalLayout_6->addWidget(spinBox_UP_DayNum);

        spinBox_UP_CINUM = new QSpinBox(layoutWidget3);
        spinBox_UP_CINUM->setObjectName(QStringLiteral("spinBox_UP_CINUM"));

        verticalLayout_6->addWidget(spinBox_UP_CINUM);

        readRFButton = new QPushButton(groupBox_2);
        readRFButton->setObjectName(QStringLiteral("readRFButton"));
        readRFButton->setGeometry(QRect(310, 70, 81, 20));
        readRFButton->setCursor(QCursor(Qt::PointingHandCursor));
        writeRFButton = new QPushButton(groupBox_2);
        writeRFButton->setObjectName(QStringLiteral("writeRFButton"));
        writeRFButton->setGeometry(QRect(310, 110, 81, 20));
        writeRFButton->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 400, 711, 141));
        TextEditLogPrintf = new QTextEdit(groupBox_3);
        TextEditLogPrintf->setObjectName(QStringLiteral("TextEditLogPrintf"));
        TextEditLogPrintf->setGeometry(QRect(20, 30, 671, 101));
        layoutWidget4 = new QWidget(groupBox_3);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(410, 10, 281, 30));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        checkBox_save_log = new QCheckBox(layoutWidget4);
        checkBox_save_log->setObjectName(QStringLiteral("checkBox_save_log"));

        horizontalLayout_20->addWidget(checkBox_save_log);

        ClearLog = new QPushButton(layoutWidget4);
        ClearLog->setObjectName(QStringLiteral("ClearLog"));
        ClearLog->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_20->addWidget(ClearLog);

        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(390, 10, 16, 20));
        spinBox_CMDTime = new QSpinBox(groupBox_3);
        spinBox_CMDTime->setObjectName(QStringLiteral("spinBox_CMDTime"));
        spinBox_CMDTime->setGeometry(QRect(311, 10, 71, 22));
        spinBox_CMDTime->setMinimum(100);
        spinBox_CMDTime->setMaximum(60000);
        spinBox_CMDTime->setSingleStep(10);
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(260, 10, 51, 21));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(530, 10, 161, 221));
        lineEdit_MT_Data = new QLineEdit(groupBox_4);
        lineEdit_MT_Data->setObjectName(QStringLiteral("lineEdit_MT_Data"));
        lineEdit_MT_Data->setGeometry(QRect(60, 30, 71, 20));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 30, 41, 21));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(140, 30, 16, 20));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 60, 41, 21));
        readMeterButton = new QPushButton(groupBox_4);
        readMeterButton->setObjectName(QStringLiteral("readMeterButton"));
        readMeterButton->setGeometry(QRect(100, 200, 61, 20));
        readMeterButton->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_MT_Status = new QComboBox(groupBox_4);
        comboBox_MT_Status->setObjectName(QStringLiteral("comboBox_MT_Status"));
        comboBox_MT_Status->setGeometry(QRect(60, 60, 91, 22));
        lineEdit_Volatage = new QLineEdit(groupBox_4);
        lineEdit_Volatage->setObjectName(QStringLiteral("lineEdit_Volatage"));
        lineEdit_Volatage->setGeometry(QRect(60, 90, 71, 20));
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 90, 31, 21));
        label_18 = new QLabel(groupBox_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 120, 41, 21));
        lineEdit_MT_ver = new QLineEdit(groupBox_4);
        lineEdit_MT_ver->setObjectName(QStringLiteral("lineEdit_MT_ver"));
        lineEdit_MT_ver->setGeometry(QRect(110, 120, 41, 20));
        lineEdit_Protocol_ver = new QLineEdit(groupBox_4);
        lineEdit_Protocol_ver->setObjectName(QStringLiteral("lineEdit_Protocol_ver"));
        lineEdit_Protocol_ver->setGeometry(QRect(110, 140, 41, 20));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(70, 120, 41, 21));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(70, 140, 41, 21));
        lineEdit_DQ_DJL = new QLineEdit(groupBox_4);
        lineEdit_DQ_DJL->setObjectName(QStringLiteral("lineEdit_DQ_DJL"));
        lineEdit_DQ_DJL->setGeometry(QRect(10, 170, 141, 20));
        label_21 = new QLabel(groupBox_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 150, 61, 21));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 120, 101, 111));
        layoutWidget5 = new QWidget(groupBox_5);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(0, 20, 100, 81));
        verticalLayout_5 = new QVBoxLayout(layoutWidget5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget5);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_5->addWidget(label_13);

        comboBox_Gatecont = new QComboBox(layoutWidget5);
        comboBox_Gatecont->setObjectName(QStringLiteral("comboBox_Gatecont"));

        verticalLayout_5->addWidget(comboBox_Gatecont);

        GateControlButton = new QPushButton(layoutWidget5);
        GateControlButton->setObjectName(QStringLiteral("GateControlButton"));
        GateControlButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_5->addWidget(GateControlButton);

        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 230, 201, 161));
        pushButton_DataSys = new QPushButton(groupBox_6);
        pushButton_DataSys->setObjectName(QStringLiteral("pushButton_DataSys"));
        pushButton_DataSys->setGeometry(QRect(100, 130, 75, 23));
        pushButton_DataSys->setCursor(QCursor(Qt::PointingHandCursor));
        layoutWidget6 = new QWidget(groupBox_6);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 20, 196, 115));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_22 = new QLabel(layoutWidget6);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_11->addWidget(label_22);

        dateEdit_Balance = new QDateEdit(layoutWidget6);
        dateEdit_Balance->setObjectName(QStringLiteral("dateEdit_Balance"));
        dateEdit_Balance->setInputMethodHints(Qt::ImhPreferNumbers);
        dateEdit_Balance->setCalendarPopup(false);
        dateEdit_Balance->setDate(QDate(2018, 1, 5));

        horizontalLayout_11->addWidget(dateEdit_Balance);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_23 = new QLabel(layoutWidget6);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_14->addWidget(label_23);

        lineEdit_BalanceMoney = new QLineEdit(layoutWidget6);
        lineEdit_BalanceMoney->setObjectName(QStringLiteral("lineEdit_BalanceMoney"));

        horizontalLayout_14->addWidget(lineEdit_BalanceMoney);


        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_25 = new QLabel(layoutWidget6);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_13->addWidget(label_25);

        lineEdit_PriceMoney = new QLineEdit(layoutWidget6);
        lineEdit_PriceMoney->setObjectName(QStringLiteral("lineEdit_PriceMoney"));

        horizontalLayout_13->addWidget(lineEdit_PriceMoney);


        verticalLayout_4->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_24 = new QLabel(layoutWidget6);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_12->addWidget(label_24);

        comboBox_Gatecont_SYS = new QComboBox(layoutWidget6);
        comboBox_Gatecont_SYS->setObjectName(QStringLiteral("comboBox_Gatecont_SYS"));

        horizontalLayout_12->addWidget(comboBox_Gatecont_SYS);


        verticalLayout_4->addLayout(horizontalLayout_12);

        groupBox_11 = new QGroupBox(centralwidget);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setGeometry(QRect(210, 230, 171, 161));
        pushButton_ReadMTpara = new QPushButton(groupBox_11);
        pushButton_ReadMTpara->setObjectName(QStringLiteral("pushButton_ReadMTpara"));
        pushButton_ReadMTpara->setGeometry(QRect(10, 130, 61, 23));
        pushButton_ReadMTpara->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_WriteMTpara = new QPushButton(groupBox_11);
        pushButton_WriteMTpara->setObjectName(QStringLiteral("pushButton_WriteMTpara"));
        pushButton_WriteMTpara->setGeometry(QRect(100, 130, 61, 23));
        pushButton_WriteMTpara->setCursor(QCursor(Qt::PointingHandCursor));
        layoutWidget7 = new QWidget(groupBox_11);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(3, 20, 192, 115));
        verticalLayout_7 = new QVBoxLayout(layoutWidget7);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_30 = new QLabel(layoutWidget7);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_16->addWidget(label_30);

        spinBox_DJ_DATE = new QSpinBox(layoutWidget7);
        spinBox_DJ_DATE->setObjectName(QStringLiteral("spinBox_DJ_DATE"));

        horizontalLayout_16->addWidget(spinBox_DJ_DATE);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_31 = new QLabel(layoutWidget7);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_17->addWidget(label_31);

        spinBox_DJ_TIME = new QSpinBox(layoutWidget7);
        spinBox_DJ_TIME->setObjectName(QStringLiteral("spinBox_DJ_TIME"));

        horizontalLayout_17->addWidget(spinBox_DJ_TIME);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_32 = new QLabel(layoutWidget7);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_18->addWidget(label_32);

        spinBox_Lostcommi = new QSpinBox(layoutWidget7);
        spinBox_Lostcommi->setObjectName(QStringLiteral("spinBox_Lostcommi"));

        horizontalLayout_18->addWidget(spinBox_Lostcommi);


        verticalLayout_7->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_33 = new QLabel(layoutWidget7);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_19->addWidget(label_33);

        spinBox_LongNoData = new QSpinBox(layoutWidget7);
        spinBox_LongNoData->setObjectName(QStringLiteral("spinBox_LongNoData"));

        horizontalLayout_19->addWidget(spinBox_LongNoData);


        verticalLayout_7->addLayout(horizontalLayout_19);

        layoutWidget->raise();
        pushButton_ReadMTpara->raise();
        pushButton_WriteMTpara->raise();
        groupBox_12 = new QGroupBox(centralwidget);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setGeometry(QRect(510, 250, 181, 51));
        pushButton_CleanMT = new QPushButton(groupBox_12);
        pushButton_CleanMT->setObjectName(QStringLiteral("pushButton_CleanMT"));
        pushButton_CleanMT->setGeometry(QRect(10, 20, 75, 23));
        pushButton_CleanMT->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_13 = new QGroupBox(centralwidget);
        groupBox_13->setObjectName(QStringLiteral("groupBox_13"));
        groupBox_13->setGeometry(QRect(500, 300, 191, 101));
        pushButton_ReadTime = new QPushButton(groupBox_13);
        pushButton_ReadTime->setObjectName(QStringLiteral("pushButton_ReadTime"));
        pushButton_ReadTime->setGeometry(QRect(130, 10, 51, 23));
        pushButton_ReadTime->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_WriteTime = new QPushButton(groupBox_13);
        pushButton_WriteTime->setObjectName(QStringLiteral("pushButton_WriteTime"));
        pushButton_WriteTime->setGeometry(QRect(130, 70, 51, 23));
        pushButton_WriteTime->setCursor(QCursor(Qt::PointingHandCursor));
        dateTimeEdit = new QDateTimeEdit(groupBox_13);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(10, 40, 141, 22));
        LoRaMeter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoRaMeter);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 708, 26));
        LoRaMeter->setMenuBar(menubar);
        statusbar = new QStatusBar(LoRaMeter);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoRaMeter->setStatusBar(statusbar);

        retranslateUi(LoRaMeter);

        QMetaObject::connectSlotsByName(LoRaMeter);
    } // setupUi

    void retranslateUi(QMainWindow *LoRaMeter)
    {
        LoRaMeter->setWindowTitle(QApplication::translate("LoRaMeter", "LoRaSysterm", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("LoRaMeter", "\350\257\273\345\206\231\345\234\260\345\235\200", Q_NULLPTR));
        ReadMeterNoButton->setText(QApplication::translate("LoRaMeter", "\350\257\273\345\234\260\345\235\200", Q_NULLPTR));
        SetMeterNoButton->setText(QApplication::translate("LoRaMeter", "\345\206\231\345\234\260\345\235\200", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("LoRaMeter", "                 \350\256\276\347\275\256\346\227\240\347\272\277\345\217\202\346\225\260", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("LoRaMeter", "\345\224\244\351\206\222\346\227\266\346\256\265", Q_NULLPTR));
        label_11->setText(QApplication::translate("LoRaMeter", "\345\274\200\345\247\213\346\227\245", Q_NULLPTR));
        label_12->setText(QApplication::translate("LoRaMeter", "\345\274\200\345\247\213\346\227\266", Q_NULLPTR));
        label_26->setText(QApplication::translate("LoRaMeter", "\347\273\223\346\235\237\346\227\245", Q_NULLPTR));
        label_27->setText(QApplication::translate("LoRaMeter", "\347\273\223\346\235\237\346\227\266", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("LoRaMeter", "\345\224\244\351\206\222\345\217\202\346\225\260", Q_NULLPTR));
        label_6->setText(QApplication::translate("LoRaMeter", "\345\217\221\345\260\204\345\212\237\347\216\207", Q_NULLPTR));
        label_7->setText(QApplication::translate("LoRaMeter", "\347\240\201\347\216\207", Q_NULLPTR));
        label_8->setText(QApplication::translate("LoRaMeter", "\346\211\251\351\242\221\345\233\240\345\255\220", Q_NULLPTR));
        label_9->setText(QApplication::translate("LoRaMeter", "\345\270\246\345\256\275", Q_NULLPTR));
        label_10->setText(QApplication::translate("LoRaMeter", "\350\275\275\346\263\242\351\242\221\347\216\207", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("LoRaMeter", "         \344\270\212\345\217\221\345\217\202\346\225\260", Q_NULLPTR));
        label->setText(QApplication::translate("LoRaMeter", "\345\217\221\345\260\204\345\212\237\347\216\207", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoRaMeter", "\347\240\201\347\216\207", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoRaMeter", "\346\211\251\351\242\221\345\233\240\345\255\220", Q_NULLPTR));
        label_4->setText(QApplication::translate("LoRaMeter", "\345\270\246\345\256\275", Q_NULLPTR));
        label_5->setText(QApplication::translate("LoRaMeter", "\350\275\275\346\263\242\351\242\221\347\216\207", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("LoRaMeter", "\351\242\221\346\254\241", Q_NULLPTR));
        label_UP_DayNum->setText(QApplication::translate("LoRaMeter", "\345\244\251", Q_NULLPTR));
        label_UP_CINUM->setText(QApplication::translate("LoRaMeter", "\346\254\241", Q_NULLPTR));
        readRFButton->setText(QApplication::translate("LoRaMeter", "\350\257\273\345\217\226\346\227\240\347\272\277\345\217\202\346\225\260", Q_NULLPTR));
        writeRFButton->setText(QApplication::translate("LoRaMeter", "\345\206\231\345\205\245\346\227\240\347\272\277\345\217\202\346\225\260", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("LoRaMeter", "\346\227\245\345\277\227\350\276\223\345\207\272", Q_NULLPTR));
        checkBox_save_log->setText(QApplication::translate("LoRaMeter", "\346\227\245\345\277\227\344\277\235\345\255\230", Q_NULLPTR));
        ClearLog->setText(QApplication::translate("LoRaMeter", "Clear", Q_NULLPTR));
        label_29->setText(QApplication::translate("LoRaMeter", "ms", Q_NULLPTR));
        label_28->setText(QApplication::translate("LoRaMeter", "\346\214\207\344\273\244\346\227\266\351\227\264", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("LoRaMeter", "\346\212\204\350\241\250", Q_NULLPTR));
        label_14->setText(QApplication::translate("LoRaMeter", "\350\241\250\350\257\273\346\225\260\357\274\232", Q_NULLPTR));
        label_15->setText(QApplication::translate("LoRaMeter", "m\302\263", Q_NULLPTR));
        label_16->setText(QApplication::translate("LoRaMeter", "\350\241\250\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        readMeterButton->setText(QApplication::translate("LoRaMeter", "\346\212\204\350\241\250", Q_NULLPTR));
        label_17->setText(QApplication::translate("LoRaMeter", "\347\224\265\345\216\213\357\274\232", Q_NULLPTR));
        label_18->setText(QApplication::translate("LoRaMeter", "\347\211\210\346\234\254\345\217\267\357\274\232", Q_NULLPTR));
        label_19->setText(QApplication::translate("LoRaMeter", "\350\241\250\347\261\273\345\236\213", Q_NULLPTR));
        label_20->setText(QApplication::translate("LoRaMeter", "\345\215\217\350\256\256\345\217\267", Q_NULLPTR));
        label_21->setText(QApplication::translate("LoRaMeter", "\346\234\210\345\206\273\347\273\223\351\207\217", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("LoRaMeter", "\351\230\200\351\227\250\346\216\247\345\210\266", Q_NULLPTR));
        label_13->setText(QApplication::translate("LoRaMeter", "\351\200\211\346\213\251\346\216\247\345\210\266\346\226\271\345\274\217;", Q_NULLPTR));
        GateControlButton->setText(QApplication::translate("LoRaMeter", "\351\230\200\351\227\250\346\216\247\345\210\266", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("LoRaMeter", "\346\225\260\346\215\256\345\220\214\346\255\245", Q_NULLPTR));
        pushButton_DataSys->setText(QApplication::translate("LoRaMeter", "\346\225\260\346\215\256\345\220\214\346\255\245", Q_NULLPTR));
        label_22->setText(QApplication::translate("LoRaMeter", "\347\273\223\347\256\227\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_23->setText(QApplication::translate("LoRaMeter", "\347\273\223\347\256\227\344\275\231\351\242\235\357\274\232", Q_NULLPTR));
        label_25->setText(QApplication::translate("LoRaMeter", "\347\273\223\347\256\227\345\215\225\344\273\267\357\274\232", Q_NULLPTR));
        label_24->setText(QApplication::translate("LoRaMeter", "\351\230\200\351\227\250\346\216\247\345\210\266\357\274\232", Q_NULLPTR));
        groupBox_11->setTitle(QApplication::translate("LoRaMeter", "\350\241\250\345\217\202\346\225\260", Q_NULLPTR));
        pushButton_ReadMTpara->setText(QApplication::translate("LoRaMeter", "\350\257\273\350\241\250\345\217\202\346\225\260", Q_NULLPTR));
        pushButton_WriteMTpara->setText(QApplication::translate("LoRaMeter", "\345\206\231\350\241\250\345\217\202\346\225\260", Q_NULLPTR));
        label_30->setText(QApplication::translate("LoRaMeter", "\346\234\210\345\206\273\347\273\223\346\227\245\346\234\237", Q_NULLPTR));
        label_31->setText(QApplication::translate("LoRaMeter", "\346\227\245\345\206\273\347\273\223\346\227\266\351\227\264", Q_NULLPTR));
        label_32->setText(QApplication::translate("LoRaMeter", "\345\244\261\350\201\224\345\205\263\351\230\200\345\221\250\346\234\237", Q_NULLPTR));
        label_33->setText(QApplication::translate("LoRaMeter", "\351\225\277\346\234\237\344\270\215\350\256\241\351\207\217\345\205\263\351\230\200\345\221\250\346\234\237", Q_NULLPTR));
        groupBox_12->setTitle(QApplication::translate("LoRaMeter", "\345\205\266\344\273\226\350\256\276\347\275\256", Q_NULLPTR));
        pushButton_CleanMT->setText(QApplication::translate("LoRaMeter", "\346\270\205\351\233\266", Q_NULLPTR));
        groupBox_13->setTitle(QApplication::translate("LoRaMeter", "\346\240\241\346\227\266", Q_NULLPTR));
        pushButton_ReadTime->setText(QApplication::translate("LoRaMeter", "\350\257\273\346\227\266\351\227\264", Q_NULLPTR));
        pushButton_WriteTime->setText(QApplication::translate("LoRaMeter", "\345\206\231\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoRaMeter: public Ui_LoRaMeter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LORAMETER_H
