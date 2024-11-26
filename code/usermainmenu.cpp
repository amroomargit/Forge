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

    templateHomeScreenDisplay(); //dynamically display templates

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

UserMainMenu::~UserMainMenu()
{
    delete ui;
}

//dynamically set user name at top of page
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

//create new template button on user main menu
void UserMainMenu::newTemplate(const QString& templateName, QSqlDatabase& db){

    //adding values to database templates table
    QSqlQuery query(db);
    query.prepare("INSERT INTO templates template_name VALUE :templateName");
    query.bindValue(":templateName", templateName);

    if(!query.exec()){
        qDebug() << "Error with template insertion... "<<query.lastError().text();
    }
    else{
        qDebug()<<"Successful creation";
    }
}

//add template button to homescreen
void UserMainMenu::templateHomeScreenDisplay(const QString& username, QSqlDatabase& db){
    QSqlQuery query(db);
    query.prepare("SELECT template_id, template_name FROM templates WHERE user_id = :userId");
    query.bindValue(":userId", userId);

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
            int templateId = query.value("template_id").toInt();
            QString templateName = query.value("template_name").toString();

            //button creation and size
            QPushButton *newTemplateButton = new QPushButton(templateName,scrollAreaWidgetContents);
            newTemplateButton->setFixedSize(131,121);

            newTemplateButton->move(x,y); //move button to x,y coords

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

            connect(newTemplateButton, &QPushButton::clicked, [templateId]() {
                qDebug() << "Template was clicked. Id:" << templateId;
            });

            //update button count
            totalButtons++;

            //increase scrollable width for every 4 buttons
            if((totalButtons%4) == 0){
                increaseQWidget(370);
            }

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


void UserMainMenu::on_newWLTButton_clicked()
{
    newTemplate();

    WeightliftTemplate *goToTemplate = new WeightliftTemplate;
    goToTemplate->setFixedSize(this->size());
    this -> setCentralWidget(goToTemplate);
}


void UserMainMenu::on_newCLTButton_clicked()
{
    CardioTemplate *goToTemplate = new CardioTemplate;
    goToTemplate->setFixedSize(this->size());
    this -> setCentralWidget(goToTemplate);
}

