#include "addnewworkoutdialog.h"
#include "ui_addnewworkoutdialog.h"
#include "wltdialog.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QListWidget>

AddNewWorkoutDialog::AddNewWorkoutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddNewWorkoutDialog)
{
    ui->setupUi(this);

}

AddNewWorkoutDialog::~AddNewWorkoutDialog()
{
    delete ui;
}

void AddNewWorkoutDialog::sendDialogObject(WLTDialog* dialogObjectPassed){
    currentlyOpenDialog = dialogObjectPassed;
}

void AddNewWorkoutDialog::setTemplateType(const QString& templateType){
    thisTemplateType = templateType;
}

//x button
void AddNewWorkoutDialog::on_xButton_clicked()
{
    this->close();
}

//enter button
void AddNewWorkoutDialog::on_addNewWorkoutButton_clicked()
{
    QString newWorkoutName = ui->lineEdit->text(); //retrieve name from lineEdit


    //dynamic string construction based on which type of template, weights or cardio
    QString queryString = QString("INSERT INTO %1 (exercise_name) VALUES (:newWorkoutName)").arg(thisTemplateType);

    QSqlQuery query;
    query.prepare(queryString);
    query.bindValue(":newWorkoutName",newWorkoutName);

    if(query.exec()){
        QMessageBox::information(this,"Success","Workout was successfully entered into the "+thisTemplateType+" table!");
    }
    else{
        QMessageBox::critical(this,"Error","Unable to add to "+thisTemplateType+" table");
        return;
    }

    currentlyOpenDialog->clearList(); //clear wltdialog

    currentlyOpenDialog->populateTypeSpecificExercises(); //reload wltdialog

}

