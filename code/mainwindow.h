#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_userButton_clicked();

    void on_termButton_clicked();

    void on_goalsButton_clicked();

    void on_tipsButton_clicked();

    void on_linksButton_clicked();

    void on_tutorButton_clicked();

    void on_calcButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
