#include "newuser.h"
#include "ui_newuser.h"

#include "userswindow.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>


NewUser::NewUser(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NewUser)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

NewUser::~NewUser()
{
    delete ui;
}

void NewUser::on_backButton_clicked()
{
    UsersWindow *usersWindow = new UsersWindow;
    usersWindow->setFixedSize(this->size());
    this -> setCentralWidget(usersWindow);
    //this->centralWidget()->update();
}


void NewUser::on_enterButton_clicked()
{
    //initialization
    QString name = ui->nameBox->text();
    QString password = ui->passBox->text();
    QString hint = ui->hintBox->text();
    float height = ui->heightBox->text().toFloat();
    float weight = ui->weightBox->text().toFloat();
    int caloricIntake = ui->caloricBox->text().toInt();
    QString heightUnitSelection = ui->heightUnit->currentText();
    QString weightUnitSelection = ui->weightUnit->currentText();

    // make sure no null values
    if(name.isEmpty() || password.isEmpty() || hint.isEmpty() || height <= 0 || weight <= 0 || caloricIntake <= 0){
        QMessageBox::warning(this, "Invalid Input", "Can only proceed if all fields are filled with appropriate data type.");
        return;
    }

    //insert into database
    QSqlQuery query;
    query.prepare("INSERT INTO users (name, password, hint, height, weight, caloric_intake, height_unit, weight_unit) "
                  "VALUES (:name, :password, :hint, :height, :weight, :caloric_intake, :height_unit, :weight_unit)");
    query.bindValue(":name", name);
    query.bindValue(":password", password);
    query.bindValue(":hint", hint);
    query.bindValue(":height", height);
    query.bindValue(":weight", weight);
    query.bindValue(":caloric_intake", caloricIntake);
    query.bindValue(":height_unit", heightUnitSelection);
    query.bindValue(":weight_unit", weightUnitSelection);

    if(!query.exec()){
        QMessageBox::critical(this, "Error", "Failed to save user: " + query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Success", "User saved successfully!\nYou can go back now.");
}

