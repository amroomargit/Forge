#include "newuser.h"
#include "ui_newuser.h"

NewUser::NewUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NewUser)
{
    ui->setupUi(this);
}

NewUser::~NewUser()
{
    delete ui;
}
