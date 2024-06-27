#ifndef BILLINGINFORMATION_H
#define BILLINGINFORMATION_H

#include <QDialog>

namespace Ui {
class BillingInformation;
}

class BillingInformation : public QDialog
{
    Q_OBJECT

public:
    explicit BillingInformation(QWidget *parent = nullptr);
    ~BillingInformation();

private:
    Ui::BillingInformation *ui;
};

#endif // BILLINGINFORMATION_H
