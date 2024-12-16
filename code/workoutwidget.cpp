#include "workoutwidget.h"
#include "ui_workoutwidget.h"

#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

WorkoutWidget::WorkoutWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WorkoutWidget)
{
    ui->setupUi(this);
}

WorkoutWidget::~WorkoutWidget()
{
    delete ui;
}

//setter and for unique exercise ID
void WorkoutWidget::setUniqueExerciseID(QString uniqueID){
    exerciseID = uniqueID;
}

void WorkoutWidget::setTitle(const QString &title){
    ui->workoutName->setText(title);
}

void WorkoutWidget::setSets(const QString &count){
    float setsValue = count.toFloat();
    ui->setLabel->setText(QString::number(setsValue,'f',0));
}

void WorkoutWidget::setReps(const QString &count){    
    float repsValue = count.toFloat();
    ui->setLabel->setText(QString::number(repsValue,'f',0));
}

void WorkoutWidget::setWeight(const QString &count, QString unit){
    float weightValue = count.toFloat();
    ui->weightLabel->setText(QString::number(weightValue,'f',2) +" "+unit);
}


//change values in template
void WorkoutWidget::on_pushButton_clicked(){
    QString sets = ui->setBox->text();
    QString weight = ui->weightBox->text();
    QString weightUnit = ui->weightDropdown->currentText();
    QString reps = ui->repBox->text();

    bool setValueIsFloat, weightValueIsFloat, repValueIsFloat;

    float setsValue = sets.toFloat(&setValueIsFloat);
    float weightValue = weight.toFloat(&weightValueIsFloat);
    float repsValue = reps.toFloat(&repValueIsFloat);

    qDebug() << "Sets Value:" << setsValue << "Is Float:" << setValueIsFloat;
    qDebug() << "Weight Value:" << weightValue << "Is Float:" << weightValueIsFloat;
    qDebug() << "Reps Value:" << repsValue << "Is Float:" << repValueIsFloat;
    qDebug() << "ID:" << exerciseID;

    //checks if all values are floats
    if(setValueIsFloat != true || weightValueIsFloat != true || repValueIsFloat != true){
        QMessageBox::critical(this,"Input Error","One of the values entered is not a float, or not all values were filled.\nMust enter a float value, not string.");
        return;
    }

    //adding changed values into database
    QSqlQuery query;

    query.prepare("UPDATE template_exercises SET sets = :setsValue, reps = :repsValue, weight = :weightValue, weight_unit = :weightUnit WHERE this_exercise_unique_id = :exerciseID");
    query.bindValue(":exerciseID", exerciseID);
    query.bindValue(":setsValue", sets);
    query.bindValue(":repsValue", reps);
    query.bindValue(":weightValue", weight);
    query.bindValue(":weightUnit", weightUnit);

    if (!query.exec()) {
        qDebug() << "Query execution failed!";
        qDebug() << "Executed query:" << query.lastQuery();
        qDebug() << "Error:" << query.lastError().text();

        QMessageBox::critical(this,"Error","Could not change values");
        return;
    }

    /*For now, we will update the values in the database, and display the newly updated values this way instead of having to repopulate the widgets again
    next time we open the template though, the values will be there

    We will know if the values were successfully added to the database though, by the QMessageBox giving a confirmation after passing the
    if statement's q.exec() check*/
    ui->setLabel->setText(QString::number(setsValue,'f',0));
    ui->weightLabel->setText(QString::number(weightValue,'f',2) +" "+weightUnit);
    ui->repLabel->setText(QString::number(repsValue,'f',0));

}

