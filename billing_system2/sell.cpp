#include "sell.h"
#include "ui_sell.h"

sell::sell(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sell)
{
    ui->setupUi(this);

    ptrSellAddItem = new selladditem(this);
    ui->btnADD->setHidden(true);
    ui->btnGENERATE->setHidden(true);
    ui->label_3->setHidden(true);

}

sell::~sell()
{
    delete ui;
    delete ptrSellAddItem;
}


void sell::Show()
{
    this->show();
}


void sell::resetElements()
{
    /*ui->txtName->clear();
    ui->txtQuantity->clear();
    ui->txtDOP->clear();
    ui->txtDOS->clear();
    ui->txtSellingPrice->clear();
    ui->txtPurchasePrice->clear();*/
}

void sell::on_btnFETCH_clicked()
{

    ui->lblInfo->setText("");
  QString name = ui->name->text();
    QString phone_no = ui->phone_no->text();
//    QSqlQueryModel * model = new QSqlQueryModel(this);
    QSqlQuery query(MyDB::getInstance()->getDBInstance());
     query.clear();
     query.prepare("select * from customer where phone = '" +phone_no +"'");

     if(!query.exec()){
         qDebug() << query.lastError().text() << query.lastQuery();
     }

     else{
         if(query.next()){
                      qDebug() << "== success query fetch()";
                      ui->lblInfo->setText("Customer is in database");
                     QString name = query.value(0).toString();
                      QString phone_no = query.value(1).toString();
//                      int visit = query.value(2).toInt();
                      ui->label_name->setText(name);
                      ui->label_phone->setText(phone_no);
                      query.clear();
                      query.prepare("update customer set visit = visit+1 where phone = '" + phone_no + "'");
                      if(!query.exec()){
                         qDebug() << query.lastError().text() << query.lastQuery();
                      }else{

                         qDebug() << "== Please start the Bill";
                         ui->btnGENERATE->setHidden(false);
                         ui->btnADD->setHidden(false);
                             ui->label_3->setHidden(false);
                      }

                      while(query.next())
                      qDebug()<<query.value(0).toString();



         }else{
                      qDebug() << "== unable to fetch";
                      ui->lblInfo->setText("Customer is not in database");
                      ui->label_name->setText(name);
                      ui->label_phone->setText(phone_no);
                      query.clear();
                      query.prepare("insert into customer (name, phone, visit) values ('" + name + "','" + phone_no + "',1"  ")");
                      if(!query.exec()){
                         qDebug() << query.lastError().text() << query.lastQuery();
                      }else{
                         qDebug() << "== new customer added";
                          ui->btnGENERATE->setHidden(false);
                          ui->btnADD->setHidden(false);
                          ui->label_3->setHidden(false);
                       }
                      while(query.next())
                      qDebug()<<query.value(0).toString();


         }

     }


//             while(query.next())
//             qDebug()<<query.value(0).toString();

//     model->setQuery(query);
//     ui->tableView->setModel(model);
//     ui->tableView->show();



   //    QString sQuantity = ui->txtQuantity->text();
   //    QString sStatus = ui->cmbStatus->currentText();
   //    QString sDOP = ui->txtDOP->text();
   //    QString sDOS = ui->txtDOS->text();
   //    QString sSellingPrice = ui->txtSellingPrice->text();
   //    QString sPurchasePrice = ui->txtPurchasePrice->text();

   //    QSqlQuery query(MyDB::getInstance()->getDBInstance());
   //    query.clear();
   //    query.prepare("insert into cppbuzz_items(Name, Quantity, Status, DOP, DOS, SellingPrice, PurchasePrice) values ('" +sName +"','" +sQuantity + "','"+ sStatus + "','" +sDOP + "','"+ sDOS+ "','"+sSellingPrice+ "','"+ sPurchasePrice + "')");

   //    if(!query.exec())
   //    {
   //        qDebug() << query.lastError().text() << query.lastQuery();
   //        ui->lblInfo->setText("Unable to Add Item");
   //    }
   //    else
   //    {
   //        if(query.numRowsAffected() > 0)
   //        {
   //            qDebug() <<"read was successful "<< query.lastQuery();
   //            ui->lblInfo->setText("Item Added Successfully!");
   //            resetElements();
   //        }
   //        else
   //            qDebug() <<"Unable to Add new Item";
   //     }

}


void sell::on_btnADD_clicked()
{
    ptrSellAddItem->show();
}
