#include "weightlifttemplate.h"
#include "ui_weightlifttemplate.h"

WeightliftTemplate::WeightliftTemplate(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WeightliftTemplate)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

WeightliftTemplate::~WeightliftTemplate()
{
    delete ui;
}

void WeightliftTemplate::on_backButton_clicked()
{
    //go back to caller
}

