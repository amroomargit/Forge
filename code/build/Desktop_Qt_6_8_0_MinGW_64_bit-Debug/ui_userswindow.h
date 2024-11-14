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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UsersWindow
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QPushButton *addUserButton;
    QPushButton *backButton;
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
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 181, 71));
        QFont font;
        font.setPointSize(40);
        titleLabel->setFont(font);
        addUserButton = new QPushButton(centralwidget);
        addUserButton->setObjectName("addUserButton");
        addUserButton->setGeometry(QRect(100, 210, 131, 121));
        QFont font1;
        font1.setPointSize(32);
        addUserButton->setFont(font1);
        addUserButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"\n"
"\n"
"\n"
""));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(60, 620, 83, 31));
        QFont font2;
        font2.setPointSize(8);
        backButton->setFont(font2);
        backButton->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
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
        titleLabel->setText(QCoreApplication::translate("UsersWindow", "Users.", nullptr));
        addUserButton->setText(QCoreApplication::translate("UsersWindow", "+", nullptr));
        backButton->setText(QCoreApplication::translate("UsersWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UsersWindow: public Ui_UsersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSWINDOW_H
