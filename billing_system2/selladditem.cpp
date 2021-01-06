#include "selladditem.h"
#include "ui_selladditem.h"

selladditem::selladditem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selladditem)
{
    ui->setupUi(this);
}

selladditem::~selladditem()
{
    delete ui;
}
