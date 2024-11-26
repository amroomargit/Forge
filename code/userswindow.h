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
    void increaseQWidget(int heightIncrease); //to increase scrollable area while looping

    void onUserButtonClicked(const QString &username);

    void on_addUserButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UsersWindow *ui;
    int rowLoopCounter; //to know when extend the scrollable area
};

#endif // USERSWINDOW_H
