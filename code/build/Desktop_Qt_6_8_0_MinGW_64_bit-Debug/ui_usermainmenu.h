/********************************************************************************
** Form generated from reading UI file 'usermainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMAINMENU_H
#define UI_USERMAINMENU_H

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

class Ui_UserMainMenu
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QLabel *templatesLabel;
    QPushButton *logoutButton;
    QPushButton *newWLTButton;
    QPushButton *newCLTButton;
    QLabel *currMeasLabel;
    QLabel *heightLabel;
    QLineEdit *heightBox;
    QPushButton *heightUpdateButton;
    QPushButton *weightUpdateButton;
    QLineEdit *weightBox;
    QLabel *weightLabel;
    QPushButton *calorieUpdateButton;
    QLineEdit *caloriesBox;
    QLabel *caloriesLabel;
    QLabel *quicklinksLabel;
    QPushButton *termButton;
    QPushButton *goalsButton;
    QPushButton *tipButton;
    QPushButton *calculatorButton;
    QPushButton *tutorialButton;
    QPushButton *linksButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContentsMM;
    QComboBox *heightUnit;
    QComboBox *weightUnit;
    QLabel *displayHeight;
    QLabel *displayWeight;
    QLabel *displayCalories;
    QLabel *label;
    QLabel *label_2;
    QLabel *templatesLabel_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserMainMenu)
    {
        if (UserMainMenu->objectName().isEmpty())
            UserMainMenu->setObjectName("UserMainMenu");
        UserMainMenu->resize(1203, 721);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/flame-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        UserMainMenu->setWindowIcon(icon);
        centralwidget = new QWidget(UserMainMenu);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(20, 30, 901, 71));
        QFont font;
        font.setPointSize(40);
        titleLabel->setFont(font);
        templatesLabel = new QLabel(centralwidget);
        templatesLabel->setObjectName("templatesLabel");
        templatesLabel->setGeometry(QRect(40, 114, 151, 51));
        QFont font1;
        font1.setPointSize(20);
        templatesLabel->setFont(font1);
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(1080, 30, 91, 41));
        QFont font2;
        font2.setPointSize(9);
        logoutButton->setFont(font2);
        logoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #333333;\n"
"color: red;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: red;\n"
"color: white;\n"
"}"));
        newWLTButton = new QPushButton(centralwidget);
        newWLTButton->setObjectName("newWLTButton");
        newWLTButton->setGeometry(QRect(60, 170, 231, 51));
        QFont font3;
        font3.setPointSize(8);
        newWLTButton->setFont(font3);
        newWLTButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(255, 0, 0, 200);\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #ff5c5c;\n"
"color: white;\n"
"}\n"
""));
        newCLTButton = new QPushButton(centralwidget);
        newCLTButton->setObjectName("newCLTButton");
        newCLTButton->setGeometry(QRect(60, 230, 231, 51));
        newCLTButton->setFont(font3);
        newCLTButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(221, 188, 0, 0.8);\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #ffd900;\n"
"color: white;\n"
"}\n"
""));
        currMeasLabel = new QLabel(centralwidget);
        currMeasLabel->setObjectName("currMeasLabel");
        currMeasLabel->setGeometry(QRect(40, 340, 331, 51));
        currMeasLabel->setFont(font1);
        heightLabel = new QLabel(centralwidget);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(60, 390, 81, 41));
        QFont font4;
        font4.setPointSize(14);
        heightLabel->setFont(font4);
        heightBox = new QLineEdit(centralwidget);
        heightBox->setObjectName("heightBox");
        heightBox->setGeometry(QRect(60, 430, 101, 28));
        heightBox->setMaxLength(3);
        heightUpdateButton = new QPushButton(centralwidget);
        heightUpdateButton->setObjectName("heightUpdateButton");
        heightUpdateButton->setGeometry(QRect(240, 423, 81, 41));
        heightUpdateButton->setFont(font3);
        heightUpdateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        weightUpdateButton = new QPushButton(centralwidget);
        weightUpdateButton->setObjectName("weightUpdateButton");
        weightUpdateButton->setGeometry(QRect(640, 423, 81, 41));
        weightUpdateButton->setFont(font3);
        weightUpdateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        weightBox = new QLineEdit(centralwidget);
        weightBox->setObjectName("weightBox");
        weightBox->setGeometry(QRect(390, 430, 171, 28));
        weightBox->setMaxLength(5);
        weightLabel = new QLabel(centralwidget);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(390, 390, 91, 41));
        weightLabel->setFont(font4);
        calorieUpdateButton = new QPushButton(centralwidget);
        calorieUpdateButton->setObjectName("calorieUpdateButton");
        calorieUpdateButton->setGeometry(QRect(990, 423, 81, 41));
        calorieUpdateButton->setFont(font3);
        calorieUpdateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        caloriesBox = new QLineEdit(centralwidget);
        caloriesBox->setObjectName("caloriesBox");
        caloriesBox->setGeometry(QRect(790, 430, 191, 28));
        caloriesBox->setMaxLength(4);
        caloriesLabel = new QLabel(centralwidget);
        caloriesLabel->setObjectName("caloriesLabel");
        caloriesLabel->setGeometry(QRect(790, 390, 101, 41));
        caloriesLabel->setFont(font4);
        quicklinksLabel = new QLabel(centralwidget);
        quicklinksLabel->setObjectName("quicklinksLabel");
        quicklinksLabel->setGeometry(QRect(40, 480, 171, 51));
        quicklinksLabel->setFont(font1);
        termButton = new QPushButton(centralwidget);
        termButton->setObjectName("termButton");
        termButton->setGeometry(QRect(50, 540, 131, 121));
        termButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        goalsButton = new QPushButton(centralwidget);
        goalsButton->setObjectName("goalsButton");
        goalsButton->setGeometry(QRect(210, 540, 131, 121));
        goalsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        tipButton = new QPushButton(centralwidget);
        tipButton->setObjectName("tipButton");
        tipButton->setGeometry(QRect(370, 540, 131, 121));
        tipButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        calculatorButton = new QPushButton(centralwidget);
        calculatorButton->setObjectName("calculatorButton");
        calculatorButton->setGeometry(QRect(850, 540, 131, 121));
        calculatorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        tutorialButton = new QPushButton(centralwidget);
        tutorialButton->setObjectName("tutorialButton");
        tutorialButton->setGeometry(QRect(690, 540, 131, 121));
        tutorialButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        linksButton = new QPushButton(centralwidget);
        linksButton->setObjectName("linksButton");
        linksButton->setGeometry(QRect(530, 540, 131, 121));
        linksButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(370, 160, 691, 151));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:horizontal {\n"
"    background-color: #656565;\n"
"    height: 15px; \n"
"    margin: 0 10px; \n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background-color: black;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {\n"
"    background: none;\n"
"    width: 0px; \n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
"}\n"
""));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContentsMM = new QWidget();
        scrollAreaWidgetContentsMM->setObjectName("scrollAreaWidgetContentsMM");
        scrollAreaWidgetContentsMM->setGeometry(QRect(0, 0, 689, 129));
        scrollArea->setWidget(scrollAreaWidgetContentsMM);
        heightUnit = new QComboBox(centralwidget);
        heightUnit->addItem(QString());
        heightUnit->addItem(QString());
        heightUnit->setObjectName("heightUnit");
        heightUnit->setGeometry(QRect(170, 430, 61, 31));
        heightUnit->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
""));
        weightUnit = new QComboBox(centralwidget);
        weightUnit->addItem(QString());
        weightUnit->addItem(QString());
        weightUnit->setObjectName("weightUnit");
        weightUnit->setGeometry(QRect(570, 430, 61, 31));
        weightUnit->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
""));
        displayHeight = new QLabel(centralwidget);
        displayHeight->setObjectName("displayHeight");
        displayHeight->setGeometry(QRect(130, 401, 71, 21));
        QFont font5;
        font5.setPointSize(12);
        displayHeight->setFont(font5);
        displayWeight = new QLabel(centralwidget);
        displayWeight->setObjectName("displayWeight");
        displayWeight->setGeometry(QRect(470, 401, 71, 21));
        displayWeight->setFont(font5);
        displayCalories = new QLabel(centralwidget);
        displayCalories->setObjectName("displayCalories");
        displayCalories->setGeometry(QRect(870, 401, 71, 21));
        displayCalories->setFont(font5);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 500, 331, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(620, 120, 531, 41));
        label_2->setStyleSheet(QString::fromUtf8("color:red"));
        templatesLabel_2 = new QLabel(centralwidget);
        templatesLabel_2->setObjectName("templatesLabel_2");
        templatesLabel_2->setGeometry(QRect(340, 114, 261, 51));
        templatesLabel_2->setFont(font1);
        UserMainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserMainMenu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        UserMainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(UserMainMenu);
        statusbar->setObjectName("statusbar");
        UserMainMenu->setStatusBar(statusbar);

        retranslateUi(UserMainMenu);

        QMetaObject::connectSlotsByName(UserMainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *UserMainMenu)
    {
        UserMainMenu->setWindowTitle(QCoreApplication::translate("UserMainMenu", "Forge", nullptr));
        titleLabel->setText(QString());
        templatesLabel->setText(QCoreApplication::translate("UserMainMenu", "Templates", nullptr));
        logoutButton->setText(QCoreApplication::translate("UserMainMenu", "Logout", nullptr));
        newWLTButton->setText(QCoreApplication::translate("UserMainMenu", "New Weightlifting Template", nullptr));
        newCLTButton->setText(QCoreApplication::translate("UserMainMenu", "New Cardio Template", nullptr));
        currMeasLabel->setText(QCoreApplication::translate("UserMainMenu", "Current Measurements", nullptr));
        heightLabel->setText(QCoreApplication::translate("UserMainMenu", "Height:", nullptr));
        heightUpdateButton->setText(QCoreApplication::translate("UserMainMenu", "Update", nullptr));
        weightUpdateButton->setText(QCoreApplication::translate("UserMainMenu", "Update", nullptr));
        weightLabel->setText(QCoreApplication::translate("UserMainMenu", "Weight:", nullptr));
        calorieUpdateButton->setText(QCoreApplication::translate("UserMainMenu", "Update", nullptr));
        caloriesLabel->setText(QCoreApplication::translate("UserMainMenu", "Calories:", nullptr));
        quicklinksLabel->setText(QCoreApplication::translate("UserMainMenu", "Quick Links", nullptr));
        termButton->setText(QCoreApplication::translate("UserMainMenu", "Terminology", nullptr));
        goalsButton->setText(QCoreApplication::translate("UserMainMenu", "Workout \n"
"Goals", nullptr));
        tipButton->setText(QCoreApplication::translate("UserMainMenu", "Tips", nullptr));
        calculatorButton->setText(QCoreApplication::translate("UserMainMenu", "Calculator", nullptr));
        tutorialButton->setText(QCoreApplication::translate("UserMainMenu", "Tutorial", nullptr));
        linksButton->setText(QCoreApplication::translate("UserMainMenu", "Links", nullptr));
        heightUnit->setItemText(0, QCoreApplication::translate("UserMainMenu", "cm", nullptr));
        heightUnit->setItemText(1, QCoreApplication::translate("UserMainMenu", "ft", nullptr));

        weightUnit->setItemText(0, QCoreApplication::translate("UserMainMenu", "lbs", nullptr));
        weightUnit->setItemText(1, QCoreApplication::translate("UserMainMenu", "kgs", nullptr));

        displayHeight->setText(QString());
        displayWeight->setText(QString());
        displayCalories->setText(QString());
        label->setText(QCoreApplication::translate("UserMainMenu", "(Note: clicking on the quicklinks WILL log you out)", nullptr));
        label_2->setText(QCoreApplication::translate("UserMainMenu", "NOTE TO AVOID CONFUSION: template storage is not mean't to be accessable\n"
" (not a design flaw, system was intended to be this way)", nullptr));
        templatesLabel_2->setText(QCoreApplication::translate("UserMainMenu", "Template Storage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMainMenu: public Ui_UserMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINMENU_H
