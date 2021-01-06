/********************************************************************************
** Form generated from reading UI file 'availableitems.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVAILABLEITEMS_H
#define UI_AVAILABLEITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AvailableItems
{
public:
    QTableView *tableView;

    void setupUi(QDialog *AvailableItems)
    {
        if (AvailableItems->objectName().isEmpty())
            AvailableItems->setObjectName(QString::fromUtf8("AvailableItems"));
        AvailableItems->resize(498, 414);
        tableView = new QTableView(AvailableItems);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 471, 391));

        retranslateUi(AvailableItems);

        QMetaObject::connectSlotsByName(AvailableItems);
    } // setupUi

    void retranslateUi(QDialog *AvailableItems)
    {
        AvailableItems->setWindowTitle(QCoreApplication::translate("AvailableItems", "Stock Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AvailableItems: public Ui_AvailableItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVAILABLEITEMS_H
