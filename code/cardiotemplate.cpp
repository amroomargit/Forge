#include "cardiotemplate.h"
#include "wltdialog.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QScrollArea>
#include <QWidget>

CardioTemplate::CardioTemplate(QWidget *parent)
    : WeightliftTemplate(parent){} //cardiotemplate inherits from parent weightliftingtemplate

CardioTemplate::~CardioTemplate(){}


void CardioTemplate::newTemplate(QString givenTemplateName){
    QString templateName = givenTemplateName;
    QString templateType = "Cardio";

    QSqlQuery query;
    query.prepare("INSERT INTO templates (user_id,template_name,template_type) VALUES (:currentUserID,:templateName,:templateType)");
    query.bindValue(":currentUserID", currentUserID);
    query.bindValue(":templateName", templateName);
    query.bindValue(":templateType", templateType);

    if(!query.exec()){
        QMessageBox::critical(this,"Error","Unable to add to database templates table.");
    }
    else{
        currentTemplateId = query.lastInsertId().toInt(); // Save the template ID
    }
}


void CardioTemplate::on_addNewExerciseButton_clicked()
{
    WLTDialog *newDialog = new WLTDialog(this); //passing 'this' for proper memory management
    newDialog->setTemplateType("all_cardio_exercises"); //set template type
    newDialog->setTemplateID(currentTemplateId); //set templateID
    newDialog->objectPassed(this);
    newDialog->populateTypeSpecificExercises(); //populate the dialog before it appears
    newDialog->exec();
    qDebug()<<"close dialog";
}
