#include "bookroom.h"
#include "ui_bookroom.h"

BookRoom::BookRoom(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BookRoom)
{
    ui->setupUi(this);
}

BookRoom::~BookRoom()
{
    delete ui;
}

void BookRoom::on_btnBook_clicked()
{
    QString firstName = ui->txtFirstName->text();
    QString lastName = ui->txtLastName->text();
    QString phoneNumber = ui->txtPhoneNumber->text();
    QString nidNumber = ui->txtNidNumber->text();
    QString address = ui->txtAddress->text();
    QString roomNumber = ui->txtRoomnumber->text();
    QString roomType = ui->txtRoomType->text();
    QString checkInDate = ui->DateCheckIn->text();
    QString checkOutDate = ui->DateCheckOut->text();
    QString amount = ui->txtAmount->text();

    qDebug() <<"First Name : "<< firstName <<"Last Name : "<< lastName << "Phone Number : "<< phoneNumber <<"Nid Number : "<< nidNumber <<"Address : "<< address<<"Room Number : "<< roomNumber<<"Room Type : "<<roomType<<"Check In Date : "<<checkInDate<<"Check Out Date : "<<checkOutDate<<"Amount : "<<amount;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/1UP/Desktop/Qt projects/database/MyHotelManagementSystem.db");


    if(QFile::exists("C:/Users/1UP/Desktop/Qt projects/database/MyHotelManagementSystem.db"))
        qDebug() <<"Database file Exists";
    else
    {
        qDebug() <<"Database File Doesn't exists";
        return;
    }

    if(!database.open())
    {
        qDebug() <<"Error!Unable to open Database";
        return;
    }
    else
    {
        qDebug() <<"Database opened successfully";
    }

   // QSqlQuery query;
    //query = QSqlQuery(database);
   // query.prepare("Insert into package (FirstName, LastName, PhoneNumber, NidNumber, Address, RoomNumber, RoomType, CheckInDate, CheckOutDate, Amount)")

}

