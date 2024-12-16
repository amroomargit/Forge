#ifndef WORKOUTGOALS_H
#define WORKOUTGOALS_H

#include <QMainWindow>

namespace Ui {
class WorkoutGoals;
}

class WorkoutGoals : public QMainWindow
{
    Q_OBJECT

public:
    explicit WorkoutGoals(QWidget *parent = nullptr);
    ~WorkoutGoals();

private:
    Ui::WorkoutGoals *ui;
};

#endif // WORKOUTGOALS_H
