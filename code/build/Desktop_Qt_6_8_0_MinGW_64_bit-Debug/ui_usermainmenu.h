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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMainMenu
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QLabel *templatesLabel;
    QPushButton *logoutButton;
    QPushButton *newWLTLabel;
    QPushButton *newCLTLabel;
    QLabel *currMeasLabel;
    QLabel *heightLabel;
    QLineEdit *heightBox;
    QPushButton *updateButton;
    QPushButton *updateButton_2;
    QLineEdit *weightBox;
    QLabel *weightLabel;
    QPushButton *updateButton_3;
    QLineEdit *caloriesBox;
    QLabel *caloriesLabel;
    QLabel *quicklinksLabel;
    QPushButton *termButton;
    QPushButton *goalsButton;
    QPushButton *tipButton;
    QPushButton *calculatorButton;
    QPushButton *tutorialButton;
    QPushButton *linksButton;
    QLabel *warningLabel;
    QToolButton *revealTxtButton;
    QLabel *hiddenLabel;
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
        titleLabel->setGeometry(QRect(10, 20, 901, 71));
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
        newWLTLabel = new QPushButton(centralwidget);
        newWLTLabel->setObjectName("newWLTLabel");
        newWLTLabel->setGeometry(QRect(60, 170, 231, 51));
        QFont font3;
        font3.setPointSize(8);
        newWLTLabel->setFont(font3);
        newWLTLabel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        newCLTLabel = new QPushButton(centralwidget);
        newCLTLabel->setObjectName("newCLTLabel");
        newCLTLabel->setGeometry(QRect(60, 230, 231, 51));
        newCLTLabel->setFont(font3);
        newCLTLabel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        currMeasLabel->setGeometry(QRect(40, 320, 331, 51));
        currMeasLabel->setFont(font1);
        heightLabel = new QLabel(centralwidget);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(60, 370, 231, 41));
        QFont font4;
        font4.setPointSize(15);
        heightLabel->setFont(font4);
        heightBox = new QLineEdit(centralwidget);
        heightBox->setObjectName("heightBox");
        heightBox->setGeometry(QRect(60, 410, 141, 28));
        updateButton = new QPushButton(centralwidget);
        updateButton->setObjectName("updateButton");
        updateButton->setGeometry(QRect(210, 403, 91, 41));
        updateButton->setFont(font3);
        updateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        updateButton_2 = new QPushButton(centralwidget);
        updateButton_2->setObjectName("updateButton_2");
        updateButton_2->setGeometry(QRect(480, 403, 91, 41));
        updateButton_2->setFont(font3);
        updateButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        weightBox->setGeometry(QRect(330, 410, 141, 28));
        weightLabel = new QLabel(centralwidget);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(330, 370, 231, 41));
        weightLabel->setFont(font4);
        updateButton_3 = new QPushButton(centralwidget);
        updateButton_3->setObjectName("updateButton_3");
        updateButton_3->setGeometry(QRect(750, 403, 91, 41));
        updateButton_3->setFont(font3);
        updateButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        caloriesBox->setGeometry(QRect(600, 410, 141, 28));
        caloriesLabel = new QLabel(centralwidget);
        caloriesLabel->setObjectName("caloriesLabel");
        caloriesLabel->setGeometry(QRect(600, 370, 231, 41));
        caloriesLabel->setFont(font4);
        quicklinksLabel = new QLabel(centralwidget);
        quicklinksLabel->setObjectName("quicklinksLabel");
        quicklinksLabel->setGeometry(QRect(40, 460, 171, 51));
        quicklinksLabel->setFont(font1);
        termButton = new QPushButton(centralwidget);
        termButton->setObjectName("termButton");
        termButton->setGeometry(QRect(50, 520, 131, 121));
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
        goalsButton->setGeometry(QRect(210, 520, 131, 121));
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
        tipButton->setGeometry(QRect(370, 520, 131, 121));
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
        calculatorButton->setGeometry(QRect(850, 520, 131, 121));
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
        tutorialButton->setGeometry(QRect(690, 520, 131, 121));
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
        linksButton->setGeometry(QRect(530, 520, 131, 121));
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
        warningLabel = new QLabel(centralwidget);
        warningLabel->setObjectName("warningLabel");
        warningLabel->setGeometry(QRect(1080, 80, 71, 21));
        revealTxtButton = new QToolButton(centralwidget);
        revealTxtButton->setObjectName("revealTxtButton");
        revealTxtButton->setGeometry(QRect(1150, 83, 20, 16));
        revealTxtButton->setArrowType(Qt::ArrowType::DownArrow);
        hiddenLabel = new QLabel(centralwidget);
        hiddenLabel->setObjectName("hiddenLabel");
        hiddenLabel->setGeometry(QRect(1080, 100, 101, 251));
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
        newWLTLabel->setText(QCoreApplication::translate("UserMainMenu", "New Weightlifting Template", nullptr));
        newCLTLabel->setText(QCoreApplication::translate("UserMainMenu", "New Cardio Template", nullptr));
        currMeasLabel->setText(QCoreApplication::translate("UserMainMenu", "Current Measurements", nullptr));
        heightLabel->setText(QCoreApplication::translate("UserMainMenu", "Height:", nullptr));
        updateButton->setText(QCoreApplication::translate("UserMainMenu", "Update", nullptr));
        updateButton_2->setText(QCoreApplication::translate("UserMainMenu", "Update", nullptr));
        weightLabel->setText(QCoreApplication::translate("UserMainMenu", "Weight:", nullptr));
        updateButton_3->setText(QCoreApplication::translate("UserMainMenu", "Update", nullptr));
        caloriesLabel->setText(QCoreApplication::translate("UserMainMenu", "Calories:", nullptr));
        quicklinksLabel->setText(QCoreApplication::translate("UserMainMenu", "Quick Links", nullptr));
        termButton->setText(QCoreApplication::translate("UserMainMenu", "Terminology", nullptr));
        goalsButton->setText(QCoreApplication::translate("UserMainMenu", "Workout \n"
"Goals", nullptr));
        tipButton->setText(QCoreApplication::translate("UserMainMenu", "Tips", nullptr));
        calculatorButton->setText(QCoreApplication::translate("UserMainMenu", "Calculator", nullptr));
        tutorialButton->setText(QCoreApplication::translate("UserMainMenu", "Tutorial", nullptr));
        linksButton->setText(QCoreApplication::translate("UserMainMenu", "Links", nullptr));
        warningLabel->setText(QCoreApplication::translate("UserMainMenu", "<html><head/><body><p>WARNING</p></body></html>", nullptr));
        revealTxtButton->setText(QCoreApplication::translate("UserMainMenu", "...", nullptr));
        hiddenLabel->setText(QCoreApplication::translate("UserMainMenu", "<html><head/><body><p>The only way<br/>back is to <br/>logout,<br/>that's why I've <br/>provided<br/>the quick links<br/>in case that's<br/>what you were<br/>looking for! <br/>Clicking them<br/>won't <br/>log you out!</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMainMenu: public Ui_UserMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMAINMENU_H
