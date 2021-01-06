#include "management.h"
#include "ui_management.h"

management::management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::management)
{
    ui->setupUi(this);
    ptrAddItem = new AddItem(this);
    ptrUpdateItem = new UpdateItem(this);
    ptrDeleteItem = new deleteItem(this);
}

management::~management()
{
    delete ui;
    delete ptrAddItem;
    delete ptrUpdateItem;
    delete ptrDeleteItem;
}

void management::on_pushButton_4_clicked()
{
    hide();
    ptrAddItem->Show();
}

void management::on_pushButton_5_clicked()
{
    hide();
    ptrUpdateItem->Show();
}

void management::on_pushButton_6_clicked()
{
    hide();
    ptrDeleteItem->Show();
}
