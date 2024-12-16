#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:

    void on_backButton_clicked();

    void on_calculateButton_clicked();

    float heightConverter(float height, QString heightUnitSelection); //ensures height is converted to meters

    float weightConverter(float weight, QString weightUnitSelection); //ensures weight is converted to kgs

    float activityLevelConverter(QString activityLevelSelection); //convert activity level from string to corresponding float value

    void bmiCalculator(float height, float weight, QString heightUnitSelection, QString weightUnitSelection); //BMI calculator method

    void calorieCalculator(float age, float height, float weight, QString heightUnitSelection, QString weightUnitSelection, QString genderSelection, QString activityLevelSelection); //caloric intake calculator method

private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
