/********************************************************************************
** Form generated from reading UI file 'returneditems.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNEDITEMS_H
#define UI_RETURNEDITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReturnedItems
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *prod_id;
    QLabel *label;
    QPushButton *btnDELETE;
    QLabel *lblInfo;
    QLabel *lblInfo_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLineEdit *prod_id_2;
    QLabel *label_2;
    QPushButton *btnDELETE_2;

    void setupUi(QDialog *ReturnedItems)
    {
        if (ReturnedItems->objectName().isEmpty())
            ReturnedItems->setObjectName(QString::fromUtf8("ReturnedItems"));
        ReturnedItems->resize(497, 414);
        formLayoutWidget = new QWidget(ReturnedItems);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 90, 351, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        prod_id = new QLineEdit(formLayoutWidget);
        prod_id->setObjectName(QString::fromUtf8("prod_id"));
        QFont font;
        font.setPointSize(9);
        prod_id->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, prod_id);

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

        btnDELETE = new QPushButton(ReturnedItems);
        btnDELETE->setObjectName(QString::fromUtf8("btnDELETE"));
        btnDELETE->setGeometry(QRect(190, 230, 91, 51));
        btnDELETE->setFont(font);
        btnDELETE->setAutoFillBackground(false);
        btnDELETE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btnDELETE->setFlat(false);
        lblInfo = new QLabel(ReturnedItems);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(170, 170, 141, 16));
        lblInfo->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        lblInfo_2 = new QLabel(ReturnedItems);
        lblInfo_2->setObjectName(QString::fromUtf8("lblInfo_2"));
        lblInfo_2->setGeometry(QRect(90, 80, 141, 16));
        lblInfo_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        formLayoutWidget_2 = new QWidget(ReturnedItems);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(0, 0, 351, 31));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        prod_id_2 = new QLineEdit(formLayoutWidget_2);
        prod_id_2->setObjectName(QString::fromUtf8("prod_id_2"));
        prod_id_2->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, prod_id_2);

        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        btnDELETE_2 = new QPushButton(ReturnedItems);
        btnDELETE_2->setObjectName(QString::fromUtf8("btnDELETE_2"));
        btnDELETE_2->setGeometry(QRect(110, 140, 91, 51));
        btnDELETE_2->setFont(font);
        btnDELETE_2->setAutoFillBackground(false);
        btnDELETE_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btnDELETE_2->setFlat(false);

        retranslateUi(ReturnedItems);

        btnDELETE->setDefault(false);
        btnDELETE_2->setDefault(false);


        QMetaObject::connectSlotsByName(ReturnedItems);
    } // setupUi

    void retranslateUi(QDialog *ReturnedItems)
    {
        ReturnedItems->setWindowTitle(QCoreApplication::translate("ReturnedItems", "Delete Any Item", nullptr));
        label->setText(QCoreApplication::translate("ReturnedItems", "Product Id: ", nullptr));
        btnDELETE->setText(QCoreApplication::translate("ReturnedItems", "Delete", nullptr));
        lblInfo->setText(QString());
        lblInfo_2->setText(QString());
        label_2->setText(QCoreApplication::translate("ReturnedItems", "Product Id: ", nullptr));
        btnDELETE_2->setText(QCoreApplication::translate("ReturnedItems", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturnedItems: public Ui_ReturnedItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNEDITEMS_H
