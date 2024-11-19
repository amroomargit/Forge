#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "userswindow.h"
#include "calculator.h"

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
    this->setCentralWidget(usersWindow);
}


void MainWindow::on_termButton_clicked()
{

}


void MainWindow::on_goalsButton_clicked()
{

}


void MainWindow::on_tipsButton_clicked()
{

}


void MainWindow::on_linksButton_clicked()
{

}


void MainWindow::on_tutorButton_clicked()
{

}


void MainWindow::on_calcButton_clicked(){
    Calculator *calculator = new Calculator;
    this->setCentralWidget(calculator);
}

