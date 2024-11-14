#ifndef USERMAINMENU_H
#define USERMAINMENU_H

#include <QMainWindow>

namespace Ui {
class UserMainMenu;
}

class UserMainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserMainMenu(QWidget *parent = nullptr);
    ~UserMainMenu();

private:
    Ui::UserMainMenu *ui;
};

#endif // USERMAINMENU_H
