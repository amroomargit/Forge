#include "workoutwidget.h"
#include "ui_workoutwidget.h"

#include <QPushButton>

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
    ui->displayName_2->setText(title);
}

void WorkoutWidget::setSets(const QString &count){
    ui->setLabel->setText(count);
}

void WorkoutWidget::setReps(const QString &count){
    ui->repLabel->setText(count);
}

void WorkoutWidget::setWeight(const QString &count){
    ui->displayWeight_2->setText(count);
}


