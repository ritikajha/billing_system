/********************************************************************************
** Form generated from reading UI file 'customerdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERDETAIL_H
#define UI_CUSTOMERDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_customerdetail
{
public:
    QTableView *tableView;

    void setupUi(QDialog *customerdetail)
    {
        if (customerdetail->objectName().isEmpty())
            customerdetail->setObjectName(QString::fromUtf8("customerdetail"));
        customerdetail->resize(497, 410);
        tableView = new QTableView(customerdetail);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 481, 391));

        retranslateUi(customerdetail);

        QMetaObject::connectSlotsByName(customerdetail);
    } // setupUi

    void retranslateUi(QDialog *customerdetail)
    {
        customerdetail->setWindowTitle(QCoreApplication::translate("customerdetail", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerdetail: public Ui_customerdetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERDETAIL_H
