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

    void setUsername(const QString &username); //setters are always public (this is to pass the username of the current user that's logged in)

    void templateHomeScreenDisplay(); //we need to call this outside usermainmenu.cpp so that the userID has time to pass over and will not be -1. This affects the ability to dynamically display the template buttons

    void setTemplateID(int id);

private slots:
    int retrieveUserID(const QString& passedUserName); //to retrieve the userID

    void increaseQWidget(int widthIncrease);

    void on_logoutButton_clicked();

    void displayCurrentMeasurementValues(); //to display current measurement values

    void onPreExistingTemplateButtonClicked(); //to be able to click the template buttons we've created that are in the scrollable area

    void on_newWLTButton_clicked();

    void on_newCLTButton_clicked();

    void on_heightUpdateButton_clicked(); //to set current height value

    void on_weightUpdateButton_clicked(); //to set current weight value

    void on_calorieUpdateButton_clicked(); //to set current calorie value

    void on_termButton_clicked();

    void on_goalsButton_clicked();

    void on_tipButton_clicked();

    void on_linksButton_clicked();

    void on_tutorialButton_clicked();

    void on_calculatorButton_clicked();

private:
    Ui::UserMainMenu *ui;
    QString username;
    QLabel *titlePageLabel;
    int templateIDFromNewButton;
};

#endif // USERMAINMENU_H
