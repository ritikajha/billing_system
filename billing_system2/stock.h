#ifndef STOCK_H
#define STOCK_H

#include <QDialog>
#include "mydb.h"

namespace Ui {
class Stock;
}

class Stock : public QDialog
{
    Q_OBJECT

public:
    explicit Stock(QWidget *parent = nullptr);
    ~Stock();
    void Show();
private:
    Ui::Stock *ui;
    void updateUI();
};

#endif // STOCK_H
