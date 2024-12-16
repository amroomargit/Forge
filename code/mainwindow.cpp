#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "userswindow.h"
#include "calculator.h"
#include "terminology.h"
#include "links.h"
#include "tips.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userButton_clicked(){
    UsersWindow *usersWindow = new UsersWindow;
    usersWindow->setFixedSize(this->size());
    this->setCentralWidget(usersWindow);
}


void MainWindow::on_termButton_clicked()
{
    Terminology *termWindow = new Terminology;
    termWindow->setFixedSize(this->size());
    this->setCentralWidget(termWindow);
}


void MainWindow::on_goalsButton_clicked()
{

}


void MainWindow::on_tipsButton_clicked()
{
    Tips *tipPage = new Tips;
    tipPage->setFixedSize(this->size());
    this->setCentralWidget(tipPage);
}


void MainWindow::on_linksButton_clicked()
{
    Links *linkPage = new Links;
    linkPage->setFixedSize(this->size());
    this->setCentralWidget(linkPage);
}


void MainWindow::on_tutorButton_clicked()
{

}


void MainWindow::on_calcButton_clicked(){
    Calculator *calculator = new Calculator;
    calculator->setFixedSize(this->size());
    this->setCentralWidget(calculator);
}

