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

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);

    qDebug() << "WeightliftTemplate constructed.";
}

WeightliftTemplate::~WeightliftTemplate()
{
    delete ui;
}

void WeightliftTemplate::setUserID(int passedOverUserID) {
    currentUserID = passedOverUserID;
    qDebug() << "User ID set to:" << currentUserID; //check
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
        qDebug() << "Error with template insertion... "<<query.lastError().text();
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


void WeightliftTemplate::on_addNewExerciseButton_clicked()
{
    WLTDialog *newDialog = new WLTDialog(this); //passing 'this' for proper memory management
    newDialog->setTemplateType("all_weightlifting_exercises"); //set template type
    newDialog->setTemplateID(currentTemplateId); //set templateID
    newDialog->populateTypeSpecificExercises(); //populate the dialog before it appears
    newDialog->exec();
    qDebug()<<"close dialog";

}

