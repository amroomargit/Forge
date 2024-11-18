#ifndef CARDIOTEMPLATE_H
#define CARDIOTEMPLATE_H

#include <QMainWindow>

namespace Ui {
class CardioTemplate;
}

class CardioTemplate : public QMainWindow
{
    Q_OBJECT

public:
    explicit CardioTemplate(QWidget *parent = nullptr);
    ~CardioTemplate();

private:
    Ui::CardioTemplate *ui;
};

#endif // CARDIOTEMPLATE_H
