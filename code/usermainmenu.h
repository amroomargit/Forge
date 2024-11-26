#ifndef USERMAINMENU_H
#define USERMAINMENU_H

#include <QMainWindow>

#include <QLabel>

#include <QSqlQuery>



namespace Ui {
class UserMainMenu;
}

class UserMainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserMainMenu(QWidget *parent = nullptr);
    ~UserMainMenu();

    void setUsername(const QString &username);

private slots:
    int retrieveUserID(const QString& passedUserName); //to retrieve the userID

    void templateHomeScreenDisplay();

    void increaseQWidget(int widthIncrease);

    void on_logoutButton_clicked();

    void on_newWLTButton_clicked();

    void on_newCLTButton_clicked();

private:
    Ui::UserMainMenu *ui;
    QString username;
    QLabel *titlePageLabel;
};

#endif // USERMAINMENU_H
