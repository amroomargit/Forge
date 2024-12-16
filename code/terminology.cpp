#include "terminology.h"
#include "ui_terminology.h"
#include "mainwindow.h"

// Include the header for TextPage to access its functionality
#include "TextPage.h"

Terminology::Terminology(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Terminology)
{
    ui->setupUi(this);
    setText();
    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

Terminology::~Terminology()
{
    delete ui;
}

//overriden method
void Terminology::setText() const{

    ui->label->setText("Reps (Repetitions): In the gym, a rep refers to a single complete movement of an exercise. For example, when \ndoing a push-up, "
                       "lowering your body to the ground and then pushing it back up counts as one rep. Reps are \ntypically part of a set, which is a group "
                       "of repetitions performed consecutively before resting. \nIncreasing the number of reps can help build endurance, while reducing reps "
                       "with heavier weights can focus \non strength building.\n\nSets: A set is a group of repetitions performed for a specific exercise. For "
                       "example, doing 10 push-ups \ncontinuously without rest would count as one set of 10 reps. The number of sets you do for an exercise "
                       "\ndepends on your training goals. Strength training often involves fewer sets with heavier weights, \nwhile endurance or hypertrophy "
                       "(muscle growth) training might involve more sets with lighter weights.\n\nProgressive Overload: Progressive overload refers to the "
                       "practice of gradually increasing the intensity of your \nworkout over time.This can be done by increasing the weight, reps, or sets "
                       "in your exercises. The goal is to \ncontinually challenge your muscles, encouraging them to adapt and grow stronger or larger.");
}

void Terminology::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->setFixedSize(this->size());
    this->setCentralWidget(mainWindow);
}

