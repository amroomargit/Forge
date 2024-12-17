#ifndef WORKOUTGOALS_H
#define WORKOUTGOALS_H

#include <QMainWindow>
#include "TextPage.h" //include abstract header

namespace Ui {
class WorkoutGoals;
}

class WorkoutGoals : public QMainWindow, public TextPage //abstract declaration
{
    Q_OBJECT

public:
    explicit WorkoutGoals(QWidget *parent = nullptr);
    ~WorkoutGoals();

    // Implement pure virtual function from TextPage
    void setText() const override;


private slots:
    void on_backButton_clicked();

private:
    Ui::WorkoutGoals *ui;
};

#endif // WORKOUTGOALS_H
