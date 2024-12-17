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
    QLabel *workoutName;
    QWidget *widget_3;
    QLabel *setLabel;
    QLabel *weightLabel;
    QLabel *repLabel;
    QComboBox *weightDropdown;
    QLineEdit *setBox;
    QLineEdit *weightBox;
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
        workoutName = new QLabel(widget);
        workoutName->setObjectName("workoutName");
        workoutName->setGeometry(QRect(10, 0, 501, 41));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        workoutName->setFont(font1);
        workoutName->setStyleSheet(QString::fromUtf8("color:white;"));
        widget_3 = new QWidget(mainWidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 110, 391, 41));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        setLabel = new QLabel(widget_3);
        setLabel->setObjectName("setLabel");
        setLabel->setGeometry(QRect(10, 0, 71, 41));
        setLabel->setFont(font);
        setLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        weightLabel = new QLabel(widget_3);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(150, 0, 141, 41));
        weightLabel->setFont(font);
        weightLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        repLabel = new QLabel(widget_3);
        repLabel->setObjectName("repLabel");
        repLabel->setGeometry(QRect(300, 0, 81, 41));
        repLabel->setFont(font);
        repLabel->setStyleSheet(QString::fromUtf8("color:white;"));
        weightDropdown = new QComboBox(mainWidget);
        weightDropdown->addItem(QString());
        weightDropdown->addItem(QString());
        weightDropdown->addItem(QString());
        weightDropdown->addItem(QString());
        weightDropdown->setObjectName("weightDropdown");
        weightDropdown->setGeometry(QRect(170, 60, 82, 41));
        weightDropdown->setFont(font);
        weightDropdown->setStyleSheet(QString::fromUtf8("color:black;"));
        setBox = new QLineEdit(mainWidget);
        setBox->setObjectName("setBox");
        setBox->setGeometry(QRect(10, 160, 81, 41));
        setBox->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        setBox->setMaxLength(3);
        weightBox = new QLineEdit(mainWidget);
        weightBox->setObjectName("weightBox");
        weightBox->setGeometry(QRect(160, 160, 81, 41));
        weightBox->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        weightBox->setMaxLength(6);
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
        workoutName->setText(QString());
        setLabel->setText(QString());
        weightLabel->setText(QString());
        repLabel->setText(QString());
        weightDropdown->setItemText(0, QCoreApplication::translate("WorkoutWidget", "lbs", nullptr));
        weightDropdown->setItemText(1, QCoreApplication::translate("WorkoutWidget", "sec", nullptr));
        weightDropdown->setItemText(2, QCoreApplication::translate("WorkoutWidget", "min", nullptr));
        weightDropdown->setItemText(3, QCoreApplication::translate("WorkoutWidget", "kgs", nullptr));

        pushButton->setText(QCoreApplication::translate("WorkoutWidget", "Change", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkoutWidget: public Ui_WorkoutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKOUTWIDGET_H
