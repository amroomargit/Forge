#include "returninguser.h"
#include "ui_returninguser.h"

OldUser::OldUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OldUser)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

OldUser::~OldUser()
{
    delete ui;
}
