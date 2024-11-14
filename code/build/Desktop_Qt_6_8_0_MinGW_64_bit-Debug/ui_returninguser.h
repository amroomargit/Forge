/********************************************************************************
** Form generated from reading UI file 'returninguser.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNINGUSER_H
#define UI_RETURNINGUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OldUser
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QLineEdit *passBox;
    QLabel *passLabel;
    QLabel *forgotLabel;
    QLabel *deleteLabel;
    QLineEdit *deleteBox;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OldUser)
    {
        if (OldUser->objectName().isEmpty())
            OldUser->setObjectName("OldUser");
        OldUser->resize(1203, 721);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/flame-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        OldUser->setWindowIcon(icon);
        centralwidget = new QWidget(OldUser);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 601, 71));
        QFont font;
        font.setPointSize(40);
        titleLabel->setFont(font);
        passBox = new QLineEdit(centralwidget);
        passBox->setObjectName("passBox");
        passBox->setGeometry(QRect(290, 213, 321, 41));
        passLabel = new QLabel(centralwidget);
        passLabel->setObjectName("passLabel");
        passLabel->setGeometry(QRect(100, 210, 181, 41));
        QFont font1;
        font1.setPointSize(15);
        passLabel->setFont(font1);
        forgotLabel = new QLabel(centralwidget);
        forgotLabel->setObjectName("forgotLabel");
        forgotLabel->setGeometry(QRect(110, 270, 151, 20));
        forgotLabel->setStyleSheet(QString::fromUtf8("color: #0000EE;"));
        deleteLabel = new QLabel(centralwidget);
        deleteLabel->setObjectName("deleteLabel");
        deleteLabel->setGeometry(QRect(100, 455, 141, 41));
        deleteLabel->setFont(font1);
        deleteLabel->setStyleSheet(QString::fromUtf8("color: red;"));
        deleteBox = new QLineEdit(centralwidget);
        deleteBox->setObjectName("deleteBox");
        deleteBox->setGeometry(QRect(290, 460, 321, 41));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(60, 590, 83, 31));
        QFont font2;
        font2.setPointSize(8);
        backButton->setFont(font2);
        backButton->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        OldUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OldUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        OldUser->setMenuBar(menubar);
        statusbar = new QStatusBar(OldUser);
        statusbar->setObjectName("statusbar");
        OldUser->setStatusBar(statusbar);

        retranslateUi(OldUser);

        QMetaObject::connectSlotsByName(OldUser);
    } // setupUi

    void retranslateUi(QMainWindow *OldUser)
    {
        OldUser->setWindowTitle(QCoreApplication::translate("OldUser", "Forge", nullptr));
        titleLabel->setText(QCoreApplication::translate("OldUser", "hello", nullptr));
        passLabel->setText(QCoreApplication::translate("OldUser", "Enter Password:", nullptr));
        forgotLabel->setText(QCoreApplication::translate("OldUser", "Forgot your password?", nullptr));
        deleteLabel->setText(QCoreApplication::translate("OldUser", "Delete User:", nullptr));
        deleteBox->setPlaceholderText(QCoreApplication::translate("OldUser", "Enter Password to Proceed", nullptr));
        backButton->setText(QCoreApplication::translate("OldUser", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OldUser: public Ui_OldUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNINGUSER_H
