#include "cardiotemplate.h"
#include "ui_cardiotemplate.h"

CardioTemplate::CardioTemplate(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CardioTemplate)
{
    ui->setupUi(this);
}

CardioTemplate::~CardioTemplate()
{
    delete ui;
}
