#include "links.h"
#include "ui_links.h"
#include "mainwindow.h"

Links::Links(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Links)
{
    ui->setupUi(this);

    setText();

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

Links::~Links()
{
    delete ui;
}

//overriden method
void Links::setText() const{

    ui->label->setText(R"(
<html>
    <body>
        <p>ScottHermanFitness on YouTube: <a href="https://www.youtube.com/@ScottHermanFitness">link</a></p>
        <br>
        <p>TylerPath on YouTube: <a href="https://www.youtube.com/@tyler-path">link</a></p>
        <br>
        <p>MyFitnessPal: <a href="https://www.myfitnesspal.com">link</a></p>
        <br>
        <p>Fit4Less Gym: <a href="https://www.fit4less.ca">link</a></p>
        <br>
        <p>Crunch Fitness Gym: <a href="https://www.crunch.com">link</a></p>
    </body>
</html>
)");
}



void Links::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->setFixedSize(this->size());
    this->setCentralWidget(mainWindow);
}

