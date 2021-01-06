#ifndef CUSTOMERDETAIL_H
#define CUSTOMERDETAIL_H

#include <QDialog>
#include <mydb.h>
namespace Ui {
class customerdetail;
}

class customerdetail : public QDialog
{
    Q_OBJECT

public:
    explicit customerdetail(QWidget *parent = nullptr);
    ~customerdetail();
     void Show();

private:
    Ui::customerdetail *ui;
        void updateUI();
};

#endif // CUSTOMERDETAIL_H
