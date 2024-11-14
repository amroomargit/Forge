#ifndef OLDUSER_H
#define OLDUSER_H

#include <QMainWindow>

namespace Ui {
class OldUser;
}

class OldUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit OldUser(QWidget *parent = nullptr);
    ~OldUser();

private:
    Ui::OldUser *ui;
};

#endif // OLDUSER_H
