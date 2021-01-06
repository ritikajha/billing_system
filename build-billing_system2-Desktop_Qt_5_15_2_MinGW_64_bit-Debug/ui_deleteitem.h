/********************************************************************************
** Form generated from reading UI file 'deleteitem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEITEM_H
#define UI_DELETEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteItem
{
public:
    QLabel *lblInfo;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *prod_id;
    QLabel *label;
    QPushButton *btnDELETE;
    QLabel *lblInfo_2;

    void setupUi(QDialog *deleteItem)
    {
        if (deleteItem->objectName().isEmpty())
            deleteItem->setObjectName(QString::fromUtf8("deleteItem"));
        deleteItem->resize(481, 406);
        lblInfo = new QLabel(deleteItem);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(160, 180, 141, 16));
        lblInfo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        formLayoutWidget = new QWidget(deleteItem);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(70, 100, 351, 31));
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

        btnDELETE = new QPushButton(deleteItem);
        btnDELETE->setObjectName(QString::fromUtf8("btnDELETE"));
        btnDELETE->setGeometry(QRect(180, 240, 91, 51));
        btnDELETE->setFont(font);
        btnDELETE->setAutoFillBackground(false);
        btnDELETE->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        btnDELETE->setFlat(false);
        lblInfo_2 = new QLabel(deleteItem);
        lblInfo_2->setObjectName(QString::fromUtf8("lblInfo_2"));
        lblInfo_2->setGeometry(QRect(0, 0, 141, 16));
        lblInfo_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        retranslateUi(deleteItem);

        btnDELETE->setDefault(false);


        QMetaObject::connectSlotsByName(deleteItem);
    } // setupUi

    void retranslateUi(QDialog *deleteItem)
    {
        deleteItem->setWindowTitle(QCoreApplication::translate("deleteItem", "Dialog", nullptr));
        lblInfo->setText(QString());
        label->setText(QCoreApplication::translate("deleteItem", "Product Id: ", nullptr));
        btnDELETE->setText(QCoreApplication::translate("deleteItem", "Delete", nullptr));
        lblInfo_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class deleteItem: public Ui_deleteItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEITEM_H
