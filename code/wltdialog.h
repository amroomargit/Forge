#ifndef WLTDIALOG_H
#define WLTDIALOG_H

#include <QDialog>

namespace Ui {
class WLTDialog;
}

class WLTDialog : public QDialog
{
    Q_OBJECT

public:
    explicit WLTDialog(QWidget *parent = nullptr);
    ~WLTDialog();

private slots:

    void on_xButton_clicked();

private:
    Ui::WLTDialog *ui;
};

#endif // WLTDIALOG_H
