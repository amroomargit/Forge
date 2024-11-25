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

    int getXPos();

    void setXPos(int newValue);

    int getYPos();

    void setYPos(int newValue);

    int getButtonCounter();

    void setButtonCounter(int newValue);

    int getMaxButtonsPerRow();

    void setMaxButtonsPerRow(int newValue);

private slots:
    void onUserButtonClicked(const QString &username);

    void on_addUserButton_clicked();

    void on_backButton_clicked();

private:
    Ui::UsersWindow *ui;

    //dynamic button creation positions
    int xPos;
    int yPos;

    //keep track of buttons in row for dynamic creation
    int maxButtonsPerRow;
    int buttonCounter;
};

#endif // USERSWINDOW_H
