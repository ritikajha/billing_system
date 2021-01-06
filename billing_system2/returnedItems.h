#ifndef RETURNEDITEMS_H
#define RETURNEDITEMS_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class ReturnedItems;
}

class ReturnedItems : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnedItems(QWidget *parent = nullptr);
    ~ReturnedItems();
    void Show();
private slots:
    void on_btnDELETE_clicked();

private:
    Ui::ReturnedItems *ui;
    void resetElements();
};

#endif // RETURNEDITEMS_H
