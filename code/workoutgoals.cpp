#include "workoutgoals.h"
#include "ui_workoutgoals.h"
#include "mainwindow.h"

// Include the header for TextPage to access its functionality
#include "TextPage.h"

WorkoutGoals::WorkoutGoals(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::WorkoutGoals)
{
    ui->setupUi(this);

    setText();

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

WorkoutGoals::~WorkoutGoals()
{
    delete ui;
}

//overriden method
void WorkoutGoals::setText() const{

    ui->label->setText(R"(
<html>
    <body>
        <h2>Hypertrophy: Building Muscle Size</h2>
        <p>Hypertrophy training focuses on increasing muscle size for a more defined physique. It involves moderate to
heavy weights with 8–12 repetitions per set and shorter rest periods (30–90 seconds) to maximize time under tension. This
style targets individual muscle groups with controlled movements. Proper nutrition, including a caloric surplus and high protein
intake, is essential for muscle repair and growth.</p>
        <h2>Powerlifting: Maximizing Strength</h2>
        <p>Powerlifting focuses on developing maximum strength in the squat, bench press, and deadlift. Training involves heavy weights
and low repetitions (1–5 reps) with longer rest periods (2–5 minutes) for full recovery. The goal is to lift as much weight as possible,
relying on progressive overload and precise technique to prevent injuries and improve efficiency.</p>
        <h2>Endurance: Sustained Performance</h2>
        <p>Endurance training emphasizes muscular stamina and sustained effort, using lighter weights and high repetitions (12–20 or more per set).
Rest periods are short (less than 30 seconds), keeping the heart rate elevated to build aerobic fitness. This approach improves overall stamina and
coordination, supporting long-duration physical activities like running or cycling.</p>
    </body>
</html>
)");

}

void WorkoutGoals::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->setFixedSize(this->size());
    this->setCentralWidget(mainWindow);
}

