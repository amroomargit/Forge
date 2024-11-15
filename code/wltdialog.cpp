#include "wltdialog.h"
#include "ui_wltdialog.h"

WLTDialog::WLTDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WLTDialog)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
}

WLTDialog::~WLTDialog()
{
    delete ui;
}




void WLTDialog::on_xButton_clicked()
{
    this->close();
}

