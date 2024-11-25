#ifndef RETURNINGUSER_H
#define RETURNINGUSER_H

#include <QMainWindow>

namespace Ui {
class ReturningUser;
}

class ReturningUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReturningUser(QWidget *parent = nullptr);
    ~ReturningUser();
    void setUser(const QString &username); //accepts username


private slots:
    void on_enterButton_clicked();

    void on_deleteButton_clicked(QString &username);

    void on_backButton_clicked();

private:
    Ui::ReturningUser *ui;
    QString currentUser; //to store username
    QString pass; //to store password
};

#endif // RETURNINGUSER_H
