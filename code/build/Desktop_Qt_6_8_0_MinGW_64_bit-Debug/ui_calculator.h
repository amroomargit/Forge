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
    QLabel *bmiLabel;
    QLineEdit *ageBox;
    QLabel *ageLabel;
    QLineEdit *weightBox;
    QLabel *heightLabel;
    QLabel *genderLabel;
    QPushButton *calculateButton;
    QComboBox *genderDropdown;
    QPushButton *backButton;
    QLineEdit *heightBox;
    QComboBox *activityDropdown;
    QLabel *weightLabel;
    QLabel *titleLabel;
    QLabel *activitylevelLabel;
    QLabel *calculationBMILabel;
    QLabel *weightBMLabel;
    QLabel *calorieGoalLabel;
    QLabel *maintainWLabel;
    QLabel *maintainWResultLabel;
    QLabel *mildWLLabel;
    QLabel *mildWLResultLabel;
    QLabel *weightLossLabel;
    QLabel *weightLossResultLabel;
    QLabel *extremeWLLabel;
    QLabel *extremeWLResultLabel;
    QComboBox *weightDropdown;
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
        scrollArea->setGeometry(QRect(-10, 10, 1181, 641));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"    background-color: #656565;\n"
"    width: 15px; \n"
"    margin: 10px 0; \n"
"    border-radius: 15px; \n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: black;\n"
"    border-radius: 15px; \n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none; \n"
"}\n"
""));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setFrameShadow(QFrame::Shadow::Plain);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1162, 800));
        bmiLabel = new QLabel(scrollAreaWidgetContents);
        bmiLabel->setObjectName("bmiLabel");
        bmiLabel->setGeometry(QRect(50, 410, 341, 61));
        QFont font;
        font.setPointSize(20);
        bmiLabel->setFont(font);
        ageBox = new QLineEdit(scrollAreaWidgetContents);
        ageBox->setObjectName("ageBox");
        ageBox->setGeometry(QRect(140, 208, 71, 31));
        ageBox->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 5px 10px;"));
        ageLabel = new QLabel(scrollAreaWidgetContents);
        ageLabel->setObjectName("ageLabel");
        ageLabel->setGeometry(QRect(80, 200, 51, 41));
        QFont font1;
        font1.setPointSize(15);
        ageLabel->setFont(font1);
        weightBox = new QLineEdit(scrollAreaWidgetContents);
        weightBox->setObjectName("weightBox");
        weightBox->setGeometry(QRect(600, 208, 71, 31));
        weightBox->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 5px 10px;"));
        heightLabel = new QLabel(scrollAreaWidgetContents);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(280, 200, 81, 41));
        heightLabel->setFont(font1);
        genderLabel = new QLabel(scrollAreaWidgetContents);
        genderLabel->setObjectName("genderLabel");
        genderLabel->setGeometry(QRect(80, 290, 91, 41));
        genderLabel->setFont(font1);
        calculateButton = new QPushButton(scrollAreaWidgetContents);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(860, 230, 121, 71));
        QFont font2;
        font2.setPointSize(10);
        calculateButton->setFont(font2);
        calculateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        genderDropdown = new QComboBox(scrollAreaWidgetContents);
        genderDropdown->addItem(QString());
        genderDropdown->addItem(QString());
        genderDropdown->setObjectName("genderDropdown");
        genderDropdown->setGeometry(QRect(180, 297, 91, 31));
        genderDropdown->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 5px 10px;"));
        backButton = new QPushButton(scrollAreaWidgetContents);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1080, 30, 71, 41));
        QFont font3;
        font3.setPointSize(9);
        backButton->setFont(font3);
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
        heightBox = new QLineEdit(scrollAreaWidgetContents);
        heightBox->setObjectName("heightBox");
        heightBox->setGeometry(QRect(370, 208, 71, 31));
        heightBox->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 5px 10px;"));
        activityDropdown = new QComboBox(scrollAreaWidgetContents);
        activityDropdown->addItem(QString());
        activityDropdown->addItem(QString());
        activityDropdown->addItem(QString());
        activityDropdown->addItem(QString());
        activityDropdown->addItem(QString());
        activityDropdown->addItem(QString());
        activityDropdown->setObjectName("activityDropdown");
        activityDropdown->setGeometry(QRect(500, 297, 271, 31));
        activityDropdown->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 5px 10px;"));
        weightLabel = new QLabel(scrollAreaWidgetContents);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(510, 200, 91, 41));
        weightLabel->setFont(font1);
        titleLabel = new QLabel(scrollAreaWidgetContents);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 321, 61));
        QFont font4;
        font4.setPointSize(40);
        titleLabel->setFont(font4);
        activitylevelLabel = new QLabel(scrollAreaWidgetContents);
        activitylevelLabel->setObjectName("activitylevelLabel");
        activitylevelLabel->setGeometry(QRect(340, 290, 151, 41));
        activitylevelLabel->setFont(font1);
        calculationBMILabel = new QLabel(scrollAreaWidgetContents);
        calculationBMILabel->setObjectName("calculationBMILabel");
        calculationBMILabel->setGeometry(QRect(420, 411, 161, 61));
        calculationBMILabel->setFont(font);
        weightBMLabel = new QLabel(scrollAreaWidgetContents);
        weightBMLabel->setObjectName("weightBMLabel");
        weightBMLabel->setGeometry(QRect(640, 411, 201, 61));
        weightBMLabel->setFont(font);
        calorieGoalLabel = new QLabel(scrollAreaWidgetContents);
        calorieGoalLabel->setObjectName("calorieGoalLabel");
        calorieGoalLabel->setGeometry(QRect(50, 530, 191, 61));
        calorieGoalLabel->setFont(font);
        maintainWLabel = new QLabel(scrollAreaWidgetContents);
        maintainWLabel->setObjectName("maintainWLabel");
        maintainWLabel->setGeometry(QRect(260, 550, 141, 31));
        QFont font5;
        font5.setPointSize(11);
        maintainWLabel->setFont(font5);
        maintainWResultLabel = new QLabel(scrollAreaWidgetContents);
        maintainWResultLabel->setObjectName("maintainWResultLabel");
        maintainWResultLabel->setGeometry(QRect(410, 550, 181, 31));
        maintainWResultLabel->setFont(font5);
        mildWLLabel = new QLabel(scrollAreaWidgetContents);
        mildWLLabel->setObjectName("mildWLLabel");
        mildWLLabel->setGeometry(QRect(260, 590, 141, 31));
        mildWLLabel->setFont(font5);
        mildWLResultLabel = new QLabel(scrollAreaWidgetContents);
        mildWLResultLabel->setObjectName("mildWLResultLabel");
        mildWLResultLabel->setGeometry(QRect(410, 590, 181, 31));
        mildWLResultLabel->setFont(font5);
        weightLossLabel = new QLabel(scrollAreaWidgetContents);
        weightLossLabel->setObjectName("weightLossLabel");
        weightLossLabel->setGeometry(QRect(260, 630, 141, 31));
        weightLossLabel->setFont(font5);
        weightLossResultLabel = new QLabel(scrollAreaWidgetContents);
        weightLossResultLabel->setObjectName("weightLossResultLabel");
        weightLossResultLabel->setGeometry(QRect(400, 630, 181, 31));
        weightLossResultLabel->setFont(font5);
        extremeWLLabel = new QLabel(scrollAreaWidgetContents);
        extremeWLLabel->setObjectName("extremeWLLabel");
        extremeWLLabel->setGeometry(QRect(260, 670, 171, 31));
        extremeWLLabel->setFont(font5);
        extremeWLResultLabel = new QLabel(scrollAreaWidgetContents);
        extremeWLResultLabel->setObjectName("extremeWLResultLabel");
        extremeWLResultLabel->setGeometry(QRect(410, 670, 181, 31));
        extremeWLResultLabel->setFont(font5);
        weightDropdown = new QComboBox(scrollAreaWidgetContents);
        weightDropdown->addItem(QString());
        weightDropdown->addItem(QString());
        weightDropdown->setObjectName("weightDropdown");
        weightDropdown->setGeometry(QRect(690, 208, 61, 31));
        weightDropdown->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 5px 10px;"));
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
        bmiLabel->setText(QCoreApplication::translate("Calculator", "Body Mass Index (BMI):", nullptr));
        ageBox->setText(QString());
        ageLabel->setText(QCoreApplication::translate("Calculator", "Age:", nullptr));
        weightBox->setText(QString());
        heightLabel->setText(QCoreApplication::translate("Calculator", "Height:", nullptr));
        genderLabel->setText(QCoreApplication::translate("Calculator", "Gender:", nullptr));
        calculateButton->setText(QCoreApplication::translate("Calculator", "Calculate!", nullptr));
        genderDropdown->setItemText(0, QCoreApplication::translate("Calculator", "Male", nullptr));
        genderDropdown->setItemText(1, QCoreApplication::translate("Calculator", "Female", nullptr));

        backButton->setText(QCoreApplication::translate("Calculator", "Back", nullptr));
        heightBox->setText(QString());
        activityDropdown->setItemText(0, QCoreApplication::translate("Calculator", "Little to no exercise", nullptr));
        activityDropdown->setItemText(1, QCoreApplication::translate("Calculator", "Exercise 1-3 times per week", nullptr));
        activityDropdown->setItemText(2, QCoreApplication::translate("Calculator", "Exercise 4-5 times per week", nullptr));
        activityDropdown->setItemText(3, QCoreApplication::translate("Calculator", "Intense exercise 3-4 times per week", nullptr));
        activityDropdown->setItemText(4, QCoreApplication::translate("Calculator", "Intense exercise 6-7 times per week", nullptr));
        activityDropdown->setItemText(5, QCoreApplication::translate("Calculator", "Very intense exercise daily", nullptr));

        weightLabel->setText(QCoreApplication::translate("Calculator", "Weight:", nullptr));
        titleLabel->setText(QCoreApplication::translate("Calculator", "Calculator.", nullptr));
        activitylevelLabel->setText(QCoreApplication::translate("Calculator", "Activity Level:", nullptr));
        calculationBMILabel->setText(QString());
        weightBMLabel->setText(QString());
        calorieGoalLabel->setText(QCoreApplication::translate("Calculator", "Calorie Goal:", nullptr));
        maintainWLabel->setText(QCoreApplication::translate("Calculator", "Maintain weight:", nullptr));
        maintainWResultLabel->setText(QString());
        mildWLLabel->setText(QCoreApplication::translate("Calculator", "Mild weight loss:", nullptr));
        mildWLResultLabel->setText(QString());
        weightLossLabel->setText(QCoreApplication::translate("Calculator", "Weight loss:", nullptr));
        weightLossResultLabel->setText(QString());
        extremeWLLabel->setText(QCoreApplication::translate("Calculator", "Extreme weight loss:", nullptr));
        extremeWLResultLabel->setText(QString());
        weightDropdown->setItemText(0, QCoreApplication::translate("Calculator", "kg", nullptr));
        weightDropdown->setItemText(1, QCoreApplication::translate("Calculator", "lbs", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
