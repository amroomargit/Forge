#include "calculator.h"
#include "ui_calculator.h"

#include "mainwindow.h"

#include <QMessageBox>
#include <cmath>
#include <QDebug>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->setFixedSize(this->size());
    this->setCentralWidget(mainWindow);
}

//make sure height is converted to meters
float Calculator::heightConverter(float height, QString heightUnitSelection){
    float convertedHeight = 0.0;

    if(heightUnitSelection == "ft"){
        convertedHeight = height/(3.281);
    }
    else{
        convertedHeight = height;
    }

    return convertedHeight;
}

//make sure weight is converted to kgs
float Calculator::weightConverter(float weight, QString weightUnitSelection){
    float convertedWeight = 0.0;

    if(weightUnitSelection == "lbs"){
        convertedWeight = weight/(2.205);
    }
    else{
        convertedWeight = weight;
    }

    return convertedWeight;
}

//convert activity level from string to corresponding float value
float Calculator::activityLevelConverter(QString activityLevelSelection){
    float returnValue = 0.0;

    if(activityLevelSelection == "Little to no exercise"){
        returnValue = 1.2;
    }
    else if(activityLevelSelection == "Exercise 1-3 times per week"){
        returnValue = 1.375;
    }
    else if(activityLevelSelection == "Exercise 4-5 times per week"){
        returnValue = 1.55;
    }
    else if(activityLevelSelection == "Intense exercise 3-4 times per week"){
        returnValue = 1.725;
    }
    else if(activityLevelSelection == "Intense exercise 6-7 times per week"){
        returnValue = 1.9;
    }
    else if(activityLevelSelection == "Very intense exercise daily"){
        returnValue = 2.0;
    }

    return returnValue;
}

//calorie calculator method
void Calculator::calorieCalculator(float age, float height, float weight, QString heightUnitSelection, QString weightUnitSelection, QString genderSelection, QString activityLevelSelection){
    //initialize values
    float maintainWeight = 0.0;
    float mildWeightLoss = 0.0;
    float weightLoss = 0.0;
    float extremeWeightLoss = 0.0;
    float mildWeightGain = 0.0;
    float weightGain = 0.0;
    float extremeWeightGain = 0.0;

    float bmr = 0.0;
    float convertedActivityLevel = 0.0;
    float maitenanceCalories = 0.0;


    //different calculations based off of gender
    if(genderSelection == "Male"){
        bmr = 10 * (weightConverter(weight,weightUnitSelection)) + 6.25 * ((heightConverter(height,heightUnitSelection))*100) - 5 * age + 5;
    }
    else if(genderSelection == "Female"){
        bmr = 10 * (weightConverter(weight,weightUnitSelection)) + 6.25 * ((heightConverter(height,heightUnitSelection))*100) - 5 * age - 161;
    }

    convertedActivityLevel = activityLevelConverter(activityLevelSelection);

    maitenanceCalories = bmr * convertedActivityLevel;

    mildWeightLoss = maitenanceCalories - 250;
    weightLoss = maitenanceCalories - 500;
    extremeWeightLoss = maitenanceCalories - 800;

    mildWeightGain = maitenanceCalories + 250;
    weightGain = maitenanceCalories + 500;
    extremeWeightGain = maitenanceCalories + 800;


    //set labels dynamically
    ui->calorieLabel1->setText(QString::number(maitenanceCalories,'f',0));
    ui->calorieLabel2->setText(QString::number(mildWeightLoss,'f',0));
    ui->calorieLabel3->setText(QString::number(weightLoss,'f',0));
    ui->calorieLabel4->setText(QString::number(extremeWeightLoss,'f',0));

    ui->calorieLabel5->setText(QString::number(mildWeightGain,'f',0));
    ui->calorieLabel6->setText(QString::number(weightGain,'f',0));
    ui->calorieLabel7->setText(QString::number(extremeWeightGain,'f',0));

    return;
}


//calculate bmi method
void Calculator::bmiCalculator(float height, float weight, QString heightUnitSelection, QString weightUnitSelection){
    float convertedHeight = heightConverter(height, heightUnitSelection);
    float convertedWeight = weightConverter(weight, weightUnitSelection);

    float calculatedBMI = convertedWeight/(pow(convertedHeight,2));

    //change QLabel at the top of the screen
    ui->calculationBMILabel->setText(QString::number(calculatedBMI,'f',2));

    return;
}


//when the "Calculate!" button is clicked
void Calculator::on_calculateButton_clicked(){

    //extract values from QLineEdit boxes, check if float values or not
    QString age = ui->ageBox->text();
    QString height = ui->heightBox->text();
    QString weight = ui->weightBox->text();

    bool ageValueIsFloat, heightValueIsFloat, weightValueIsFloat;

    float ageValue = age.toFloat(&ageValueIsFloat);
    float heightValue = height.toFloat(&heightValueIsFloat);
    float weightValue = weight.toFloat(&weightValueIsFloat);


    //extract values from QComboBox dropdowns
    QString heightUnitSelection = ui->heightDropdown->currentText();
    QString weightUnitSelection = ui->weightDropdown->currentText();
    QString genderSelection = ui->genderDropdown->currentText();
    QString activityLevelSelection = ui->activityDropdown->currentText();


    //if all values are floats, we can proceed with calculating the bmi and caloric intake
    if(ageValueIsFloat && heightValueIsFloat && weightValueIsFloat){
        bmiCalculator(heightValue, weightValue, heightUnitSelection, weightUnitSelection);
        calorieCalculator(ageValue, heightValue, weightValue, heightUnitSelection, weightUnitSelection,genderSelection, activityLevelSelection);
    }
    else{ //otherwise, the values from the QLineEdit boxes aren't float values, force user to re-enter values
        QMessageBox::critical(this,"Input Error","One of the values entered is not a float.\nMust enter a float value, not string.");
        return;
    }
}

