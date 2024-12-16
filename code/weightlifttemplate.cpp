#include "weightlifttemplate.h"
#include "ui_weightlifttemplate.h"

#include "usermainmenu.h"
#include "wltdialog.h"
#include "workoutwidget.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QScrollArea>
#include <QWidget>

WeightliftTemplate::WeightliftTemplate(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WeightliftTemplate)
{
    ui->setupUi(this);

    //singleWidgetPopulation();

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

WeightliftTemplate::~WeightliftTemplate()
{
    delete ui;
}


// getter and setter for currentUserID
void WeightliftTemplate::setUserID(int passedOverUserID) {
    currentUserID = passedOverUserID;
}
int WeightliftTemplate::getUserID(){
    return currentUserID;
}


// Getter and Setter for currentTemplateId
void WeightliftTemplate::setCurrentTemplateId(int newCurrentTemplateID){
    currentTemplateId = newCurrentTemplateID;
}
int WeightliftTemplate::getCurrentTemplateId(){
    return currentTemplateId;
}


/*WE NEED THIS METHOD SO WE CAN SAVE THE USERNAME UNTIL IT'S TIME TO SEND IT BACK TO USERMAINMENU WHEN THE BACK BUTTON IS CLICKED,
 * SINCE IT ONLY TAKES USERNAME AND CALCULATES USERID MANUALLY,
IT CANNOT TAKE USERID DIRECTLY */
void WeightliftTemplate::setUserName(const QString &userNamePassedThrough){
    //handle error
    if(userNamePassedThrough.isNull()){
        QMessageBox::critical(this,"Error","No username passed through");
        return;
    }

    username = userNamePassedThrough;
}


//getter for username
QString WeightliftTemplate::getUserName(){
    return username;
}

void WeightliftTemplate::on_backButton_clicked()
{
        UserMainMenu *backToPrevScreen = new UserMainMenu;

        backToPrevScreen->setFixedSize(this->size());

        backToPrevScreen->setUsername(username); //have to pass username back through because previous window was technically closed when this one opened

        backToPrevScreen->templateHomeScreenDisplay(); // Dynamically display templates

        this->setCentralWidget(backToPrevScreen);
}


//Add new row to templates table
    void WeightliftTemplate::newTemplate(const QString& givenTemplateName){
    QString thisTemplateName = givenTemplateName;
    QString templateType = "Weightlifting";

    QSqlQuery query;
    query.prepare("INSERT INTO templates (user_id,template_name,template_type) VALUES (:currentUserID,:templateName,:templateType)");
    query.bindValue(":currentUserID", currentUserID);
    query.bindValue(":templateName", thisTemplateName);
    query.bindValue(":templateType", templateType);

    if(!query.exec()){
        QMessageBox::critical(this,"Error","Unable to add to database templates table.");
    }
    else{
        currentTemplateId = query.lastInsertId().toInt(); // Save the template ID
        qDebug()<<"Successful creation";
    }
}

//when set name is clicked for template name
void WeightliftTemplate::on_saveNewName_clicked(){

    //take text from QLineEdit
    QString templateName = ui->templateNameBox->text();

    //if text box is empty but they try to save, send warning and return
    if(templateName.isEmpty()){
        QMessageBox::warning(this,"Error","Must enter name");
        return;
    }

    if(currentTemplateId == -1){
        QMessageBox::warning(this, "Error", "No template to edit");
        return;
    }

    //change name in database
    QSqlQuery query;
    query.prepare("UPDATE templates SET template_name = :templateName WHERE template_id = :templateId");
    query.bindValue(":templateName",templateName);
    query.bindValue(":templateId",currentTemplateId);

    //if execution fails
    if(!query.exec()){
        QMessageBox::critical(this,"Error","Unable to change name");
    }

    //change QLabel at the top of the screen
    ui->titleLabel->setText(templateName);

}

//when new exercise button is clicked
void WeightliftTemplate::on_addNewExerciseButton_clicked(){
    WLTDialog *newDialog = new WLTDialog(this); //passing 'this' for proper memory management
    newDialog->setTemplateType("all_weightlifting_exercises"); //set template type
    newDialog->setTemplateID(currentTemplateId); //set templateID
    newDialog->objectPassed(this);
    newDialog->populateTypeSpecificExercises(); //populate the dialog before it appears
    newDialog->exec();
    qDebug()<<"close dialog";
}


//increase QWidget height method
void WeightliftTemplate::increaseQWidget(int heightIncrease){

    //create QWidget object linked to the ui scroll area widget we are dealing with
    QWidget *scrollWidget = ui->scrollAreaWidgetContents;

    //current size of widget
    QSize oldSize = scrollWidget->size();

    //heigh increase
    int newHeight = oldSize.height()+heightIncrease;

    //widget resize
    scrollWidget->resize(oldSize.width(), newHeight);
}

//setter for y coord of where widget will go
void WeightliftTemplate::setYCoord(int y){
    thisY = y;
}

//NEW single widget population
void WeightliftTemplate::dynamicWidgetPopulation(){

    //x and y coords of widget to be placed
    int pretendX = 20;
    int pretendY = 20;

    //scroll area
    QWidget *contentHolderInScrollWidget = ui->scrollArea->widget();

    QSqlQuery query;

    /*will pull the row matching this_exercise_unique_id since it autoincrements it's unique */
    query.prepare("SELECT * FROM template_exercises WHERE template_id = :currentTemplateId");
    query.bindValue(":currentTemplateId", currentTemplateId);

    if(!query.exec()){
        QMessageBox::critical(this,"Error","Unable to populate widgets");
        return;
    }

    while(query.next()){
        //pull values
        QString exerciseName = query.value("exercise_name").toString();
        int sets = query.value("sets").toInt();
        int reps = query.value("reps").toInt();
        double weight = query.value("weight").toDouble();
        QString weightUnit = query.value("weight_unit").toString(); //FOR LATER


        WorkoutWidget *newWidget = new WorkoutWidget(contentHolderInScrollWidget);
        newWidget->setFixedSize(571,231);

        //set username as object name
        newWidget->setTitle(exerciseName);
        newWidget->setSets(QString::fromStdString(std::to_string(sets)));
        newWidget->setReps(QString::fromStdString(std::to_string(reps)));
        newWidget->setWeight(QString::fromStdString(std::to_string(weight)));


        //new button's position
        newWidget->move(pretendX, pretendY);

        pretendY = pretendY + 280;

        //increase size of scrollable area
        increaseQWidget(300);
    }
}
