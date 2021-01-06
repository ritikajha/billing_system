/********************************************************************************
** Form generated from reading UI file 'management.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_H
#define UI_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_management
{
public:
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *management)
    {
        if (management->objectName().isEmpty())
            management->setObjectName(QString::fromUtf8("management"));
        management->resize(498, 411);
        pushButton_4 = new QPushButton(management);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 30, 151, 91));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(170, 255, 0);"));
        pushButton_5 = new QPushButton(management);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 150, 151, 91));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 255, 0);"));
        pushButton_6 = new QPushButton(management);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 280, 151, 91));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";\n"
"background-color: rgb(255, 0, 0);"));

        retranslateUi(management);

        QMetaObject::connectSlotsByName(management);
    } // setupUi

    void retranslateUi(QDialog *management)
    {
        management->setWindowTitle(QCoreApplication::translate("management", "Management", nullptr));
        pushButton_4->setText(QCoreApplication::translate("management", "ADD Item", nullptr));
        pushButton_5->setText(QCoreApplication::translate("management", "EDIT Item", nullptr));
        pushButton_6->setText(QCoreApplication::translate("management", "Delete Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class management: public Ui_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_H
