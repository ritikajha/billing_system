/********************************************************************************
** Form generated from reading UI file 'sell.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELL_H
#define UI_SELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sell
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *phone_no;
    QLineEdit *name;
    QLabel *label_2;
    QPushButton *btnFETCH;
    QLabel *lblInfo;
    QLabel *label_name;
    QLabel *label_phone;
    QLabel *label_3;
    QPushButton *btnGENERATE;
    QPushButton *btnADD;

    void setupUi(QDialog *sell)
    {
        if (sell->objectName().isEmpty())
            sell->setObjectName(QString::fromUtf8("sell"));
        sell->resize(501, 418);
        formLayoutWidget = new QWidget(sell);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 30, 391, 57));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        phone_no = new QLineEdit(formLayoutWidget);
        phone_no->setObjectName(QString::fromUtf8("phone_no"));
        QFont font1;
        font1.setPointSize(9);
        phone_no->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, phone_no);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        btnFETCH = new QPushButton(sell);
        btnFETCH->setObjectName(QString::fromUtf8("btnFETCH"));
        btnFETCH->setGeometry(QRect(190, 110, 91, 31));
        btnFETCH->setFont(font1);
        btnFETCH->setAutoFillBackground(false);
        btnFETCH->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));
        btnFETCH->setFlat(false);
        lblInfo = new QLabel(sell);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(140, 390, 261, 20));
        lblInfo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        label_name = new QLabel(sell);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(90, 220, 151, 31));
        label_phone = new QLabel(sell);
        label_phone->setObjectName(QString::fromUtf8("label_phone"));
        label_phone->setGeometry(QRect(280, 220, 161, 31));
        label_3 = new QLabel(sell);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 180, 201, 20));
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\"; color: rgb(0, 0, 256);"));
        btnGENERATE = new QPushButton(sell);
        btnGENERATE->setObjectName(QString::fromUtf8("btnGENERATE"));
        btnGENERATE->setGeometry(QRect(40, 300, 121, 31));
        btnGENERATE->setFont(font1);
        btnGENERATE->setAutoFillBackground(false);
        btnGENERATE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        btnGENERATE->setFlat(false);
        btnADD = new QPushButton(sell);
        btnADD->setObjectName(QString::fromUtf8("btnADD"));
        btnADD->setGeometry(QRect(280, 300, 121, 31));
        btnADD->setFont(font1);
        btnADD->setAutoFillBackground(false);
        btnADD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        btnADD->setFlat(false);

        retranslateUi(sell);

        btnFETCH->setDefault(false);
        btnGENERATE->setDefault(false);
        btnADD->setDefault(false);


        QMetaObject::connectSlotsByName(sell);
    } // setupUi

    void retranslateUi(QDialog *sell)
    {
        sell->setWindowTitle(QCoreApplication::translate("sell", "Bill Generate", nullptr));
        label->setText(QCoreApplication::translate("sell", "Phone Number:   ", nullptr));
        label_2->setText(QCoreApplication::translate("sell", "Name of Customer: ", nullptr));
        btnFETCH->setText(QCoreApplication::translate("sell", "Fetch", nullptr));
        lblInfo->setText(QString());
        label_name->setText(QString());
        label_phone->setText(QString());
        label_3->setText(QCoreApplication::translate("sell", "Customer Detail", nullptr));
        btnGENERATE->setText(QCoreApplication::translate("sell", "Generate Bill", nullptr));
        btnADD->setText(QCoreApplication::translate("sell", "Add Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sell: public Ui_sell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELL_H
