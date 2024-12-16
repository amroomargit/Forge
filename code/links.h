#ifndef LINKS_H
#define LINKS_H

#include <QMainWindow>
#include "TextPage.h" //include abstract header

namespace Ui {
class Links;
}

class Links : public QMainWindow, public TextPage //abstract declaration
{
    Q_OBJECT

public:
    explicit Links(QWidget *parent = nullptr);
    ~Links();

    // Implement pure virtual function from TextPage
    void setText() const override;

private slots:
    void on_backButton_clicked();

private:
    Ui::Links *ui;
};

#endif // LINKS_H
