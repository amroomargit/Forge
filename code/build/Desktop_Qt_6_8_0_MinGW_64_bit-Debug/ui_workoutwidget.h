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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkoutWidget
{
public:
    QWidget *widget;
    QLabel *displayName;
    QWidget *widget_2;
    QPushButton *checkButton;
    QLabel *displaySets;
    QLabel *displayWeight;
    QLabel *displayReps;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QWidget *WorkoutWidget)
    {
        if (WorkoutWidget->objectName().isEmpty())
            WorkoutWidget->setObjectName("WorkoutWidget");
        WorkoutWidget->resize(561, 180);
        WorkoutWidget->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        widget = new QWidget(WorkoutWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 531, 41));
        widget->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        displayName = new QLabel(widget);
        displayName->setObjectName("displayName");
        displayName->setGeometry(QRect(10, 0, 501, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        displayName->setFont(font);
        widget_2 = new QWidget(WorkoutWidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 120, 471, 41));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        checkButton = new QPushButton(widget_2);
        checkButton->setObjectName("checkButton");
        checkButton->setGeometry(QRect(410, 5, 51, 31));
        checkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #bababa;\n"
"    color: #7e7e7e;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0eb63e;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0eb63e;\n"
"    color: white;\n"
"}"));
        displaySets = new QLabel(widget_2);
        displaySets->setObjectName("displaySets");
        displaySets->setGeometry(QRect(0, 0, 71, 41));
        QFont font1;
        font1.setBold(true);
        displaySets->setFont(font1);
        displayWeight = new QLabel(widget_2);
        displayWeight->setObjectName("displayWeight");
        displayWeight->setGeometry(QRect(130, 0, 81, 41));
        displayWeight->setFont(font1);
        displayReps = new QLabel(widget_2);
        displayReps->setObjectName("displayReps");
        displayReps->setGeometry(QRect(300, 0, 81, 41));
        displayReps->setFont(font1);
        label = new QLabel(WorkoutWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 69, 81, 41));
        label->setFont(font1);
        label_2 = new QLabel(WorkoutWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 70, 81, 41));
        label_2->setFont(font1);
        comboBox = new QComboBox(WorkoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(150, 70, 82, 41));
        comboBox->setFont(font1);

        retranslateUi(WorkoutWidget);

        QMetaObject::connectSlotsByName(WorkoutWidget);
    } // setupUi

    void retranslateUi(QWidget *WorkoutWidget)
    {
        WorkoutWidget->setWindowTitle(QCoreApplication::translate("WorkoutWidget", "Form", nullptr));
        displayName->setText(QString());
        checkButton->setText(QCoreApplication::translate("WorkoutWidget", "\342\234\223", nullptr));
        displaySets->setText(QString());
        displayWeight->setText(QString());
        displayReps->setText(QString());
        label->setText(QCoreApplication::translate("WorkoutWidget", "Sets", nullptr));
        label_2->setText(QCoreApplication::translate("WorkoutWidget", "Reps", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("WorkoutWidget", "lbs", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("WorkoutWidget", "kgs", nullptr));

    } // retranslateUi

};

namespace Ui {
    class WorkoutWidget: public Ui_WorkoutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKOUTWIDGET_H
