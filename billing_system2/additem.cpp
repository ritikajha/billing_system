#include "additem.h"
#include "ui_additem.h"

AddItem::AddItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItem)
{
    ui->setupUi(this);
}

AddItem::~AddItem()
{
    delete ui;
}

void AddItem::Show()
{
    this->show();
}

void AddItem::on_btnAdd_clicked()
{
    ui->lblInfo->setText("");

//    QString num="123";
//    int n = num.toInt()

    QString name = ui->name->text();
    QString prod_id = ui->prod_id->text();
    QString quantity = ui->quantity->text();
    QString cost_price = ui->cost_price->text();
    QString selling_price = ui->selling_price->text();
    QString discount = ui->discount->text();
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
    query.clear();
    query.prepare("insert into item(prod_id, name, quantity, cost_price, sell_price, discount) values ('"+prod_id+"','" +name + "',"+ quantity + "," +cost_price + ","+ selling_price+ ","+discount+ ")");

//    query.prepare("insert into item(prod_id, name, quantity, cost_price, sell_price, discount) values (:name ,'Sweater', 10, 100, 200, 10)");
//    query.bindValue(":name", name);
//    query.bindValue(":prod_id", prod_id);
//    query.bindValue(":quantity", quantity);
//    query.bindValue(":cost_price", cost_price);
//    query.bindValue(":selling_price", selling_price);
//    query.bindValue(":discount", discount);


    if(!query.exec())
    {
        qDebug() << query.lastError().text() << query.lastQuery();
        ui->lblInfo->setText("Unable to Add Item");
    }
    else
    {
        if(query.numRowsAffected() > 0)
        {
            qDebug() <<"read was successful "<< query.lastQuery();
            ui->lblInfo->setText("Item Added Successfully!");
            resetElements();
        }
        else
            qDebug() <<"Unable2 to Add new Item";
     }

}

void AddItem::resetElements()
{
    ui->name->clear();
    ui->prod_id->clear();
    ui->quantity->clear();
    ui->cost_price->clear();
    ui->selling_price->clear();
    ui->discount->clear();
}
