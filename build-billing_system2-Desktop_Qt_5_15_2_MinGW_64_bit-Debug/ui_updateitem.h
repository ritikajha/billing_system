/********************************************************************************
** Form generated from reading UI file 'updateitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITEM_H
#define UI_UPDATEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateItem
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *prod_id;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label_4;
    QLineEdit *quantity;
    QLabel *label_5;
    QLineEdit *cost_price;
    QLabel *label_6;
    QLineEdit *selling_price;
    QLabel *label_7;
    QLineEdit *discount;
    QPushButton *btnEDIT;
    QLabel *lblInfo;

    void setupUi(QDialog *UpdateItem)
    {
        if (UpdateItem->objectName().isEmpty())
            UpdateItem->setObjectName(QString::fromUtf8("UpdateItem"));
        UpdateItem->setWindowModality(Qt::WindowModal);
        UpdateItem->resize(496, 413);
        formLayoutWidget = new QWidget(UpdateItem);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 40, 391, 201));
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

        prod_id = new QLineEdit(formLayoutWidget);
        prod_id->setObjectName(QString::fromUtf8("prod_id"));
        QFont font1;
        font1.setPointSize(9);
        prod_id->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, prod_id);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        quantity = new QLineEdit(formLayoutWidget);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, quantity);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        cost_price = new QLineEdit(formLayoutWidget);
        cost_price->setObjectName(QString::fromUtf8("cost_price"));
        cost_price->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, cost_price);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        selling_price = new QLineEdit(formLayoutWidget);
        selling_price->setObjectName(QString::fromUtf8("selling_price"));
        selling_price->setFont(font1);

        formLayout->setWidget(4, QFormLayout::FieldRole, selling_price);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        discount = new QLineEdit(formLayoutWidget);
        discount->setObjectName(QString::fromUtf8("discount"));
        discount->setFont(font1);

        formLayout->setWidget(5, QFormLayout::FieldRole, discount);

        btnEDIT = new QPushButton(UpdateItem);
        btnEDIT->setObjectName(QString::fromUtf8("btnEDIT"));
        btnEDIT->setGeometry(QRect(200, 330, 91, 51));
        btnEDIT->setFont(font1);
        btnEDIT->setAutoFillBackground(false);
        btnEDIT->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));
        btnEDIT->setFlat(false);
        lblInfo = new QLabel(UpdateItem);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(180, 280, 141, 16));
        lblInfo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        retranslateUi(UpdateItem);

        btnEDIT->setDefault(false);


        QMetaObject::connectSlotsByName(UpdateItem);
    } // setupUi

    void retranslateUi(QDialog *UpdateItem)
    {
        UpdateItem->setWindowTitle(QCoreApplication::translate("UpdateItem", "Update Any Item", nullptr));
        label->setText(QCoreApplication::translate("UpdateItem", "Product Id: ", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateItem", "Name: ", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateItem", "Quantity: ", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateItem", "Cost Price: ", nullptr));
        label_6->setText(QCoreApplication::translate("UpdateItem", "Selling Price: ", nullptr));
        label_7->setText(QCoreApplication::translate("UpdateItem", "Discount: ", nullptr));
        btnEDIT->setText(QCoreApplication::translate("UpdateItem", "UPDATE", nullptr));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UpdateItem: public Ui_UpdateItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITEM_H
