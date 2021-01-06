#include "totalstock.h"
#include "ui_totalstock.h"

totalstock::totalstock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::totalstock)
{
    ui->setupUi(this);
}

totalstock::~totalstock()
{
    delete ui;
}


void totalstock::Show()
{
    updateUI();
    show();
}

void totalstock::updateUI()
{
    qDebug() << "in init()";
    QSqlQueryModel * model = new QSqlQueryModel(this);

    QSqlQuery query( MyDB::getInstance()->getDBInstance());
    query.prepare("select * from item");

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
