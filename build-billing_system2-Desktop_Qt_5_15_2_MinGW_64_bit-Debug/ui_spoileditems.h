/********************************************************************************
** Form generated from reading UI file 'spoileditems.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPOILEDITEMS_H
#define UI_SPOILEDITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SpoiledItems
{
public:
    QTableView *tableView;

    void setupUi(QDialog *SpoiledItems)
    {
        if (SpoiledItems->objectName().isEmpty())
            SpoiledItems->setObjectName(QString::fromUtf8("SpoiledItems"));
        SpoiledItems->setWindowModality(Qt::WindowModal);
        SpoiledItems->resize(330, 240);
        tableView = new QTableView(SpoiledItems);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 10, 311, 221));

        retranslateUi(SpoiledItems);

        QMetaObject::connectSlotsByName(SpoiledItems);
    } // setupUi

    void retranslateUi(QDialog *SpoiledItems)
    {
        SpoiledItems->setWindowTitle(QCoreApplication::translate("SpoiledItems", "Mark Item as Spoiled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpoiledItems: public Ui_SpoiledItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPOILEDITEMS_H
