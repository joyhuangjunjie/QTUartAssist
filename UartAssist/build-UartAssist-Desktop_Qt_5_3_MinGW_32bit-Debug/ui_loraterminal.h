/********************************************************************************
** Form generated from reading UI file 'loraterminal.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LORATERMINAL_H
#define UI_LORATERMINAL_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoRaTerminal
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QTextEdit *textEditLogPrintf;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_savelog;
    QPushButton *pushButton_clearlog;
    QSpinBox *spinBox_CMDtime;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_JzqNo;
    QPushButton *pushButton_ReadjzqNo;
    QPushButton *pushButton_WritejzqNo;
    QGroupBox *groupBox_5;
    QLineEdit *lineEdit_MT_Data;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *BtoBreadMeterButton;
    QLineEdit *lineEdit_Volatage;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_MT_ver;
    QLineEdit *lineEdit_Protocol_ver;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *lineEdit_DQ_DJL;
    QLabel *label_21;
    QLineEdit *lineEdit_BtoBmeterNo_For_ReadMT;
    QLabel *label_22;
    QLineEdit *lineEdit_MT_Status;
    QLabel *label_29;
    QLineEdit *lineEdit_RSSI;
    QGroupBox *groupBox_6;
    QLineEdit *lineEdit_BtoBmeterNo_For_sys;
    QLabel *label_27;
    QLineEdit *lineEdit_BtoBSaveNo_For_sys;
    QLabel *label_28;
    QPushButton *pushButton_BToBDataSys;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_25;
    QLineEdit *lineEdit_PriceMoney;
    QLabel *label_24;
    QLineEdit *lineEdit_BalanceMoney;
    QLabel *label_23;
    QDateEdit *dateEdit_Balance;
    QLabel *label_26;
    QComboBox *comboBox_Gatecont_SYS;
    QProgressBar *progressBar_BtoB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoRaTerminal)
    {
        if (LoRaTerminal->objectName().isEmpty())
            LoRaTerminal->setObjectName(QStringLiteral("LoRaTerminal"));
        LoRaTerminal->resize(808, 503);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Resources/6_96px_1168279_easyicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoRaTerminal->setWindowIcon(icon);
        centralwidget = new QWidget(LoRaTerminal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 300, 791, 141));
        textEditLogPrintf = new QTextEdit(groupBox);
        textEditLogPrintf->setObjectName(QStringLiteral("textEditLogPrintf"));
        textEditLogPrintf->setGeometry(QRect(10, 40, 771, 101));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(600, 10, 181, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_savelog = new QCheckBox(layoutWidget);
        checkBox_savelog->setObjectName(QStringLiteral("checkBox_savelog"));

        horizontalLayout->addWidget(checkBox_savelog);

        pushButton_clearlog = new QPushButton(layoutWidget);
        pushButton_clearlog->setObjectName(QStringLiteral("pushButton_clearlog"));
        pushButton_clearlog->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(pushButton_clearlog);

        spinBox_CMDtime = new QSpinBox(groupBox);
        spinBox_CMDtime->setObjectName(QStringLiteral("spinBox_CMDtime"));
        spinBox_CMDtime->setGeometry(QRect(491, 10, 71, 22));
        spinBox_CMDtime->setMinimum(100);
        spinBox_CMDtime->setMaximum(60000);
        spinBox_CMDtime->setSingleStep(10);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 10, 51, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 10, 16, 20));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 141, 111));
        lineEdit_JzqNo = new QLineEdit(groupBox_4);
        lineEdit_JzqNo->setObjectName(QStringLiteral("lineEdit_JzqNo"));
        lineEdit_JzqNo->setGeometry(QRect(20, 50, 91, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_JzqNo->sizePolicy().hasHeightForWidth());
        lineEdit_JzqNo->setSizePolicy(sizePolicy);
        lineEdit_JzqNo->setMaxLength(14);
        pushButton_ReadjzqNo = new QPushButton(groupBox_4);
        pushButton_ReadjzqNo->setObjectName(QStringLiteral("pushButton_ReadjzqNo"));
        pushButton_ReadjzqNo->setGeometry(QRect(20, 20, 75, 23));
        pushButton_ReadjzqNo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_WritejzqNo = new QPushButton(groupBox_4);
        pushButton_WritejzqNo->setObjectName(QStringLiteral("pushButton_WritejzqNo"));
        pushButton_WritejzqNo->setGeometry(QRect(20, 80, 75, 23));
        pushButton_WritejzqNo->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(640, 0, 161, 261));
        lineEdit_MT_Data = new QLineEdit(groupBox_5);
        lineEdit_MT_Data->setObjectName(QStringLiteral("lineEdit_MT_Data"));
        lineEdit_MT_Data->setGeometry(QRect(60, 20, 71, 20));
        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 20, 41, 21));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(140, 20, 16, 20));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 40, 41, 21));
        BtoBreadMeterButton = new QPushButton(groupBox_5);
        BtoBreadMeterButton->setObjectName(QStringLiteral("BtoBreadMeterButton"));
        BtoBreadMeterButton->setGeometry(QRect(90, 240, 71, 20));
        BtoBreadMeterButton->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_Volatage = new QLineEdit(groupBox_5);
        lineEdit_Volatage->setObjectName(QStringLiteral("lineEdit_Volatage"));
        lineEdit_Volatage->setGeometry(QRect(80, 90, 71, 20));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(40, 90, 31, 21));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 110, 41, 21));
        lineEdit_MT_ver = new QLineEdit(groupBox_5);
        lineEdit_MT_ver->setObjectName(QStringLiteral("lineEdit_MT_ver"));
        lineEdit_MT_ver->setGeometry(QRect(110, 110, 41, 20));
        lineEdit_Protocol_ver = new QLineEdit(groupBox_5);
        lineEdit_Protocol_ver->setObjectName(QStringLiteral("lineEdit_Protocol_ver"));
        lineEdit_Protocol_ver->setGeometry(QRect(110, 130, 41, 20));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(70, 110, 41, 21));
        label_20 = new QLabel(groupBox_5);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(70, 130, 41, 21));
        lineEdit_DQ_DJL = new QLineEdit(groupBox_5);
        lineEdit_DQ_DJL->setObjectName(QStringLiteral("lineEdit_DQ_DJL"));
        lineEdit_DQ_DJL->setGeometry(QRect(10, 160, 141, 21));
        label_21 = new QLabel(groupBox_5);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 140, 61, 21));
        lineEdit_BtoBmeterNo_For_ReadMT = new QLineEdit(groupBox_5);
        lineEdit_BtoBmeterNo_For_ReadMT->setObjectName(QStringLiteral("lineEdit_BtoBmeterNo_For_ReadMT"));
        lineEdit_BtoBmeterNo_For_ReadMT->setGeometry(QRect(10, 240, 71, 20));
        lineEdit_BtoBmeterNo_For_ReadMT->setMaxLength(8);
        label_22 = new QLabel(groupBox_5);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 220, 141, 21));
        lineEdit_MT_Status = new QLineEdit(groupBox_5);
        lineEdit_MT_Status->setObjectName(QStringLiteral("lineEdit_MT_Status"));
        lineEdit_MT_Status->setGeometry(QRect(10, 60, 141, 21));
        label_29 = new QLabel(groupBox_5);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 180, 61, 21));
        lineEdit_RSSI = new QLineEdit(groupBox_5);
        lineEdit_RSSI->setObjectName(QStringLiteral("lineEdit_RSSI"));
        lineEdit_RSSI->setGeometry(QRect(10, 200, 141, 20));
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(430, 0, 211, 261));
        lineEdit_BtoBmeterNo_For_sys = new QLineEdit(groupBox_6);
        lineEdit_BtoBmeterNo_For_sys->setObjectName(QStringLiteral("lineEdit_BtoBmeterNo_For_sys"));
        lineEdit_BtoBmeterNo_For_sys->setGeometry(QRect(10, 150, 71, 20));
        lineEdit_BtoBmeterNo_For_sys->setMaxLength(8);
        label_27 = new QLabel(groupBox_6);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 130, 171, 21));
        lineEdit_BtoBSaveNo_For_sys = new QLineEdit(groupBox_6);
        lineEdit_BtoBSaveNo_For_sys->setObjectName(QStringLiteral("lineEdit_BtoBSaveNo_For_sys"));
        lineEdit_BtoBSaveNo_For_sys->setGeometry(QRect(10, 190, 71, 20));
        lineEdit_BtoBSaveNo_For_sys->setMaxLength(4);
        label_28 = new QLabel(groupBox_6);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 170, 171, 21));
        pushButton_BToBDataSys = new QPushButton(groupBox_6);
        pushButton_BToBDataSys->setObjectName(QStringLiteral("pushButton_BToBDataSys"));
        pushButton_BToBDataSys->setGeometry(QRect(110, 240, 91, 21));
        pushButton_BToBDataSys->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(groupBox_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 50, 16, 16));
        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 80, 16, 16));
        label_25 = new QLabel(groupBox_6);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(21, 78, 60, 16));
        lineEdit_PriceMoney = new QLineEdit(groupBox_6);
        lineEdit_PriceMoney->setObjectName(QStringLiteral("lineEdit_PriceMoney"));
        lineEdit_PriceMoney->setGeometry(QRect(87, 78, 81, 20));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(21, 50, 60, 16));
        lineEdit_BalanceMoney = new QLineEdit(groupBox_6);
        lineEdit_BalanceMoney->setObjectName(QStringLiteral("lineEdit_BalanceMoney"));
        lineEdit_BalanceMoney->setGeometry(QRect(87, 50, 81, 20));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(21, 22, 60, 16));
        dateEdit_Balance = new QDateEdit(groupBox_6);
        dateEdit_Balance->setObjectName(QStringLiteral("dateEdit_Balance"));
        dateEdit_Balance->setGeometry(QRect(87, 22, 121, 20));
        dateEdit_Balance->setInputMethodHints(Qt::ImhPreferNumbers);
        dateEdit_Balance->setCalendarPopup(false);
        dateEdit_Balance->setDate(QDate(2018, 1, 5));
        label_26 = new QLabel(groupBox_6);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(21, 106, 60, 16));
        comboBox_Gatecont_SYS = new QComboBox(groupBox_6);
        comboBox_Gatecont_SYS->setObjectName(QStringLiteral("comboBox_Gatecont_SYS"));
        comboBox_Gatecont_SYS->setGeometry(QRect(87, 106, 69, 20));
        progressBar_BtoB = new QProgressBar(centralwidget);
        progressBar_BtoB->setObjectName(QStringLiteral("progressBar_BtoB"));
        progressBar_BtoB->setGeometry(QRect(437, 270, 361, 23));
        progressBar_BtoB->setMaximum(100);
        progressBar_BtoB->setValue(88);
        progressBar_BtoB->setTextVisible(true);
        LoRaTerminal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoRaTerminal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 808, 23));
        LoRaTerminal->setMenuBar(menubar);
        statusbar = new QStatusBar(LoRaTerminal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoRaTerminal->setStatusBar(statusbar);

        retranslateUi(LoRaTerminal);

        QMetaObject::connectSlotsByName(LoRaTerminal);
    } // setupUi

    void retranslateUi(QMainWindow *LoRaTerminal)
    {
        LoRaTerminal->setWindowTitle(QApplication::translate("LoRaTerminal", "LoRaTerminal", 0));
        groupBox->setTitle(QApplication::translate("LoRaTerminal", "\346\227\245\345\277\227\350\276\223\345\207\272", 0));
        checkBox_savelog->setText(QApplication::translate("LoRaTerminal", "\346\227\245\345\277\227\344\277\235\345\255\230", 0));
        pushButton_clearlog->setText(QApplication::translate("LoRaTerminal", "Clear", 0));
        label->setText(QApplication::translate("LoRaTerminal", "\346\214\207\344\273\244\346\227\266\351\227\264", 0));
        label_2->setText(QApplication::translate("LoRaTerminal", "ms", 0));
        groupBox_4->setTitle(QApplication::translate("LoRaTerminal", "\350\257\273\345\206\231\345\234\260\345\235\200", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_JzqNo->setToolTip(QApplication::translate("LoRaTerminal", "<html><head/><body><p><span style=\" color:#aa0000;\">\346\230\276\347\244\272/\350\276\223\345\205\245:7\344\270\252\345\255\227\350\212\202\351\200\232\350\256\257\345\234\260\345\235\200</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_ReadjzqNo->setToolTip(QApplication::translate("LoRaTerminal", "<html><head/><body><p><span style=\" color:#aa0000;\">\350\257\273\345\217\226\347\273\210\347\253\257\351\207\207\351\233\206\345\231\250\345\234\260\345\235\200</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_ReadjzqNo->setText(QApplication::translate("LoRaTerminal", "\350\257\273\345\234\260\345\235\200", 0));
        pushButton_WritejzqNo->setText(QApplication::translate("LoRaTerminal", "\345\206\231\345\234\260\345\235\200", 0));
        groupBox_5->setTitle(QApplication::translate("LoRaTerminal", "\346\212\204\350\241\250", 0));
        label_14->setText(QApplication::translate("LoRaTerminal", "\350\241\250\350\257\273\346\225\260\357\274\232", 0));
        label_15->setText(QApplication::translate("LoRaTerminal", "m\302\263", 0));
        label_16->setText(QApplication::translate("LoRaTerminal", "\350\241\250\347\212\266\346\200\201\357\274\232", 0));
        BtoBreadMeterButton->setText(QApplication::translate("LoRaTerminal", "\347\202\271\345\257\271\347\202\271\346\212\204\350\241\250", 0));
        label_17->setText(QApplication::translate("LoRaTerminal", "\347\224\265\345\216\213\357\274\232", 0));
        label_18->setText(QApplication::translate("LoRaTerminal", "\347\211\210\346\234\254\345\217\267\357\274\232", 0));
        label_19->setText(QApplication::translate("LoRaTerminal", "\350\241\250\347\261\273\345\236\213", 0));
        label_20->setText(QApplication::translate("LoRaTerminal", "\345\215\217\350\256\256\345\217\267", 0));
        label_21->setText(QApplication::translate("LoRaTerminal", "\346\234\210\345\206\273\347\273\223\351\207\217\357\274\232", 0));
        label_22->setText(QApplication::translate("LoRaTerminal", "\350\257\267\350\276\223\345\205\245\347\202\271\345\257\271\347\202\271\346\212\204\350\241\250\345\234\260\345\235\200\357\274\201", 0));
        label_29->setText(QApplication::translate("LoRaTerminal", "\344\277\241\345\217\267\345\274\272\345\272\246\357\274\232", 0));
        groupBox_6->setTitle(QApplication::translate("LoRaTerminal", "\346\225\260\346\215\256\345\220\214\346\255\245", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_BtoBmeterNo_For_sys->setToolTip(QApplication::translate("LoRaTerminal", "<html><head/><body><p><span style=\" color:#aa007f;\">\350\276\223\345\205\2454\345\255\227\350\212\202\350\241\250\345\234\260\345\235\200\357\274\214\344\276\213\345\246\202\357\274\23212345678</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_27->setText(QApplication::translate("LoRaTerminal", "\350\257\267\350\276\223\345\205\245\347\202\271\345\257\271\347\202\271\345\220\214\346\255\245\346\225\260\346\215\256\350\241\250\345\234\260\345\235\200\357\274\201", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_BtoBSaveNo_For_sys->setToolTip(QApplication::translate("LoRaTerminal", "<html><head/><body><p><span style=\" color:#aa007f;\">\350\276\223\345\205\2452\344\270\252\345\255\227\350\212\202\345\255\230\345\202\250\345\234\260\345\235\200\357\274\232\344\276\213\345\246\202:1115</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_BtoBSaveNo_For_sys->setText(QString());
        label_28->setText(QApplication::translate("LoRaTerminal", "\350\257\267\350\276\223\345\205\245\350\257\245\350\241\250\345\234\250\347\273\210\347\253\257\347\232\204\345\255\230\345\202\250\345\234\260\345\235\200\357\274\201", 0));
        pushButton_BToBDataSys->setText(QApplication::translate("LoRaTerminal", "\347\202\271\345\257\271\347\202\271\346\225\260\346\215\256\345\220\214\346\255\245", 0));
        label_3->setText(QApplication::translate("LoRaTerminal", "\345\205\203", 0));
        label_4->setText(QApplication::translate("LoRaTerminal", "\345\205\203", 0));
        label_25->setText(QApplication::translate("LoRaTerminal", "\347\273\223\347\256\227\345\215\225\344\273\267\357\274\232", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_PriceMoney->setToolTip(QApplication::translate("LoRaTerminal", "<html><head/><body><p><span style=\" color:#aa007f;\">\344\276\213\345\246\202\357\274\2322.54\345\205\203</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_24->setText(QApplication::translate("LoRaTerminal", "\347\273\223\347\256\227\344\275\231\351\242\235\357\274\232", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_BalanceMoney->setToolTip(QApplication::translate("LoRaTerminal", "<html><head/><body><p><span style=\" color:#aa00ff;\">\344\276\213\345\246\202\357\274\23225.54\345\205\203</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        label_23->setText(QApplication::translate("LoRaTerminal", "\347\273\223\347\256\227\346\227\266\351\227\264\357\274\232", 0));
        label_26->setText(QApplication::translate("LoRaTerminal", "\351\230\200\351\227\250\346\216\247\345\210\266\357\274\232", 0));
        progressBar_BtoB->setFormat(QApplication::translate("LoRaTerminal", "%p%", 0));
    } // retranslateUi

};

namespace Ui {
    class LoRaTerminal: public Ui_LoRaTerminal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LORATERMINAL_H
