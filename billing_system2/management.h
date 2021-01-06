#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QDialog>
#include <additem.h>
#include <updateitem.h>
#include <deleteitem.h>

namespace Ui {
class management;
}

class management : public QDialog
{
    Q_OBJECT

public:
    explicit management(QWidget *parent = nullptr);
    ~management();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::management *ui;
    AddItem * ptrAddItem;
    UpdateItem *ptrUpdateItem;
    deleteItem *ptrDeleteItem;
};

#endif // MANAGEMENT_H
