#include "olduser.h"
#include "ui_olduser.h"

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
