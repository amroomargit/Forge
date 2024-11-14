#include "userswindow.h"
#include "ui_userswindow.h"

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
