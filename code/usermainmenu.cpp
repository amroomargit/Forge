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

    titlePageLabel = ui->titleLabel;  // Get qlabel  ui
    titlePageLabel->setText("Welcome!"); //default

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
    int userIDRetrieved = retrieveUserID(username);
    qDebug() << "Retrieved userID:" << userIDRetrieved;

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


            //update button count
            totalButtons++;

            //increase scrollable width for every 4 buttons
            increaseQWidget(150);
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
    goToTemplate->newTemplate("Default Template Name."); // Call after setting userID
    this -> setCentralWidget(goToTemplate);
    qDebug() << "Central widget set to WeightliftTemplate";
}

//go to cardiotemplate screen
void UserMainMenu::on_newCLTButton_clicked()
{
    CardioTemplate *goToTemplate = new CardioTemplate;
    goToTemplate->setFixedSize(this->size());
    this -> setCentralWidget(goToTemplate);
}

