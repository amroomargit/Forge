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
        <p><b>ScottHermanFitness on YouTube:</b> <a href="https://www.youtube.com/@ScottHermanFitness">link</a></p>
        <br>
        <p><b>TylerPath on YouTube:</b> <a href="https://www.youtube.com/@tyler-path">link</a></p>
        <br>
        <p><b>MyFitnessPal: </b><a href="https://www.myfitnesspal.com">link</a></p>
        <br>
        <p><b>Fit4Less Gym: </b><a href="https://www.fit4less.ca">link</a></p>
        <br>
        <p><b>Crunch Fitness Gym: </b><a href="https://www.crunch.com">link</a></p>
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

