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
    int getUserID(); //getter for userID
    virtual void newTemplate(const QString& givenTemplateName); //MUST be public so it can be called from usermainmenu AFTER userID has been set, so as to avoid query failure
    void setUserName(const QString &userNamePassedThrough);
    void widgetPopulation(int idOfCurrentTemplate); //Populates the scrollable area with ALL widgets corresponding to the exercises added to the template_exercises table
    virtual void singleWidgetPopulation(); //Populates the scrollable area dynamically
    void setYCoord(int y); //setter for Y coordinate
    int getCurrentTemplateId(); //getter for templateID
    void setCurrentTemplateId(int newCurrentTemplateID); //setter for templateID
    void setExerciseId(int givenExerciseId); //setter for unique exercise ID in template_exercises table
    QString getUserName(); //return username

private slots:

    void on_backButton_clicked();

    void on_saveNewName_clicked();

    virtual void on_addNewExerciseButton_clicked();

    void increaseQWidget(int heightIncrease);

private:
    Ui::WeightliftTemplate *ui;
    int currentTemplateId = -1; // to save templateID so name can be changed later(-1 means no template is being edited)
    int currentUserID; //passed over userID corresponding to username's user ID found from the retrieval method in usermainmenu
    QString username; //so we can pass username over
    int thisY; //y value for widget SINGLE population
    int exerciseUniqueID;
};

#endif // WEIGHTLIFTTEMPLATE_H
