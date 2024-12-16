#include "usermainmenu.h"
#include "ui_usermainmenu.h"

#include "userswindow.h"
#include "weightlifttemplate.h"
#include "cardiotemplate.h"

#include <QPushButton>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

UserMainMenu::UserMainMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserMainMenu)
{
    ui->setupUi(this);

    titlePageLabel = ui->titleLabel;  // Get Qlabel  ui
    titlePageLabel->setText("Welcome!"); //set default text for label

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}


UserMainMenu::~UserMainMenu()
{
    delete ui;
}


//dynamically set username that was passed over at top of page
void UserMainMenu::setUsername(const QString &thisUsername) {
    username = thisUsername;

    if (titlePageLabel) {
        titlePageLabel->setText("Welcome, " + username+".");
    }
}

void UserMainMenu::on_logoutButton_clicked()
{
    UsersWindow *usersWindow = new UsersWindow;
    usersWindow->setFixedSize(this->size());
    this -> setCentralWidget(usersWindow);
}

void UserMainMenu::displayCurrentMeasurementValues(){
    QString height;
    QString heightUnit;
    QString weight;
    QString weightUnit;
    QString calories;

    QSqlQuery query;


    query.prepare("SELECT height, weight, caloric_intake, height_unit, weight_unit FROM users WHERE name = :name");
    query.bindValue(":name",username);

    if(query.exec()){
        if(query.next()){
            height = query.value("height").toString();
            heightUnit = query.value("height_unit").toString();
            weight = query.value("weight").toString();
            weightUnit = query.value("weight_unit").toString();
            calories = query.value("caloric_intake").toString();
        }
        else{
            QMessageBox::critical(this,"Error","Query failure to display current measurments");
            return;
        }
    }

    ui->displayHeight->setText(height+" "+heightUnit);
    ui->displayWeight->setText(weight+" "+weightUnit);
    ui->displayCalories->setText(calories);

    return;
}


//to retrieve userID for foreign key
int UserMainMenu::retrieveUserID(const QString& passedUserName){
    int returnID = -1; //No ID found yet, default val

    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE name = :passedUserName"); //retrieve the id from the users table based on the name passed by the argument parameter
    query.bindValue(":passedUserName", passedUserName); //bind name and parameter so they're connected

    //if execution fails
    if(!query.exec()){
        QMessageBox::critical(this,"Error","No id associated with current user");
    }
    else{
        //check rows returned
        if(query.next()){
            returnID = query.value(0).toInt(); //takes first column from result (which is the id)
        }
    }
    return returnID;
}


//dynamically populate homescreen by reading through templates table to find how many templates a user has associated with their userID (primary/foreign key)
void UserMainMenu::templateHomeScreenDisplay(){
    displayCurrentMeasurementValues(); //method call to display current measurement methods

    int userIDRetrieved = retrieveUserID(username);

    QSqlQuery query;
    query.prepare("SELECT template_name FROM templates WHERE user_id = :userId");
    query.bindValue(":userId", userIDRetrieved);

    //button positioning
    int x = 10;
    int y = 5;

    //keep track of total button count
    int totalButtons = 0;

    //scroll area present
    QWidget *scrollAreaWidgetContents = ui->scrollArea->widget();

    //query loop to populate scrollable area with template buttons
    if(query.exec()){
        while(query.next()){
            //taking template id and name from database table
            QString templateName = query.value("template_name").toString();

            //button creation and size
            QPushButton *newTemplateButton = new QPushButton(templateName,scrollAreaWidgetContents);
            newTemplateButton->setFixedSize(131,121);

            newTemplateButton->move(x,y); //move button to x,y coords

            x = x + 200; //increment x

            //button stylesheet
            newTemplateButton->setStyleSheet("QPushButton {"
                                      "background-color: rgba(255, 0, 0, 200);"
                                      "color: white;"
                                      "border-radius: 15px;"
                                      "padding: 10px 20px;"
                                      "}"
                                      "QPushButton:hover {"
                                      "background-color: #ff5c5c;;"
                                      "color: white;"
                                      "}"
                                      );


            //update button count
            totalButtons++;

            //increase scrollable width for every 4 buttons
            increaseQWidget(200);
        }
    }
}


