#include "newuser.h"
#include "ui_newuser.h"

#include "userswindow.h"

NewUser::NewUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NewUser)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

NewUser::~NewUser()
{
    delete ui;
}

void NewUser::on_backButton_clicked()
{
    UsersWindow *usersWindow = new UsersWindow(this);
    usersWindow->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    this -> setCentralWidget(usersWindow);
}

