#include "usermainmenu.h"
#include "ui_usermainmenu.h"

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
