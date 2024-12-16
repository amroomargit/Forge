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

    void setWeight(const QString &count, QString unit); //set weight

    void setUniqueExerciseID(QString uniqueID); //set unique exercise ID

private slots:

    void on_pushButton_clicked();

private:
    Ui::WorkoutWidget *ui;

    QString exerciseID; //unique exercise ID
};

#endif // WORKOUTWIDGET_H
