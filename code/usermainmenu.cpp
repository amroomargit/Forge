#include "usermainmenu.h"
#include "ui_usermainmenu.h"

#include "userswindow.h"

UserMainMenu::UserMainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserMainMenu)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

UserMainMenu::~UserMainMenu()
{
    delete ui;
}

void UserMainMenu::on_logoutButton_clicked()
{
    UsersWindow *usersWindow = new UsersWindow;
    usersWindow->setFixedSize(this->size());
    this -> setCentralWidget(usersWindow);
}

