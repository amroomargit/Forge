#ifndef WEIGHTLIFTTEMPLATE_H
#define WEIGHTLIFTTEMPLATE_H

#include <QMainWindow>

namespace Ui {
class WeightliftTemplate;
}

class WeightliftTemplate : public QMainWindow
{
    Q_OBJECT

public:
    explicit WeightliftTemplate(QWidget *parent = nullptr);
    ~WeightliftTemplate();

private slots:
    void newTemplate(const QString& givenTemplateName);

    void on_backButton_clicked();

    void on_saveNewName_clicked();

    void on_addNewExerciseButton_clicked();

private:
    Ui::WeightliftTemplate *ui;
    int currentTemplateId = -1; // to save templateID so name can be changed later(-1 means no template is being edited)
};

#endif // WEIGHTLIFTTEMPLATE_H
