#include "userswindow.h"
#include "ui_userswindow.h"

#include "mainwindow.h"
#include "newuser.h"

#include <QPushButton>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

#include <QGridLayout>

UsersWindow::UsersWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UsersWindow)
{
    ui->setupUi(this);

    //user button is fixed
    QPushButton *addUserButton = ui->addUserButton;
    addUserButton->setText("+");

    //query database for all users
    QSqlQuery query("SELECT name FROM users");

    //scroll area present
    QWidget *scrollAreaWidgetContents = ui->scrollArea->widget();

    //position variables
    //x and y position for buttons
    int xPos = 310;
    int yPos = 210;

    //keep track of buttons in row
    int maxButtonsPerRow = 5;
    int buttonCounter = 0;

    //loop through query to create buttons
    while(query.next()){
        QString username = query.value(0).toString();

        //new button
        QPushButton *userButton = new QPushButton(username, scrollAreaWidgetContents);
        userButton->setFixedSize(131,121);

        //new button's position
        userButton->move(xPos, yPos);

        //button stylesheet
        userButton->setStyleSheet("QPushButton {"
                                  "background-color: #333333;"
                                  "color: white;"
                                  "border-radius: 15px;"
                                  "padding: 10px 20px;"
                                  "}"
                                  "QPushButton:hover {"
                                  "background-color: #bababa;"
                                  "color: black;"
                                  "}"
                                  );

        //button counter increment
        buttonCounter++;

        //new row if # of buttons has exceeded 5
        if(buttonCounter >= maxButtonsPerRow){
            buttonCounter = 0;
            xPos = 100;
            yPos = yPos + 180;
        }
        else{
            xPos = xPos + 210;
        }

    }

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

UsersWindow::~UsersWindow()
{
    delete ui;
}

void UsersWindow::populateUsers(){/*
    // Accessing users table
    QSqlQuery query("SELECT name FROM users");


    // Clear existing buttons (if any)
    for(auto button : ui->userLayout->findChildren<QPushButton>){

    } */
}

void UsersWindow::on_addUserButton_clicked()
{
    NewUser *newUser = new NewUser;
    newUser->setFixedSize(this->size());
    this -> setCentralWidget(newUser);
}


void UsersWindow::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->setFixedSize(this->size());
    this->setCentralWidget(mainWindow);
}

