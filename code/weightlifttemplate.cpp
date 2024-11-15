#include "weightlifttemplate.h"
#include "ui_weightlifttemplate.h"

WeightliftTemplate::WeightliftTemplate(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WeightliftTemplate)
{
    ui->setupUi(this);
}

WeightliftTemplate::~WeightliftTemplate()
{
    delete ui;
}
