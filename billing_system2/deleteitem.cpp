#include "deleteitem.h"
#include "ui_deleteitem.h"

deleteItem::deleteItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteItem)
{
    ui->setupUi(this);
}

deleteItem::~deleteItem()
{
    delete ui;
}


void deleteItem::Show()
{
    this->show();
}



void deleteItem::on_btnDELETE_clicked()
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

void deleteItem::resetElements()
{
ui->prod_id->clear();
}
