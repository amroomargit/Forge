#include "tutorial.h"
#include "ui_tutorial.h"
#include "mainwindow.h"

// Include the header for TextPage to access its functionality
#include "TextPage.h"


Tutorial::Tutorial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tutorial)
{
    ui->setupUi(this);

    setText();

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

Tutorial::~Tutorial()
{
    delete ui;
}

//overriden method
void Tutorial::setText() const{
    ui->label->setText(R"(
<html>
    <body>
        <p>When you first open the application, you'll be greeted with a screen that features seven buttons. All of these buttons lead to text-based
pages, except for the "Users" and "Calculator" buttons, which offer additional functionality. The "Calculator" button opens a page where you can
calculate your BMI and your calorie goal, both for a calorie deficit or surplus, based on the details you enter, such as age, height, weight, gender,
and activity level. On the other hand, clicking the "Users" button takes you to a page where you can manage user accounts. You can create a new user
by tapping the "+" button, or you can log in as a returning user. Each user in the database has their own button displayed on the screen, with the
title corresponding to their username. When you click on one of these pre-existing user buttons, you can either log in by entering the password or
choose to delete the account. Once logged in, you're taken to the user's main menu, where you have the option to create new weightlifting or cardio
templates, update your measurements stored in the database, or quickly access the other six pages from the main screen. If you decide to create a new
weightlifting or cardio template by clicking the respective red or yellow buttons, you'll be brought to a screen where you can add new workouts to
your template, which will be displayed as widgets on the screen. You can also name your template, or if you wish to add a new exercise option to the
database, simply click the green "+" button after selecting the "+ Add New Exercise" option. Once you're done, clicking back will save all your
changes, and you'll return to the user's main menu, where you can access the template you just created or start a new one.</p>
    </body>
</html>
)");
}

void Tutorial::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->setFixedSize(this->size());
    this->setCentralWidget(mainWindow);
}

