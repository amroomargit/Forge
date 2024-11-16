#ifndef ADDNEWWORKOUTDIALOG_H
#define ADDNEWWORKOUTDIALOG_H

#include <QDialog>

namespace Ui {
class AddNewWorkoutDialog;
}

class AddNewWorkoutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewWorkoutDialog(QWidget *parent = nullptr);
    ~AddNewWorkoutDialog();

private slots:
    void on_xButton_clicked();

private:
    Ui::AddNewWorkoutDialog *ui;
};

#endif // ADDNEWWORKOUTDIALOG_H
