#include "returninguser.h"
#include "ui_returninguser.h"

OldUser::OldUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OldUser)
{
    ui->setupUi(this);
}

OldUser::~OldUser()
{
    delete ui;
}
