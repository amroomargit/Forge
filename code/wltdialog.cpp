#include "wltdialog.h"
#include "ui_wltdialog.h"
#include "addnewworkoutdialog.h"
#include "weightlifttemplate.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QListWidget>


WLTDialog::WLTDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WLTDialog)
{
    ui->setupUi(this);

    // Connect search bar to filter slot
    connect(ui->searchBar, &QLineEdit::textChanged, this, &WLTDialog::searchThroughList);

    this->setWindowFlags(Qt::FramelessWindowHint);
}

WLTDialog::~WLTDialog()
{
    delete ui;
}

//set template type
void WLTDialog::setTemplateType(const QString& templateType){
    thisTemplateType = templateType;
    qDebug() << "Template Type Passed to WLTDialog: " << thisTemplateType;
}

//set template ID
void WLTDialog::setTemplateID(int currentTemplateId){
    thisTemplateID = currentTemplateId;
    qDebug() << "Template ID Passed to WLTDialog: " << thisTemplateID;
}

//recieve object from weightlifttemplate so we can call on it later
void WLTDialog::objectPassed(WeightliftTemplate* classObjectPassed){
    weightLiftTemplateObject = classObjectPassed;
}

void WLTDialog::populateTypeSpecificExercises(){
    //dynamic string construction based on which type of template, weights or cardio
    QString queryString = QString("SELECT id, exercise_name FROM %1").arg(thisTemplateType);
    QSqlQuery query;
    query.prepare(queryString);

    //if the query executes...
    if(query.exec()){
        while(query.next()){
            int exerciseID = query.value(0).toInt();
            QString exerciseName = query.value(1).toString();

            //adding item to list
            QListWidgetItem *newItem = new QListWidgetItem(exerciseName, ui->listWidget);
            newItem->setData(Qt::UserRole,exerciseID); //ID stored in each list item so when we click them, we can access ID
        }
    }
    else{
        QMessageBox::critical(this,"Error","Unable to get exercises from table");
    }
}

//To make the QList searchable
void WLTDialog::searchThroughList(const QString &exerciseSearchedFor){
    int i = 0;
    int listSizeCount = ui->listWidget->count();
    bool searchMatchOrNo;

    for(; i < listSizeCount; ++i){
        QListWidgetItem *thisItem = ui->listWidget->item(i); //looping through every item to see if the search matched it
        searchMatchOrNo = thisItem->text().contains(exerciseSearchedFor, Qt::CaseInsensitive); //check for a match
        thisItem->setHidden(!searchMatchOrNo); //anything that does not match the search will be hidden
    }
}

/*refresh the weightlifttemplate page so the widgets can dynamically populate the page
we just create a new template and re-feed all the old information (i.e. username, IDs, etc.)
but it is not added to the database, so technically we are just refreshing the same page */
void WLTDialog::weightliftTemplatePageRefresh(int exerciseID){
    WeightliftTemplate *refreshedScreen = new WeightliftTemplate(this);
    refreshedScreen->setFixedSize(this->size());
    refreshedScreen->setUserID(weightLiftTemplateObject->getUserID());
    refreshedScreen->setUserName(weightLiftTemplateObject->getUserName());
    //the method to add the template to the database is not called
    refreshedScreen->setExerciseId(exerciseID);
    singleWidgetPopulation(int exerciseUniqueID)
    weightLiftTemplateObject->setCentralWidget(refreshedScreen);
}

//when an item in the list is clicked...
int WLTDialog::on_listWidget_itemClicked(QListWidgetItem *thisItem){
    int exerciseID = thisItem->data(Qt::UserRole).toInt(); //accessing the ID we saved before
    QString exerciseName = thisItem->text(); //name of exercise is same as name of the item
    int returnValue = 0;

    //query so we can add clicked items from the list into the table template_exercises
    QSqlQuery query;
    query.prepare("INSERT INTO template_exercises (all_table_exercise_id, exercise_name, template_id, sets, reps, weight, weight_unit) VALUES (:exerciseID, :exerciseName, :templateID, :setsValue, :repsValue, :weightValue, :weightUnitValue)");
    query.bindValue(":exerciseID", exerciseID);
    query.bindValue(":exerciseName", exerciseName);
    query.bindValue(":templateID", thisTemplateID);

    //Set default values for other units
    query.bindValue(":setsValue", 0);
    query.bindValue(":repsValue", 0);
    query.bindValue(":weightValue", 0);
    query.bindValue(":weightUnitValue", "lbs");


    // If execution fails
    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Unsuccessful. Unable to add exercise to template");
    }
    else{
        QMessageBox::information(this, "Success", "Exercise added to template!");

        //weightLiftTemplateObject->setYCoord(y);

        //argument we passes is the ID of the last row inserted into the database, which will be the this_exercise_unique_id
        //weightLiftTemplateObject->singleWidgetPopulation(query.lastInsertId().toInt()); //repopulate scroll area in weightlifttemplate

        //y = y + 240;
    }

    returnValue = query.lastInsertId().toInt(); //set return value to the exercise ID

    return(returnValue);
}

//remove the list on the WLTdialog
void WLTDialog::clearList(){
    ui->listWidget->clear();
}

void WLTDialog::on_xButton_clicked()
{
    this->close();
}

//add a new workout dialog open button
void WLTDialog::on_addNewWorkoutButton_clicked()
{
    AddNewWorkoutDialog *newDialog = new AddNewWorkoutDialog(this); //passing 'this' for proper memory management
    newDialog->setTemplateType(thisTemplateType);
    newDialog->sendDialogObject(this); //send over the current object so we can reload when a new exercise is added
    newDialog->exec();
    qDebug()<<"close dialog";
}

