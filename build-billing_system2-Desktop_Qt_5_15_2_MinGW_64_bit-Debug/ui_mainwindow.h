/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QLabel *label_statusbar_1;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(807, 594);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 250, 211, 131));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 90, 211, 131));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));
        label_statusbar_1 = new QLabel(centralWidget);
        label_statusbar_1->setObjectName(QString::fromUtf8("label_statusbar_1"));
        label_statusbar_1->setGeometry(QRect(20, 560, 771, 20));
        label_statusbar_1->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 90, 211, 131));
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 250, 211, 131));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 10, 461, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"font: 22pt \"MS Shell Dlg 2\";"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 410, 211, 131));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(420, 410, 211, 131));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 12pt \"MS Shell Dlg 2\";"));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Billing System", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Customer Detail", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Management", nullptr));
        label_statusbar_1->setText(QCoreApplication::translate("MainWindow", "  Developed By Ritika Jha and Rohan kumar                                                                                     Guided by: Prof. Mukesh Giluka", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", " Sell", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Business Detail", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Super Market Billing System", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Stock Report", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Currency System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
