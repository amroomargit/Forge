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

class Ui_ReturningUser
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
    QPushButton *enterButton;
    QPushButton *deleteButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReturningUser)
    {
        if (ReturningUser->objectName().isEmpty())
            ReturningUser->setObjectName("ReturningUser");
        ReturningUser->resize(1203, 721);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/flame-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ReturningUser->setWindowIcon(icon);
        centralwidget = new QWidget(ReturningUser);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 821, 71));
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
        backButton->setGeometry(QRect(1080, 30, 83, 31));
        QFont font2;
        font2.setPointSize(8);
        backButton->setFont(font2);
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
        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(650, 207, 101, 51));
        QFont font3;
        font3.setPointSize(11);
        enterButton->setFont(font3);
        enterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #333333;\n"
"color: #09f522;\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #09f522;\n"
"color: white;\n"
"}"));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(650, 456, 101, 51));
        deleteButton->setFont(font3);
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #333333;\n"
"color: red;\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: red;\n"
"color: white;\n"
"}"));
        ReturningUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReturningUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        ReturningUser->setMenuBar(menubar);
        statusbar = new QStatusBar(ReturningUser);
        statusbar->setObjectName("statusbar");
        ReturningUser->setStatusBar(statusbar);

        retranslateUi(ReturningUser);

        QMetaObject::connectSlotsByName(ReturningUser);
    } // setupUi

    void retranslateUi(QMainWindow *ReturningUser)
    {
        ReturningUser->setWindowTitle(QCoreApplication::translate("ReturningUser", "Forge", nullptr));
        titleLabel->setText(QString());
        passLabel->setText(QCoreApplication::translate("ReturningUser", "Enter Password:", nullptr));
        forgotLabel->setText(QCoreApplication::translate("ReturningUser", "Forgot your password?", nullptr));
        deleteLabel->setText(QCoreApplication::translate("ReturningUser", "Delete User:", nullptr));
        deleteBox->setPlaceholderText(QCoreApplication::translate("ReturningUser", "Enter Password to Proceed", nullptr));
        backButton->setText(QCoreApplication::translate("ReturningUser", "Back", nullptr));
        enterButton->setText(QCoreApplication::translate("ReturningUser", "Enter", nullptr));
        deleteButton->setText(QCoreApplication::translate("ReturningUser", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturningUser: public Ui_ReturningUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNINGUSER_H
