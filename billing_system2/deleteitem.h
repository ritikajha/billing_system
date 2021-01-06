#ifndef DELETEITEM_H
#define DELETEITEM_H

#include <QDialog>
#include <mydb.h>

namespace Ui {
class deleteItem;
}

class deleteItem : public QDialog
{
    Q_OBJECT

public:
    explicit deleteItem(QWidget *parent = nullptr);
    ~deleteItem();
    void Show();
private slots:
    void on_btnDELETE_clicked();

private:
    Ui::deleteItem *ui;
    void resetElements();
};

#endif // DELETEITEM_H
