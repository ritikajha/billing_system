/********************************************************************************
** Form generated from reading UI file 'finditem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDITEM_H
#define UI_FINDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FindItem
{
public:
    QPushButton *btnFind;
    QLineEdit *txtValue;
    QGroupBox *groupBox;
    QRadioButton *rdoName;
    QRadioButton *rdoId;
    QRadioButton *rdoQuantity;
    QRadioButton *rdoSellingPrice;
    QTableView *tableView;

    void setupUi(QDialog *FindItem)
    {
        if (FindItem->objectName().isEmpty())
            FindItem->setObjectName(QString::fromUtf8("FindItem"));
        FindItem->resize(375, 240);
        btnFind = new QPushButton(FindItem);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setGeometry(QRect(270, 10, 75, 23));
        txtValue = new QLineEdit(FindItem);
        txtValue->setObjectName(QString::fromUtf8("txtValue"));
        txtValue->setGeometry(QRect(20, 10, 201, 20));
        groupBox = new QGroupBox(FindItem);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 321, 51));
        rdoName = new QRadioButton(groupBox);
        rdoName->setObjectName(QString::fromUtf8("rdoName"));
        rdoName->setGeometry(QRect(10, 20, 61, 17));
        rdoId = new QRadioButton(groupBox);
        rdoId->setObjectName(QString::fromUtf8("rdoId"));
        rdoId->setGeometry(QRect(80, 20, 61, 17));
        rdoQuantity = new QRadioButton(groupBox);
        rdoQuantity->setObjectName(QString::fromUtf8("rdoQuantity"));
        rdoQuantity->setGeometry(QRect(150, 20, 61, 17));
        rdoSellingPrice = new QRadioButton(FindItem);
        rdoSellingPrice->setObjectName(QString::fromUtf8("rdoSellingPrice"));
        rdoSellingPrice->setGeometry(QRect(250, 50, 81, 17));
        tableView = new QTableView(FindItem);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 90, 321, 141));

        retranslateUi(FindItem);

        QMetaObject::connectSlotsByName(FindItem);
    } // setupUi

    void retranslateUi(QDialog *FindItem)
    {
        FindItem->setWindowTitle(QCoreApplication::translate("FindItem", "Find Items", nullptr));
        btnFind->setText(QCoreApplication::translate("FindItem", "Find", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FindItem", "Select Criteria", nullptr));
        rdoName->setText(QCoreApplication::translate("FindItem", "Name", nullptr));
        rdoId->setText(QCoreApplication::translate("FindItem", "Id", nullptr));
        rdoQuantity->setText(QCoreApplication::translate("FindItem", "Quantity", nullptr));
        rdoSellingPrice->setText(QCoreApplication::translate("FindItem", "Selling Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindItem: public Ui_FindItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDITEM_H
