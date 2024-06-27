#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>

namespace Ui {
class CheckOut;
}

class CheckOut : public QDialog
{
    Q_OBJECT

public:
    explicit CheckOut(QWidget *parent = nullptr);
    ~CheckOut();

private:
    Ui::CheckOut *ui;
};

#endif // CHECKOUT_H
