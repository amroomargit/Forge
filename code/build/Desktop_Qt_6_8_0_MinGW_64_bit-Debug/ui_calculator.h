/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_6;
    QPushButton *backButton;
    QComboBox *comboBox;
    QPushButton *backButton_2;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(1203, 721);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/flame-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Calculator->setWindowIcon(icon);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 10, 1201, 661));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1199, 659));
        label_7 = new QLabel(scrollAreaWidgetContents);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 410, 361, 61));
        QFont font;
        font.setPointSize(20);
        label_7->setFont(font);
        lineEdit_5 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(140, 210, 51, 28));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 200, 51, 41));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        lineEdit_3 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(600, 210, 51, 28));
        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(280, 200, 81, 41));
        label_3->setFont(font1);
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 290, 91, 41));
        label_6->setFont(font1);
        backButton = new QPushButton(scrollAreaWidgetContents);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(860, 230, 121, 71));
        QFont font2;
        font2.setPointSize(10);
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
        comboBox = new QComboBox(scrollAreaWidgetContents);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(180, 300, 82, 28));
        backButton_2 = new QPushButton(scrollAreaWidgetContents);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(1090, 30, 71, 41));
        QFont font3;
        font3.setPointSize(9);
        backButton_2->setFont(font3);
        backButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        lineEdit_6 = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(370, 210, 51, 28));
        comboBox_2 = new QComboBox(scrollAreaWidgetContents);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(500, 300, 271, 28));
        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(510, 200, 91, 41));
        label_4->setFont(font1);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 321, 61));
        QFont font4;
        font4.setPointSize(40);
        label->setFont(font4);
        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(340, 290, 151, 41));
        label_5->setFont(font1);
        scrollArea->setWidget(scrollAreaWidgetContents);
        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Forge", nullptr));
        label_7->setText(QCoreApplication::translate("Calculator", "Body Mass Index (BMI):", nullptr));
        lineEdit_5->setText(QString());
        label_2->setText(QCoreApplication::translate("Calculator", "Age:", nullptr));
        lineEdit_3->setText(QString());
        label_3->setText(QCoreApplication::translate("Calculator", "Height:", nullptr));
        label_6->setText(QCoreApplication::translate("Calculator", "Gender:", nullptr));
        backButton->setText(QCoreApplication::translate("Calculator", "Calculate!", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Calculator", "Male", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Calculator", "Female", nullptr));

        backButton_2->setText(QCoreApplication::translate("Calculator", "Back", nullptr));
        lineEdit_6->setText(QString());
        comboBox_2->setItemText(0, QCoreApplication::translate("Calculator", "Little to no exercise", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Calculator", "Exercise 1-3 times per week", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Calculator", "Exercise 4-5 times per week", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Calculator", "Intense exercise 3-4 times per week", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Calculator", "Intense exercise 6-7 times per week", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("Calculator", "Very intense exercise daily", nullptr));

        label_4->setText(QCoreApplication::translate("Calculator", "Weight:", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "Calculator.", nullptr));
        label_5->setText(QCoreApplication::translate("Calculator", "Activity Level:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
