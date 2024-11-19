#include "cardiotemplate.h"
#include "ui_cardiotemplate.h"

CardioTemplate::CardioTemplate(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CardioTemplate)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

CardioTemplate::~CardioTemplate()
{
    delete ui;
}
