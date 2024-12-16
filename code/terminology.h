#ifndef TERMINOLOGY_H
#define TERMINOLOGY_H

#include <QMainWindow>
#include "TextPage.h" //include abstract header

namespace Ui {
class Terminology;
}

class Terminology : public QMainWindow, public TextPage //abstract declaration
{
    Q_OBJECT

public:
    explicit Terminology(QWidget *parent = nullptr);
    ~Terminology();

    // Implement pure virtual function from TextPage
    void setText() const override;

private slots:
    void on_backButton_clicked();

private:
    Ui::Terminology *ui;
};

#endif // TERMINOLOGY_H
