#include "cardiotemplate.h"
#include "wltdialog.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QScrollArea>
#include <QWidget>

CardioTemplate::CardioTemplate(QWidget *parent)
    : WeightliftTemplate(parent){}

CardioTemplate::~CardioTemplate(){}


void CardioTemplate::newTemplate(QString givenTemplateName){
    QString thisTemplateName = givenTemplateName;
    QString templateType = "Weightlifting";

    QSqlQuery query;
    query.prepare("INSERT INTO templates (user_id,template_name,template_type) VALUES (:currentUserID,:templateName,:templateType)");
    query.bindValue(":currentUserID", getUserID());
    query.bindValue(":templateName", thisTemplateName);
    query.bindValue(":templateType", templateType);

    if(!query.exec()){
        qDebug() << "Error with template insertion... "<<query.lastError().text();
        QMessageBox::critical(this,"Error","Unable to add to database templates table.");
    }
    else{
        setCurrentTemplateId(query.lastInsertId().toInt()); // Save the template ID
        qDebug()<<"Successful creation";
    }
}

//OVERRIDE when new exercise button is clicked
void CardioTemplate::on_addNewExerciseButton_clicked()
{
    WLTDialog *newDialog = new WLTDialog(this); //passing 'this' for proper memory management
    newDialog->setTemplateType("all_cardio_exercises"); //set template type
    newDialog->setTemplateID(getCurrentTemplateId()); //set templateID
    newDialog->objectPassed(this);
    newDialog->populateTypeSpecificExercises(); //populate the dialog before it appears
    newDialog->exec();
    qDebug()<<"close dialog";

}
*/
