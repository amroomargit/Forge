/********************************************************************************
** Form generated from reading UI file 'olduser.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OLDUSER_H
#define UI_OLDUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
        forgotLabel->setGeometry(QRect(100, 270, 151, 20));
        forgotLabel->setStyleSheet(QString::fromUtf8("color: #0000EE;"));
        deleteLabel = new QLabel(centralwidget);
        deleteLabel->setObjectName("deleteLabel");
        deleteLabel->setGeometry(QRect(100, 500, 141, 41));
        deleteLabel->setFont(font1);
        deleteBox = new QLineEdit(centralwidget);
        deleteBox->setObjectName("deleteBox");
        deleteBox->setGeometry(QRect(290, 505, 321, 41));
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
        titleLabel->setText(QString());
        passLabel->setText(QCoreApplication::translate("OldUser", "Enter Password:", nullptr));
        forgotLabel->setText(QCoreApplication::translate("OldUser", "Forgot your password?", nullptr));
        deleteLabel->setText(QCoreApplication::translate("OldUser", "Delete User:", nullptr));
        deleteBox->setPlaceholderText(QCoreApplication::translate("OldUser", "Enter Password to Proceed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OldUser: public Ui_OldUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OLDUSER_H
