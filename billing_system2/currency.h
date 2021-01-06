#ifndef CURRENCY_H
#define CURRENCY_H

#include <QDialog>
#include <mydb.h>

namespace Ui {
class currency;
}

class currency : public QDialog
{
    Q_OBJECT

public:
    explicit currency(QWidget *parent = nullptr);
    ~currency();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::currency *ui;
};

#endif // CURRENCY_H
