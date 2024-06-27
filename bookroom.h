#ifndef BOOKROOM_H
#define BOOKROOM_H
#include "databaseheader.h"

#include <QDialog>

namespace Ui {
class BookRoom;
}

class BookRoom : public QDialog
{
    Q_OBJECT

public:
    explicit BookRoom(QWidget *parent = nullptr);
    ~BookRoom();

private slots:
    void on_btnBook_clicked();

private:
    Ui::BookRoom *ui;
};

#endif // BOOKROOM_H
