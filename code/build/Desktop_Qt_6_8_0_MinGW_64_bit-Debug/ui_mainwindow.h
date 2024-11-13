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
    QLabel *label;
    QPushButton *goalsButton;
    QPushButton *calcButton;
    QPushButton *linksButton;
    QPushButton *tipsButton;
    QPushButton *termButton;
    QPushButton *tutorButton;
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
        userButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;               \n"
"border-radius: 15px;       \n"
"padding: 10px 20px;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 581, 81));
        QFont font2;
        font2.setPointSize(40);
        label->setFont(font2);
        goalsButton = new QPushButton(centralwidget);
        goalsButton->setObjectName("goalsButton");
        goalsButton->setGeometry(QRect(350, 210, 131, 121));
        goalsButton->setFont(font1);
        goalsButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;               \n"
"border-radius: 15px;       \n"
"padding: 10px 20px;"));
        calcButton = new QPushButton(centralwidget);
        calcButton->setObjectName("calcButton");
        calcButton->setGeometry(QRect(850, 210, 131, 121));
        QFont font3;
        font3.setPointSize(12);
        calcButton->setFont(font3);
        calcButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;               \n"
"border-radius: 15px;       \n"
"padding: 10px 20px;"));
        linksButton = new QPushButton(centralwidget);
        linksButton->setObjectName("linksButton");
        linksButton->setGeometry(QRect(600, 210, 131, 121));
        linksButton->setFont(font1);
        linksButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;               \n"
"border-radius: 15px;       \n"
"padding: 10px 20px;"));
        tipsButton = new QPushButton(centralwidget);
        tipsButton->setObjectName("tipsButton");
        tipsButton->setGeometry(QRect(350, 410, 131, 121));
        tipsButton->setFont(font1);
        tipsButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;               \n"
"border-radius: 15px;       \n"
"padding: 10px 20px;"));
        termButton = new QPushButton(centralwidget);
        termButton->setObjectName("termButton");
        termButton->setGeometry(QRect(100, 410, 131, 121));
        termButton->setFont(font);
        termButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;               \n"
"border-radius: 15px;       \n"
"padding: 10px 20px;"));
        tutorButton = new QPushButton(centralwidget);
        tutorButton->setObjectName("tutorButton");
        tutorButton->setGeometry(QRect(600, 410, 131, 121));
        tutorButton->setFont(font1);
        tutorButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;               \n"
"border-radius: 15px;       \n"
"padding: 10px 20px;"));
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
        userButton->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome.", nullptr));
        goalsButton->setText(QCoreApplication::translate("MainWindow", "Workout\n"
"Goals", nullptr));
        calcButton->setText(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        linksButton->setText(QCoreApplication::translate("MainWindow", "Links", nullptr));
        tipsButton->setText(QCoreApplication::translate("MainWindow", "Tips", nullptr));
        termButton->setText(QCoreApplication::translate("MainWindow", "Terminology", nullptr));
        tutorButton->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        menuHello->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
