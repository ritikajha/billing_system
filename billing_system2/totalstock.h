#ifndef TOTALSTOCK_H
#define TOTALSTOCK_H

#include <QDialog>
#include <mydb.h>

namespace Ui {
class totalstock;
}

class totalstock : public QDialog
{
    Q_OBJECT

public:
    explicit totalstock(QWidget *parent = nullptr);
    ~totalstock();    
    void Show();

private:
    Ui::totalstock *ui;
    void updateUI();
};

#endif // TOTALSTOCK_H
