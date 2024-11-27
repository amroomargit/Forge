#ifndef WLTDIALOG_H
#define WLTDIALOG_H

#include <QDialog>

#include <QListWidget>

namespace Ui {
class WLTDialog;
}

class WLTDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WLTDialog(QWidget *parent = nullptr);
    ~WLTDialog();

    void populateTypeSpecificExercises(const QString& templateType); //list all exercises in the table (has to be public to generate before dialog opens)

private slots:

    void on_xButton_clicked();
    void on_listWidget_itemClicked(QListWidgetItem *thisItem);
    void searchThroughList(const QString &exerciseSearchedFor); //dialog search exercise bar

    void on_addNewWorkoutButton_clicked();

private:
    Ui::WLTDialog *ui;

    QString thisTemplateType;
};

#endif // WLTDIALOG_H
