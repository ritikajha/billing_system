#include "currency.h"
#include "ui_currency.h"

currency::currency(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::currency)
{
    ui->setupUi(this);
}

currency::~currency()
{
    delete ui;
}

void currency::on_pushButton_clicked()
{
        ui->lblInfo->setText("");
        QSqlQuery query( MyDB::getInstance()->getDBInstance());
        query.clear();
        query.prepare("update item set cost_price=cost_price/90, sell_price=sell_price/90");


        if(!query.exec())
        {
            qDebug() << query.lastError().text() << query.lastQuery();
            ui->lblInfo->setText("Currency is in Dollar");
        }
        else
        {

                qDebug() <<"read was successful "<< query.lastQuery();
                ui->lblInfo->setText("Currency has changed to Indian Rupee");

         }

}

void currency::on_pushButton_2_clicked()
{
    ui->lblInfo->setText("");
    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.clear();
    query.prepare("update item set cost_price=cost_price*90, sell_price=sell_price*90");


    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText("Currency is in Indian Rupee");
    }
    else
    {

            qDebug() <<"read was successful "<< query.lastQuery();
            ui->lblInfo->setText("Currency has changed to Dollar");

     }
}
