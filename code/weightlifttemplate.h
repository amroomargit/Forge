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
    void on_backButton_clicked();

private:
    Ui::WeightliftTemplate *ui;
};

#endif // WEIGHTLIFTTEMPLATE_H
