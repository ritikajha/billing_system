#include "returneditems.h"
#include "ui_returneditems.h"

ReturnedItems::ReturnedItems(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnedItems)
{
    ui->setupUi(this);
}

ReturnedItems::~ReturnedItems()
{
    delete ui;
}

void ReturnedItems::Show()
{
    this->show();
}



void ReturnedItems::on_btnDELETE_clicked()
{


ui->lblInfo->setText("");

QString prod_id = ui->prod_id->text();

QSqlQuery query(MyDB::getInstance()->getDBInstance());
query.clear();

query.prepare("delete from item where prod_id = '"+prod_id+"'");



if(!query.exec())
{
    qDebug() << query.lastError().text() << query.lastQuery();
    ui->lblInfo->setText("Unable to DELETE Item");
}
else
{
    if(query.numRowsAffected() > 0)
    {
        qDebug() <<"read was successful "<< query.lastQuery();
        ui->lblInfo->setText("Item Deleted Successfully!");
        resetElements();
    }
    else
        qDebug() <<"Unable2 to DELETE Item";
 }

}

void ReturnedItems::resetElements()
{
ui->prod_id->clear();
}