//dynamic increase QWidget width method
void UserMainMenu::increaseQWidget(int widthIncrease){

    //create QWidget object linked to the ui scroll area widget we are dealing with
    QWidget *scrollWidget = ui->scrollAreaWidgetContentsMM;

    //current size of widget
    QSize oldSize = scrollWidget->size();

    //heigh increase
    int newWidth = oldSize.width()+widthIncrease;

    //widget resize
    scrollWidget->resize(newWidth,oldSize.height());
}


//go to weightlifttemplate screen
void UserMainMenu::on_newWLTButton_clicked()
{
    WeightliftTemplate *goToTemplate = new WeightliftTemplate(this);
    goToTemplate->setFixedSize(this->size());
    goToTemplate->setUserID(retrieveUserID(username)); //pass userID over to weightlifttemplate
    goToTemplate->setUserName(username); //pass userID over to weightlifttemplate
    goToTemplate->newTemplate("Default Name."); // Call after setting userID
    this -> setCentralWidget(goToTemplate);
    qDebug() << "Central widget set to WeightliftTemplate";
}


//go to cardiotemplate screen
void UserMainMenu::on_newCLTButton_clicked()
{ /*
    CardioTemplate *goToTemplate = new CardioTemplate(this);
    goToTemplate->setFixedSize(this->size());
    goToTemplate->setUserID(retrieveUserID(username)); //pass userID over to cardiotemplate which inherited from weightlifttemplate
    goToTemplate->setUserName(username); //pass userID over to cardiotemplate
    goToTemplate->newTemplate("Default Name."); // Call after setting userID
    this -> setCentralWidget(goToTemplate); */
}

//update the current measurement height
void UserMainMenu::on_heightUpdateButton_clicked(){
    QString newHeight = ui->heightBox->text();
    QString heightUnitSelection = ui->heightUnit->currentText();

    QSqlQuery query;

    query.prepare("UPDATE users SET height = :newHeight, height_unit = :heightUnitSelection WHERE name = :name");
    query.bindValue(":newHeight", newHeight); // bind the new height value
    query.bindValue(":heightUnitSelection", heightUnitSelection); // bind the new height_unit value
    query.bindValue(":name", username); // bind the username to identify the user

    if (!query.exec()) {
        QMessageBox::critical(this,"Error","Could not set height");
    }

    //refresh values
    displayCurrentMeasurementValues();
}

//update the current measurement weight
void UserMainMenu::on_weightUpdateButton_clicked(){
    QString newWeight = ui->weightBox->text();
    QString weightUnitSelection = ui->weightUnit->currentText();

    QSqlQuery query;

    query.prepare("UPDATE users SET weight = :newWeight, weight_unit = :weightUnitSelection WHERE name = :name");
    query.bindValue(":newWeight", newWeight); // bind the new weight value
    query.bindValue(":weightUnitSelection", weightUnitSelection); // bind the new weight_unit value
    query.bindValue(":name", username); // bind the username to identify the user

    if (!query.exec()) {
        QMessageBox::critical(this,"Error","Could not set weight");
    }

    //refresh values
    displayCurrentMeasurementValues();
}

//update the current measurement calories
void UserMainMenu::on_calorieUpdateButton_clicked(){
    QString newCalories = ui->caloriesBox->text();
    QSqlQuery query;

    query.prepare("UPDATE users SET caloric_intake = :newCalories WHERE name = :name");
    query.bindValue(":newCalories", newCalories); // bind the new height value
    query.bindValue(":name", username); // bind the username to identify the user

    if (!query.exec()) {
        QMessageBox::critical(this,"Error","Could not set calories");
    }

    //refresh values
    displayCurrentMeasurementValues();
}

