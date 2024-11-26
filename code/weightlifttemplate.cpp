#include "weightlifttemplate.h"
#include "ui_weightlifttemplate.h"

#include "usermainmenu.h"
#include "wltdialog.h"

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

WeightliftTemplate::WeightliftTemplate(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WeightliftTemplate)
{
    ui->setupUi(this);

    newTemplate("Default Template Name."); //call new template creation in constructor

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

WeightliftTemplate::~WeightliftTemplate()
{
    delete ui;
}

void WeightliftTemplate::on_backButton_clicked()
{
        UserMainMenu *backToPrevScreen = new UserMainMenu;
        backToPrevScreen->setFixedSize(this->size());
        this->setCentralWidget(backToPrevScreen);
}


//Add new row to templates table
void WeightliftTemplate::newTemplate(const QString& givenTemplateName){
    QString thisTemplateName = givenTemplateName;

    QSqlQuery query;
    query.prepare("INSERT INTO templates (template_name) VALUES (:templateName)");
    query.bindValue(":templateName", thisTemplateName);

    if(!query.exec()){
        qDebug() << "Error with template insertion... "<<query.lastError().text();
        QMessageBox::critical(this,"Error","Unable to add to database templates table");
    }
    else{
        currentTemplateId = query.lastInsertId().toInt(); // Save the template ID
        qDebug()<<"Successful creation";
        QMessageBox::information(this,"Success","able to add to database templates table");
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
    else{
        QMessageBox::information(this,"Success","Name changed");
    }

    //change QLabel at the top of the screen
    ui->titleLabel->setText(templateName);

}


void WeightliftTemplate::on_addNewExerciseButton_clicked()
{
    WLTDialog *newDialog = new WLTDialog(this); //passing 'this' for proper memory management
    newDialog->exec();
    qDebug()<<"close dialog";

}

