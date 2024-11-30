#include "userswindow.h"
#include "ui_userswindow.h"

#include "mainwindow.h"
#include "newuser.h"
#include "returninguser.h"

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

    dynamicWidgetPopulation();

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);

}

UsersWindow::~UsersWindow()
{
    delete ui;
}

//dynamic widget population of pre-existing users
void UsersWindow::dynamicWidgetPopulation(){

    //the button to add new users must always be present
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
    int buttonCounter = 1;
    int totalRows = 1;

    //keep track of when to extend QWidget
    rowLoopCounter = 0;

    //loop through query to create buttons
    while(query.next()){
        QString username = query.value(0).toString();

        //new button
        QPushButton *userButton = new QPushButton(username, scrollAreaWidgetContents);
        userButton->setFixedSize(131,121);

        //set username as object name
        userButton->setProperty("username",username);

        connect(userButton, &QPushButton::clicked, this, [this, username](){
            onUserButtonClicked(username);
        });

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
            totalRows = totalRows+1;
        }
        else{
            xPos = xPos + 210;
        }

        //increase the height of the qwidget inside the scrollable area for every two rows added
        if((totalRows%2) == 0){
            increaseQWidget(50);
        }

    }
}

//increase QWidget height method
void UsersWindow::increaseQWidget(int heightIncrease){

    //create QWidget object linked to the ui scroll area widget we are dealing with
    QWidget *scrollWidget = ui->scrollAreaWidgetContents;

    //current size of widget
    QSize oldSize = scrollWidget->size();

    //heigh increase
    int newHeight = oldSize.height()+heightIncrease;

    //widget resize
    scrollWidget->resize(oldSize.width(), newHeight);
}

void UsersWindow::onUserButtonClicked(const QString &username){
    ReturningUser *returningUser = new ReturningUser;
    returningUser->setUser(username);
    returningUser->setFixedSize(this->size());
    this->setCentralWidget(returningUser);
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


