#ifndef SELL_H
#define SELL_H

#include <QDialog>
#include <mydb.h>

namespace Ui {
class sell;
}

class sell : public QDialog
{
    Q_OBJECT

public:
    explicit sell(QWidget *parent = nullptr);
    ~sell();
    void Show();

private slots:
    void on_btnFETCH_clicked();

private:
    Ui::sell *ui;
    void resetElements();
};

#endif // SELL_H
