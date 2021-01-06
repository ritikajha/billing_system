#include "updateitem.h"
#include "ui_updateitem.h"

UpdateItem::UpdateItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateItem)
{
    ui->setupUi(this);
}

UpdateItem::~UpdateItem()
{
    delete ui;
}

void UpdateItem::updateUI()
{

}

void UpdateItem::Show()
{
    updateUI();
    this->show();
}

void UpdateItem::on_btnEDIT_clicked()
{
    ui->lblInfo->clear();
    QString prod_id = ui->prod_id->text();
    QString name = ui->name->text();
    QString quantity = ui->quantity->text();
    QString cost_price = ui->cost_price->text();
    QString selling_price = ui->selling_price->text();
    QString discount = ui->discount->text();

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("update item set name='" + name + "',quantity=" + quantity + ",cost_price=" + cost_price + ",sell_price=" + selling_price + ",discount=" + discount + " where prod_id = '" + prod_id + "'");

    if(!query.exec())
    {
       qDebug() << query.lastError().text() << query.lastQuery();
       ui->lblInfo->setText("Unable to update Item" + query.lastError().text());
    }
    else{
       if(query.numRowsAffected()>0)
       {
            qDebug() << "Item Updated Successfully!";
            ui->lblInfo->setText("Item Updated Successfully!");
       }
       else
       {
        qDebug() << " Unable to update Item";
        ui->lblInfo->setText("Unable to Update Item");
      }
    }
}
