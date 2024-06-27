#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrBookRoom = new BookRoom();
    ptrBillingInformation = new BillingInformation();
    ptrCheckOut = new CheckOut();
    ptrCustomerList = new CustomerList();
}

MainWindow::~MainWindow()
{
    delete ptrBookRoom;
    delete ptrBillingInformation;
    delete ptrCheckOut;
    delete ptrCustomerList;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ptrBookRoom->show();
}


void MainWindow::on_pushButton_2_clicked()
{
    ptrBillingInformation->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    ptrCheckOut->show();
}


void MainWindow::on_pushButton_4_clicked()
{
    ptrCustomerList->show();
}

