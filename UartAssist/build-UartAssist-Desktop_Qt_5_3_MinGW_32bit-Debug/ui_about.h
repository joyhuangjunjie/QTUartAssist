/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QStringLiteral("about"));
        about->resize(336, 232);
        buttonBox = new QDialogButtonBox(about);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-20, 180, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(about);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 51, 101, 121));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Resources/6_96px_1168279net.png")));
        label->setScaledContents(false);
        widget = new QWidget(about);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 72, 119, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Cambria"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4);


        retranslateUi(about);
        QObject::connect(buttonBox, SIGNAL(accepted()), about, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), about, SLOT(reject()));

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "About...", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("about", "\347\211\210\346\234\254\357\274\232V1.0", 0));
        label_3->setText(QApplication::translate("about", "\346\227\266\351\227\264:2018/1/18", 0));
        label_4->setText(QApplication::translate("about", "\345\210\266\344\275\234\344\272\272\357\274\232joy", 0));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
