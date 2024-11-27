#include "addnewworkoutdialog.h"
#include "ui_addnewworkoutdialog.h"

AddNewWorkoutDialog::AddNewWorkoutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddNewWorkoutDialog)
{
    ui->setupUi(this);

}

AddNewWorkoutDialog::~AddNewWorkoutDialog()
{
    delete ui;
}

//x button
void AddNewWorkoutDialog::on_xButton_clicked()
{
    this->close();
}

