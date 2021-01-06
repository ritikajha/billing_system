/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

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

        retranslateUi(ReturnedItems);

        btnDELETE->setDefault(false);


        QMetaObject::connectSlotsByName(ReturnedItems);
    } // setupUi

    void retranslateUi(QDialog *ReturnedItems)
    {
        ReturnedItems->setWindowTitle(QCoreApplication::translate("ReturnedItems", "Delete Any Item", nullptr));
        label->setText(QCoreApplication::translate("ReturnedItems", "Product Id: ", nullptr));
        btnDELETE->setText(QCoreApplication::translate("ReturnedItems", "Delete", nullptr));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ReturnedItems: public Ui_ReturnedItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
