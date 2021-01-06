#ifndef SELL_H
#define SELL_H

#include <QDialog>

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

private:
    Ui::sell *ui;
    void resetElements();
};

#endif // SELL_H
