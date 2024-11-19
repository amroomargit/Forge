#include "userswindow.h"
#include "ui_userswindow.h"

#include "mainwindow.h"
#include "newuser.h"

UsersWindow::UsersWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UsersWindow)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

UsersWindow::~UsersWindow()
{
    delete ui;
}

void UsersWindow::on_addUserButton_clicked()
{
    NewUser *newUser = new NewUser;
    this -> setCentralWidget(newUser);
}


void UsersWindow::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    this->setCentralWidget(mainWindow);
}

