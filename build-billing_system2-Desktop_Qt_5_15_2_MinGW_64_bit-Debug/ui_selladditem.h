/********************************************************************************
** Form generated from reading UI file 'selladditem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLADDITEM_H
#define UI_SELLADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selladditem
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *prod_id;
    QLabel *label_2;
    QLineEdit *prod_quan;
    QPushButton *btnADD;
    QLabel *lblInfo;
    QTableView *tableView;

    void setupUi(QDialog *selladditem)
    {
        if (selladditem->objectName().isEmpty())
            selladditem->setObjectName(QString::fromUtf8("selladditem"));
        selladditem->resize(488, 322);
        formLayoutWidget = new QWidget(selladditem);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 30, 391, 61));
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

        prod_quan = new QLineEdit(formLayoutWidget);
        prod_quan->setObjectName(QString::fromUtf8("prod_quan"));
        prod_quan->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, prod_quan);

        btnADD = new QPushButton(selladditem);
        btnADD->setObjectName(QString::fromUtf8("btnADD"));
        btnADD->setGeometry(QRect(180, 140, 111, 61));
        btnADD->setFont(font1);
        btnADD->setAutoFillBackground(false);
        btnADD->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"));
        btnADD->setFlat(false);
        lblInfo = new QLabel(selladditem);
        lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
        lblInfo->setGeometry(QRect(110, 290, 231, 16));
        lblInfo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        tableView = new QTableView(selladditem);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(45, 26, 301, 261));

        retranslateUi(selladditem);

        btnADD->setDefault(false);


        QMetaObject::connectSlotsByName(selladditem);
    } // setupUi

    void retranslateUi(QDialog *selladditem)
    {
        selladditem->setWindowTitle(QCoreApplication::translate("selladditem", "Add Item in Bill", nullptr));
        label->setText(QCoreApplication::translate("selladditem", "Product ID:  ", nullptr));
        label_2->setText(QCoreApplication::translate("selladditem", "Product Quantity", nullptr));
        btnADD->setText(QCoreApplication::translate("selladditem", "ADD Item", nullptr));
        lblInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class selladditem: public Ui_selladditem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLADDITEM_H
