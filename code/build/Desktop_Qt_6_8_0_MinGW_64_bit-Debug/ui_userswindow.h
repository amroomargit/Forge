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
    QLabel *label;
    QPushButton *pushButton;
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 181, 61));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 210, 131, 121));
        QFont font1;
        font1.setPointSize(32);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"\n"
"\n"
"\n"
""));
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
        label->setText(QCoreApplication::translate("UsersWindow", "Users.", nullptr));
        pushButton->setText(QCoreApplication::translate("UsersWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UsersWindow: public Ui_UsersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERSWINDOW_H
