/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *userButton;
    QLabel *titleLabel;
    QPushButton *goalsButton;
    QPushButton *calcButton;
    QPushButton *linksButton;
    QPushButton *tipsButton;
    QPushButton *termButton;
    QPushButton *tutorButton;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuHello;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1203, 721);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/flame-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        userButton = new QPushButton(centralwidget);
        userButton->setObjectName("userButton");
        userButton->setGeometry(QRect(100, 210, 131, 121));
        QFont font1;
        font1.setPointSize(13);
        userButton->setFont(font1);
        userButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 291, 71));
        QFont font2;
        font2.setPointSize(40);
        titleLabel->setFont(font2);
        goalsButton = new QPushButton(centralwidget);
        goalsButton->setObjectName("goalsButton");
        goalsButton->setGeometry(QRect(350, 210, 131, 121));
        goalsButton->setFont(font1);
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
        calcButton = new QPushButton(centralwidget);
        calcButton->setObjectName("calcButton");
        calcButton->setGeometry(QRect(850, 210, 131, 121));
        QFont font3;
        font3.setPointSize(12);
        calcButton->setFont(font3);
        calcButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        linksButton->setGeometry(QRect(600, 210, 131, 121));
        linksButton->setFont(font1);
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
        tipsButton = new QPushButton(centralwidget);
        tipsButton->setObjectName("tipsButton");
        tipsButton->setGeometry(QRect(350, 410, 131, 121));
        tipsButton->setFont(font1);
        tipsButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        termButton = new QPushButton(centralwidget);
        termButton->setObjectName("termButton");
        termButton->setGeometry(QRect(100, 410, 131, 121));
        termButton->setFont(font);
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
        tutorButton = new QPushButton(centralwidget);
        tutorButton->setObjectName("tutorButton");
        tutorButton->setGeometry(QRect(600, 410, 131, 121));
        tutorButton->setFont(font1);
        tutorButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(122, 180, 81, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(830, 410, 351, 91));
        QFont font4;
        font4.setPointSize(11);
        label_3->setFont(font4);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(880, 180, 81, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        menuHello = new QMenu(menubar);
        menuHello->setObjectName("menuHello");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHello->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Forge", nullptr));
        userButton->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Welcome.", nullptr));
        goalsButton->setText(QCoreApplication::translate("MainWindow", "Workout\n"
"Goals", nullptr));
        calcButton->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        linksButton->setText(QCoreApplication::translate("MainWindow", "Links", nullptr));
        tipsButton->setText(QCoreApplication::translate("MainWindow", "Tips", nullptr));
        termButton->setText(QCoreApplication::translate("MainWindow", "Terminology", nullptr));
        tutorButton->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Functional!", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Note: Everything other than Users and \n"
"Calculator is \n"
"a basic page just filled with text, to be \n"
"implemented by final", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Functional!", nullptr));
        menuHello->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
