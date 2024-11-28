#ifndef WLTDIALOG_H
#define WLTDIALOG_H

#include <QDialog>

#include <QListWidget>

#include "weightlifttemplate.h""

namespace Ui {
class WLTDialog;
}

class WLTDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WLTDialog(QWidget *parent = nullptr);
    ~WLTDialog();

    void populateTypeSpecificExercises(); //list all exercises in the table (has to be public to generate before dialog opens)

    void setTemplateType(const QString& templateType); //setter for template type

    void setTemplateID(int currentTemplateId); //setter for templateID

    void clearList(); //clears the dialog list

private slots:

    void on_xButton_clicked();
    void on_listWidget_itemClicked(QListWidgetItem *thisItem);
    void searchThroughList(const QString &exerciseSearchedFor); //dialog search exercise bar

    void on_addNewWorkoutButton_clicked();

private:
    Ui::WLTDialog *ui;

    QString thisTemplateType;

    int thisTemplateID;

    WeightliftTemplate weightLiftTemplateObject;

    int y = 0; //to keep track of single widget position population for weightlifttemplate

};

#endif // WLTDIALOG_H
