#ifndef WORKOUTWIDGET_H
#define WORKOUTWIDGET_H

#include <QWidget>

namespace Ui {
class WorkoutWidget;
}

class WorkoutWidget : public QWidget
{
    Q_OBJECT

public:
    explicit WorkoutWidget(QWidget *parent = nullptr);
    ~WorkoutWidget();
    void setTitle(const QString &title); //set widget title

    void setSets(const QString &count); //set set count

    void setReps(const QString &count); //set rep count

    void setWeight(const QString &count); //set weight

private:
    Ui::WorkoutWidget *ui;
};

#endif // WORKOUTWIDGET_H
