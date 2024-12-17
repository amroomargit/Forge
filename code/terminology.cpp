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
    ui->label->setText(R"(
<html>
    <body>
        <h2>Reps (Repetitions):</h2>
        <p>In the gym, a "rep" refers to a single complete movement of an exercise. For example, when doing a push-up, lowering your body to the
ground and then pushing it back up counts as one rep. Reps are typically part of a set, which is a group of repetitions performed consecutively
before resting. Increasing the number of reps can help build endurance, while reducing reps with heavier weights can focus on strength building.</p>
        <h2>Sets:</h2>
        <p>A "set" is a group of repetitions performed for a specific exercise. For example, doing 10 push-ups continuously without rest would count as one
set of 10 reps. The number of sets you do for an exercise depends on your training goals. Strength training often involves fewer sets with heavier
weights, while endurance or hypertrophy (muscle growth) training might involve more sets with lighter weights.</p>
        <h2>Rest Period:</h2>
        <p>The rest period is the time taken between sets or exercises to allow muscles to recover before the next effort. The length of rest periods
can vary depending on the workout goal. For strength training, longer rest periods (2–5 minutes) allow for maximum recovery and better performance on
heavy lifts. For endurance or hypertrophy, shorter rest periods (30–90 seconds) keep the heart rate elevated and promote muscle growth.</p>
    </body>
</html>
)");
}

void Terminology::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->setFixedSize(this->size());
    this->setCentralWidget(mainWindow);
}

