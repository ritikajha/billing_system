/********************************************************************************
** Form generated from reading UI file 'currency.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENCY_H
#define UI_CURRENCY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_currency
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *lblInfo;

    void setupUi(QDialog *currency)
    {
        if (currency->objectName().isEmpty())
            currency->setObjectName(QString::fromUtf8("currency"));
        currency->resize(493, 406);
        pushButton = new QPushButton(currency);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 60, 231, 91));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(0, 255, 0);"));
        pushButton_2 = new QPushButton(currency);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 210, 231, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 170, 0);"));
        lblInfo = new QLabel(currency);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(110, 380, 331, 20));
        lblInfo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        retranslateUi(currency);

        QMetaObject::connectSlotsByName(currency);
    } // setupUi

    void retranslateUi(QDialog *currency)
    {
        currency->setWindowTitle(QCoreApplication::translate("currency", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("currency", "Dollar to Rupee", nullptr));
        pushButton_2->setText(QCoreApplication::translate("currency", "Rupee to Dollar", nullptr));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class currency: public Ui_currency {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENCY_H
