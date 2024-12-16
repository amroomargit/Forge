#include "tips.h"
#include "ui_tips.h"
#include "mainwindow.h"

// Include the header for TextPage to access its functionality
#include "TextPage.h"

Tips::Tips(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tips)
{
    ui->setupUi(this);

    setText();

    this->setWindowFlags(Qt::WindowMinimizeButtonHint | Qt::WindowCloseButtonHint);
}

Tips::~Tips()
{
    delete ui;
}

//overriden method
void Tips::setText() const{

    ui->label->setText(R"(
<html>
    <body>
        <h2>Form and Safety</h2>
        <ul>
            <li>Learn Proper Form First: Avoid injury by prioritizing proper technique over lifting heavy weights. Watch videos or ask trainers for guidance.</li>
            <li>Warm Up and Cool Down: Spend 5-10 minutes warming up and cooling down to prevent muscle strain.</li>
        </ul>
        <h2>Gym Etiquette</h2>
        <ul>
            <li>Wipe Down Equipment: Always clean machines, benches, and weights after use with provided disinfectant wipes.</li>
            <li>Re-Rack Weights: Return weights and equipment to their designated spots for others to use.</li>
        </ul>
        <h2>Interacting with Others</h2>
        <ul>
            <li>Respect Personal Space: Don’t hover around or interrupt someone mid-set. Wait until they’re done to approach.</li>
            <li>Ask for Help: Don’t hesitate to ask gym staff or fellow gym-goers for advice or a spot—they’re usually happy to help!</li>
        </ul>
    </body>
</html>
)");

}


void Tips::on_backButton_clicked()
{
    MainWindow *mainWindow = new MainWindow;
    mainWindow->setFixedSize(this->size());
    this->setCentralWidget(mainWindow);
}

