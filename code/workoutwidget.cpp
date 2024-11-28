#include "workoutwidget.h"
#include "ui_workoutwidget.h"

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

void WorkoutWidget::setTitle(const QString &title){
    ui->displayName->setText(title);
}

void WorkoutWidget::setSets(const QString &count){
    ui->displaySets->setText(count);
}

void WorkoutWidget::setReps(const QString &count){
    ui->displayReps->setText(count);
}

void WorkoutWidget::setWeight(const QString &count){
    ui->displayWeight->setText(count);
}
