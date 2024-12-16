#ifndef TIPS_H
#define TIPS_H

#include <QMainWindow>
#include "TextPage.h" //include abstract header

namespace Ui {
class Tips;
}

class Tips : public QMainWindow, public TextPage //abstract declaration
{
    Q_OBJECT

public:
    explicit Tips(QWidget *parent = nullptr);
    ~Tips();

    // Implement pure virtual function from TextPage
    void setText() const override;

private slots:
    void on_backButton_clicked();

private:
    Ui::Tips *ui;
};

#endif // TIPS_H
