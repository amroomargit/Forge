#ifndef TUTORIAL_H
#define TUTORIAL_H

#include <QMainWindow>
#include "TextPage.h" //include abstract header

namespace Ui {
class Tutorial;
}

class Tutorial : public QMainWindow, public TextPage //abstract declaration
{
    Q_OBJECT

public:
    explicit Tutorial(QWidget *parent = nullptr);
    ~Tutorial();

    // Implement pure virtual function from TextPage
    void setText() const override;

private slots:
    void on_backButton_clicked();

private:
    Ui::Tutorial *ui;
};

#endif // TUTORIAL_H
