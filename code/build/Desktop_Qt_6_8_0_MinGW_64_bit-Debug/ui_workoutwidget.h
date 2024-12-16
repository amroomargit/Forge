/********************************************************************************
** Form generated from reading UI file 'workoutwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKOUTWIDGET_H
#define UI_WORKOUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkoutWidget
{
public:
    QWidget *mainWidget;
    QLabel *label_2;
    QLabel *label;
    QWidget *widget;
    QLabel *displayName_2;
    QWidget *widget_3;
    QLabel *displaySets_2;
    QLabel *displayWeight_2;
    QLabel *displayReps_2;
    QComboBox *comboBox;
    QLineEdit *setBox;
    QLineEdit *lbsBox;
    QLineEdit *repBox;
    QPushButton *pushButton;

    void setupUi(QWidget *WorkoutWidget)
    {
        if (WorkoutWidget->objectName().isEmpty())
            WorkoutWidget->setObjectName("WorkoutWidget");
        WorkoutWidget->resize(571, 231);
        WorkoutWidget->setStyleSheet(QString::fromUtf8(""));
        mainWidget = new QWidget(WorkoutWidget);
        mainWidget->setObjectName("mainWidget");
        mainWidget->setGeometry(QRect(10, 10, 551, 211));
        mainWidget->setStyleSheet(QString::fromUtf8("background-color: #bababa;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        label_2 = new QLabel(mainWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 60, 81, 41));
        QFont font;
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:black;"));
        label = new QLabel(mainWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 59, 81, 41));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:black;"));
        widget = new QWidget(mainWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 531, 41));
        widget->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        displayName_2 = new QLabel(widget);
        displayName_2->setObjectName("displayName_2");
        displayName_2->setGeometry(QRect(10, 0, 501, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        displayName_2->setFont(font1);
        displayName_2->setStyleSheet(QString::fromUtf8("color:white;"));
        widget_3 = new QWidget(mainWidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 110, 391, 41));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        displaySets_2 = new QLabel(widget_3);
        displaySets_2->setObjectName("displaySets_2");
        displaySets_2->setGeometry(QRect(10, 0, 71, 41));
        displaySets_2->setFont(font);
        displaySets_2->setStyleSheet(QString::fromUtf8("color:white;"));
        displayWeight_2 = new QLabel(widget_3);
        displayWeight_2->setObjectName("displayWeight_2");
        displayWeight_2->setGeometry(QRect(150, 0, 81, 41));
        displayWeight_2->setFont(font);
        displayWeight_2->setStyleSheet(QString::fromUtf8("color:white;"));
        displayReps_2 = new QLabel(widget_3);
        displayReps_2->setObjectName("displayReps_2");
        displayReps_2->setGeometry(QRect(300, 0, 81, 41));
        displayReps_2->setFont(font);
        displayReps_2->setStyleSheet(QString::fromUtf8("color:white;"));
        comboBox = new QComboBox(mainWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(170, 60, 82, 41));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("color:black;"));
        setBox = new QLineEdit(mainWidget);
        setBox->setObjectName("setBox");
        setBox->setGeometry(QRect(10, 160, 81, 41));
        setBox->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        setBox->setMaxLength(3);
        lbsBox = new QLineEdit(mainWidget);
        lbsBox->setObjectName("lbsBox");
        lbsBox->setGeometry(QRect(160, 160, 81, 41));
        lbsBox->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        lbsBox->setMaxLength(5);
        repBox = new QLineEdit(mainWidget);
        repBox->setObjectName("repBox");
        repBox->setGeometry(QRect(310, 160, 81, 41));
        repBox->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        repBox->setMaxLength(3);
        pushButton = new QPushButton(mainWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 160, 81, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: black;\n"
"color: #09f522;\n"
"border-radius: 15px;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #09f522;\n"
"color: white;\n"
"}\n"
""));

        retranslateUi(WorkoutWidget);

        QMetaObject::connectSlotsByName(WorkoutWidget);
    } // setupUi

    void retranslateUi(QWidget *WorkoutWidget)
    {
        WorkoutWidget->setWindowTitle(QCoreApplication::translate("WorkoutWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("WorkoutWidget", "Reps", nullptr));
        label->setText(QCoreApplication::translate("WorkoutWidget", "Sets", nullptr));
        displayName_2->setText(QString());
        displaySets_2->setText(QString());
        displayWeight_2->setText(QString());
        displayReps_2->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("WorkoutWidget", "lbs", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("WorkoutWidget", "kgs", nullptr));

        pushButton->setText(QCoreApplication::translate("WorkoutWidget", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkoutWidget: public Ui_WorkoutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKOUTWIDGET_H
