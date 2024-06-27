#include "customerlist.h"
#include "ui_customerlist.h"

CustomerList::CustomerList(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CustomerList)
{
    ui->setupUi(this);
}

CustomerList::~CustomerList()
{
    delete ui;
}
