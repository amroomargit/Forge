/********************************************************************************
** Form generated from reading UI file 'userswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERSWINDOW_H
#define UI_USERSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UsersWindow
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *backButton;
    QPushButton *addUserButton;
    QLabel *titleLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UsersWindow)
    {
        if (UsersWindow->objectName().isEmpty())
            UsersWindow->setObjectName("UsersWindow");
        UsersWindow->resize(1203, 721);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/flame-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        UsersWindow->setWindowIcon(icon);
        centralwidget = new QWidget(UsersWindow);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 4, 1201, 661));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1199, 659));
        backButton = new QPushButton(scrollAreaWidgetContents);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1080, 30, 83, 31));
        QFont font;
        font.setPointSize(8);
        backButton->setFont(font);
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
        addUserButton = new QPushButton(scrollAreaWidgetContents);
        addUserButton->setObjectName("addUserButton");
        addUserButton->setGeometry(QRect(100, 210, 131, 121));
        QFont font1;
        font1.setPointSize(32);
        addUserButton->setFont(font1);
        addUserButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #bababa;\n"
"color: black;\n"
"}\n"
"\n"
""));
        titleLabel = new QLabel(scrollAreaWidgetContents);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 181, 71));
        QFont font2;
        font2.setPointSize(40);
        titleLabel->setFont(font2);
        scrollArea->setWidget(scrollAreaWidgetContents);
        UsersWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UsersWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        UsersWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UsersWindow);
        statusbar->setObjectName("statusbar");
        UsersWindow->setStatusBar(statusbar);

        retranslateUi(UsersWindow);

        QMetaObject::connectSlotsByName(UsersWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UsersWindow)
    {
        UsersWindow->setWindowTitle(QCoreApplication::translate("UsersWindow", "Forge", nullptr));
        backButton->setText(QCoreApplication::translate("UsersWindow", "Back", nullptr));
        addUserButton->setText(QCoreApplication::translate("UsersWindow", "+", nullptr));
        titleLabel->setText(QCoreApplication::translate("UsersWindow", "Users.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UsersWindow: public Ui_UsersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSWINDOW_H
