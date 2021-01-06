/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItem
{
public:
    QPushButton *btnAdd;
    QLabel *lblInfo;
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

    void setupUi(QDialog *AddItem)
    {
        if (AddItem->objectName().isEmpty())
            AddItem->setObjectName(QString::fromUtf8("AddItem"));
        AddItem->setWindowModality(Qt::WindowModal);
        AddItem->resize(497, 413);
        AddItem->setInputMethodHints(Qt::ImhExclusiveInputMask);
        btnAdd = new QPushButton(AddItem);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setGeometry(QRect(200, 340, 91, 51));
        QFont font;
        font.setPointSize(9);
        btnAdd->setFont(font);
        btnAdd->setAutoFillBackground(false);
        btnAdd->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));
        btnAdd->setFlat(false);
        lblInfo = new QLabel(AddItem);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(180, 290, 141, 16));
        lblInfo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        formLayoutWidget = new QWidget(AddItem);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 50, 391, 201));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        prod_id = new QLineEdit(formLayoutWidget);
        prod_id->setObjectName(QString::fromUtf8("prod_id"));
        prod_id->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, prod_id);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        name = new QLineEdit(formLayoutWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, name);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        quantity = new QLineEdit(formLayoutWidget);
        quantity->setObjectName(QString::fromUtf8("quantity"));
        quantity->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, quantity);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        cost_price = new QLineEdit(formLayoutWidget);
        cost_price->setObjectName(QString::fromUtf8("cost_price"));
        cost_price->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, cost_price);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        selling_price = new QLineEdit(formLayoutWidget);
        selling_price->setObjectName(QString::fromUtf8("selling_price"));
        selling_price->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, selling_price);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        discount = new QLineEdit(formLayoutWidget);
        discount->setObjectName(QString::fromUtf8("discount"));
        discount->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, discount);


        retranslateUi(AddItem);

        btnAdd->setDefault(false);


        QMetaObject::connectSlotsByName(AddItem);
    } // setupUi

    void retranslateUi(QDialog *AddItem)
    {
        AddItem->setWindowTitle(QCoreApplication::translate("AddItem", "Add an Item", nullptr));
        btnAdd->setText(QCoreApplication::translate("AddItem", "ADD", nullptr));
        lblInfo->setText(QString());
        label->setText(QCoreApplication::translate("AddItem", "Product Id: ", nullptr));
        label_2->setText(QCoreApplication::translate("AddItem", "Name: ", nullptr));
        label_4->setText(QCoreApplication::translate("AddItem", "Quantity: ", nullptr));
        label_5->setText(QCoreApplication::translate("AddItem", "Cost Price: ", nullptr));
        label_6->setText(QCoreApplication::translate("AddItem", "Selling Price: ", nullptr));
        label_7->setText(QCoreApplication::translate("AddItem", "Discount: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItem: public Ui_AddItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
