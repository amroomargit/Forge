#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "UsersWindow.h"

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

//if users button is clicked on home page
void MainWindow::on_userButton_clicked()
{
    this->close();

    UsersWindow* usersWindow = new UsersWindow(this);
    usersWindow->show();
}

//if terminology button is clicked on home page
void MainWindow::on_termButton_clicked()
{

}

//if workout goals button is clicked on home page
void MainWindow::on_goalsButton_clicked()
{

}

//if tips button is clicked on home page
void MainWindow::on_tipsButton_clicked()
{

}

//if links button is clicked on home page
void MainWindow::on_linksButton_clicked()
{

}

//if tutorial button is clicked on home page
void MainWindow::on_tutorButton_clicked()
{

}

//if calculator button is clicked on home page
void MainWindow::on_calcButton_clicked()
{

}

