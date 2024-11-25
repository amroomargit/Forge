#ifndef USERSWINDOW_H
#define USERSWINDOW_H

#include <QMainWindow>

namespace Ui {
class UsersWindow;
}

class UsersWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UsersWindow(QWidget *parent = nullptr);
    ~UsersWindow();

private slots:
    void populateUsers();

    void on_addUserButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UsersWindow *ui;
};

#endif // USERSWINDOW_H
