#include "returninguser.h"
#include "ui_returninguser.h"

#include "usermainmenu.h"
#include "userswindow.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

ReturningUser::ReturningUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ReturningUser)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

ReturningUser::~ReturningUser()
{
    delete ui;
}

void ReturningUser::setUser(const QString &username){
    currentUser = username;

    ui->titleLabel->setText("Hello, " + username);

    //return user password from database for password protected login
    QSqlQuery query;
    query.prepare("SELECT password FROM users WHERE name = :name");
    query.bindValue(":name",username);

    if(query.exec() && query.next()){
        pass = query.value(0).toString();
    }
    else{
        QMessageBox::critical(this, "Error", "Couldn't find user in database");
    }
}

void ReturningUser::on_enterButton_clicked(){
    QString passFromUser = ui->passBox->text(); //password user enters in line edit

        if(passFromUser == pass){
            UserMainMenu *nextWindow = new UserMainMenu;
            nextWindow ->setFixedSize(this->size());
            this->setCentralWidget(nextWindow);
        }
        else{
            QMessageBox::warning(this, "Error", "Wrong Password");
        }
    }


    /* delete user from database (since buttons are dynamically created each time the userswindow ui is opened,
         * the program will just not create that button when we go back to the window, no need to manually change anything
        */
void ReturningUser::on_deleteButton_clicked(QString &username){

    QString passFromUser = ui->deleteBox->text();

    //check if password matches for deletion
    if(passFromUser == pass){

        //delete user
        QSqlQuery query;
        query.prepare("DELETE FROM users WHERE name = :name");
        query.bindValue(":name", username);

        if(query.exec()){
            QMessageBox::information(this, "Success", "User deleted successfully.");
        }
        else{
            QMessageBox::critical(this,"Error", "User deletion failure: " + query.lastError().text());
            qDebug() << "Database error:" << query.lastError().text();
        }

        //go back immediately after deletion
        UsersWindow *usersWindow = new UsersWindow;
        usersWindow->setFixedSize(this->size());
        this->setCentralWidget(usersWindow);

    }
    else{
        QMessageBox::warning(this,"Error","Wrong Password");
    }

}


void ReturningUser::on_backButton_clicked()
{
    UsersWindow *usersWindow = new UsersWindow;
    usersWindow->setFixedSize(this->size());
    this->setCentralWidget(usersWindow);
}

