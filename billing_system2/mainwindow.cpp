#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ptrTotalStock = new totalstock(this);
    ptrSell = new sell(this);
    ptrManagement = new management(this);
    ptrCustomerDetail = new customerdetail(this);

}

MainWindow::~MainWindow()
{
    delete ui;

    delete ptrTotalStock;
    delete ptrSell;
    delete ptrManagement;
    delete ptrCustomerDetail;
    MyDB::ResetInstance();
}


void MainWindow::on_pushButton_clicked()
{
    ptrSell->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    ptrManagement->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    ptrTotalStock->Show();
}

void MainWindow::on_pushButton_4_clicked()
{
    ptrCustomerDetail->Show();
}
