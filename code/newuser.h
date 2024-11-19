#ifndef NEWUSER_H
#define NEWUSER_H

#include <QMainWindow>

namespace Ui {
class NewUser;
}

class NewUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit NewUser(QWidget *parent = nullptr);
    ~NewUser();

private slots:
    void on_backButton_clicked();

private:
    Ui::NewUser *ui;
};

#endif // NEWUSER_H
