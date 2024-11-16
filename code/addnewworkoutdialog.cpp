#include "addnewworkoutdialog.h"
#include "ui_addnewworkoutdialog.h"

AddNewWorkoutDialog::AddNewWorkoutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddNewWorkoutDialog)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
}

AddNewWorkoutDialog::~AddNewWorkoutDialog()
{
    delete ui;
}

void AddNewWorkoutDialog::on_xButton_clicked()
{
    this -> close();
}

