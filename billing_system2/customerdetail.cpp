#include "customerdetail.h"
#include "ui_customerdetail.h"

customerdetail::customerdetail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customerdetail)
{
    ui->setupUi(this);
}

customerdetail::~customerdetail()
{
    delete ui;
}


void customerdetail::Show()
{
    updateUI();
    show();
}

void customerdetail::updateUI()
{
    qDebug() << "in init()";
    QSqlQueryModel * model = new QSqlQueryModel(this);

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select * from customer");

    if(!query.exec())
       qDebug() << query.lastError().text() << query.lastQuery();
    else
       qDebug() << "== success query fetch()";

    while(query.next())
    qDebug()<<query.value(0).toString();

    model->setQuery(query);
    ui->tableView->setModel(model);
    qDebug() << "rows are : " << model->rowCount();
    ui->tableView->show();

}

