#ifndef SELLADDITEM_H
#define SELLADDITEM_H

#include <QDialog>
#include <mydb.h>
namespace Ui {
class selladditem;
}

class selladditem : public QDialog
{
    Q_OBJECT

public:
    explicit selladditem(QWidget *parent = nullptr);
    ~selladditem();

private:
    Ui::selladditem *ui;


};

#endif // SELLADDITEM_H
