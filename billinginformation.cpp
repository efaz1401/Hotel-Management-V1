#include "billinginformation.h"
#include "ui_billinginformation.h"

BillingInformation::BillingInformation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BillingInformation)
{
    ui->setupUi(this);
}

BillingInformation::~BillingInformation()
{
    delete ui;
}
