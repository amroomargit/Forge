#ifndef ADDNEWWORKOUTDIALOG_H
#define ADDNEWWORKOUTDIALOG_H

#include <QDialog>

#include "wltdialog.h"

namespace Ui {
class AddNewWorkoutDialog;
}

class AddNewWorkoutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewWorkoutDialog(QWidget *parent = nullptr);

    ~AddNewWorkoutDialog();

    void setTemplateType(const QString& templateType); //setter for template type

    void sendDialogObject(WLTDialog* dialogObjectPassed); //setter to pass through object to reload later

private slots:
    void on_xButton_clicked();

    void on_addNewWorkoutButton_clicked();

private:
    Ui::AddNewWorkoutDialog *ui;

    QString thisTemplateType;

    WLTDialog* currentlyOpenDialog;

};

#endif // ADDNEWWORKOUTDIALOG_H
