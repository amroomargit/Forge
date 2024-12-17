/********************************************************************************
** Form generated from reading UI file 'workoutgoals.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKOUTGOALS_H
#define UI_WORKOUTGOALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkoutGoals
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QLabel *label;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WorkoutGoals)
    {
        if (WorkoutGoals->objectName().isEmpty())
            WorkoutGoals->setObjectName("WorkoutGoals");
        WorkoutGoals->resize(1203, 721);
        centralwidget = new QWidget(WorkoutGoals);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 461, 91));
        QFont font;
        font.setPointSize(40);
        titleLabel->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 100, 971, 551));
        QFont font1;
        font1.setPointSize(13);
        label->setFont(font1);
        label->setWordWrap(true);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1080, 30, 83, 31));
        QFont font2;
        font2.setPointSize(8);
        backButton->setFont(font2);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #bababa;\n"
"color: black;\n"
"}"));
        WorkoutGoals->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WorkoutGoals);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        WorkoutGoals->setMenuBar(menubar);
        statusbar = new QStatusBar(WorkoutGoals);
        statusbar->setObjectName("statusbar");
        WorkoutGoals->setStatusBar(statusbar);

        retranslateUi(WorkoutGoals);

        QMetaObject::connectSlotsByName(WorkoutGoals);
    } // setupUi

    void retranslateUi(QMainWindow *WorkoutGoals)
    {
        WorkoutGoals->setWindowTitle(QCoreApplication::translate("WorkoutGoals", "MainWindow", nullptr));
        titleLabel->setText(QCoreApplication::translate("WorkoutGoals", "Workout Goals.", nullptr));
        label->setText(QString());
        backButton->setText(QCoreApplication::translate("WorkoutGoals", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkoutGoals: public Ui_WorkoutGoals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKOUTGOALS_H
