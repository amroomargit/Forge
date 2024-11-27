#include "wltdialog.h"
#include "ui_wltdialog.h"
#include "addnewworkoutdialog.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QListWidget>


WLTDialog::WLTDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WLTDialog)
{
    ui->setupUi(this);

    // Connect the itemClicked signal to the corresponding slot
    connect(ui->listWidget, &QListWidget::itemClicked, this, &WLTDialog::on_listWidget_itemClicked);

    //handle lineEdit searches, TRIGGERS ANYTIME ANY TYPING HAPPENS IN THE LINEEDIT
    connect(ui->searchBar, &QLineEdit::textChanged, this, &WLTDialog::searchThroughList);

    this->setWindowFlags(Qt::FramelessWindowHint);
}

WLTDialog::~WLTDialog()
{
    delete ui;
}

void WLTDialog::setTemplateType(const QString& templateType){
    thisTemplateType = templateType;
    qDebug() << "Template Type Passed to WLTDialog: " << thisTemplateType;
}

void WLTDialog::setTemplateID(int currentTemplateId){
    thisTemplateID = currentTemplateId;
    qDebug() << "Template ID Passed to WLTDialog: " << thisTemplateID;
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

//when an item in the list is clicked...
void WLTDialog::on_listWidget_itemClicked(QListWidgetItem *thisItem){
    int exerciseID = thisItem->data(Qt::UserRole).toInt(); //accessing the ID we saved before
    QString exerciseName = thisItem->text(); //name of exercise is same as name of the item

    //query so we can add clicked items from the list into the table template_exercises
    QSqlQuery query;
    query.prepare("INSERT INTO template_exercises (exercise_id, exercise_name, template_id) VALUES (:exerciseID, :exerciseName, :templateID)");
    query.bindValue(":exerciseID", exerciseID);
    query.bindValue(":exerciseName", exerciseName);
    query.bindValue(":templateID", thisTemplateID);

    // If execution fails
    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "unable to add exercise to template");
        return;
    }
    QMessageBox::information(this, "Success", "Exercise added to template!");

}

//remove the list on the dialog
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

