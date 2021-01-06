/*
 * Project Developed by CppBuzz.com for learning QT-C++ concepts
 * Users are allowed to use/modify this code according to their requirement.
 * These projects are free to download.
 * Date: 25th April 2020
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "totalstock.h"
#include "sell.h"
#include "management.h"
#include "customerdetail.h"
#include "currency.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::MainWindow *ui;

    totalstock *ptrTotalStock;
    sell *ptrSell;
    management *ptrManagement;
    customerdetail *ptrCustomerDetail;
    currency *ptrCurrency;


};

#endif // MAINWINDOW_H
