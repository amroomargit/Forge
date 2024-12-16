#include "workoutgoals.h"
#include "ui_workoutgoals.h"

WorkoutGoals::WorkoutGoals(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WorkoutGoals)
{
    ui->setupUi(this);
}

WorkoutGoals::~WorkoutGoals()
{
    delete ui;
}
