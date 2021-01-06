/********************************************************************************
** Form generated from reading UI file 'totalstock.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALSTOCK_H
#define UI_TOTALSTOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_totalstock
{
public:
    QTableView *tableView;

    void setupUi(QDialog *totalstock)
    {
        if (totalstock->objectName().isEmpty())
            totalstock->setObjectName(QString::fromUtf8("totalstock"));
        totalstock->resize(793, 395);
        tableView = new QTableView(totalstock);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 771, 351));

        retranslateUi(totalstock);

        QMetaObject::connectSlotsByName(totalstock);
    } // setupUi

    void retranslateUi(QDialog *totalstock)
    {
        totalstock->setWindowTitle(QCoreApplication::translate("totalstock", "Stock Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class totalstock: public Ui_totalstock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALSTOCK_H
