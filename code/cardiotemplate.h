#ifndef CARDIOTEMPLATE_H
#define CARDIOTEMPLATE_H

#include <QMainWindow>

#include "weightlifttemplate.h"

namespace Ui {
class CardioTemplate;
}

class CardioTemplate : public WeightliftTemplate //inherit from weightliftingtemplate
{
    Q_OBJECT

public:
    explicit CardioTemplate(QWidget *parent = nullptr);
    ~CardioTemplate();

    void newTemplate(QString givenTemplateName) override;

    void dynamicWidgetPopulation() override;


protected slots:
    void on_addNewExerciseButton_clicked() override;


private:
    Ui::CardioTemplate *ui;
};

#endif // CARDIOTEMPLATE_H
