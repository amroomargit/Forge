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
    void setUserID(int passedOverUserID); //to be able to recieved ID passed from usermainmenu
    void newTemplate(const QString& givenTemplateName); //MUST be public so it can be called from usermainmenu AFTER userID has been set, so as to avoid query failure
    void setUserName(const QString &userNamePassedThrough);

private slots:

    void on_backButton_clicked();

    void on_saveNewName_clicked();

    void on_addNewExerciseButton_clicked();

private:
    Ui::WeightliftTemplate *ui;
    int currentTemplateId = -1; // to save templateID so name can be changed later(-1 means no template is being edited)
    int currentUserID; //passed over userID corresponding to username's user ID found from the retrieval method in usermainmenu
    QString username;
};

#endif // WEIGHTLIFTTEMPLATE_H
