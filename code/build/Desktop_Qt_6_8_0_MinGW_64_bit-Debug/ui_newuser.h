/********************************************************************************
** Form generated from reading UI file 'newuser.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWUSER_H
#define UI_NEWUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewUser
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QLabel *nameLabel;
    QLabel *passLabel;
    QLabel *hintLabel;
    QLabel *heightLabel;
    QLabel *weightLabel;
    QLabel *caloricLabel;
    QLineEdit *nameBox;
    QLineEdit *passBox;
    QLineEdit *hintBox;
    QLineEdit *heightBox;
    QLineEdit *weightBox;
    QLineEdit *caloricBox;
    QPushButton *backButton;
    QPushButton *enterButton;
    QComboBox *heightUnit;
    QComboBox *weightUnit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewUser)
    {
        if (NewUser->objectName().isEmpty())
            NewUser->setObjectName("NewUser");
        NewUser->resize(1203, 721);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/flame-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        NewUser->setWindowIcon(icon);
        centralwidget = new QWidget(NewUser);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 301, 61));
        QFont font;
        font.setPointSize(40);
        titleLabel->setFont(font);
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(100, 210, 71, 31));
        QFont font1;
        font1.setPointSize(15);
        nameLabel->setFont(font1);
        passLabel = new QLabel(centralwidget);
        passLabel->setObjectName("passLabel");
        passLabel->setGeometry(QRect(100, 320, 111, 31));
        passLabel->setFont(font1);
        hintLabel = new QLabel(centralwidget);
        hintLabel->setObjectName("hintLabel");
        hintLabel->setGeometry(QRect(100, 430, 471, 41));
        hintLabel->setFont(font1);
        heightLabel = new QLabel(centralwidget);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(760, 210, 81, 41));
        heightLabel->setFont(font1);
        weightLabel = new QLabel(centralwidget);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(760, 320, 91, 41));
        weightLabel->setFont(font1);
        caloricLabel = new QLabel(centralwidget);
        caloricLabel->setObjectName("caloricLabel");
        caloricLabel->setGeometry(QRect(760, 430, 161, 21));
        caloricLabel->setFont(font1);
        nameBox = new QLineEdit(centralwidget);
        nameBox->setObjectName("nameBox");
        nameBox->setGeometry(QRect(100, 250, 231, 28));
        passBox = new QLineEdit(centralwidget);
        passBox->setObjectName("passBox");
        passBox->setGeometry(QRect(100, 360, 231, 28));
        hintBox = new QLineEdit(centralwidget);
        hintBox->setObjectName("hintBox");
        hintBox->setGeometry(QRect(100, 470, 231, 28));
        heightBox = new QLineEdit(centralwidget);
        heightBox->setObjectName("heightBox");
        heightBox->setGeometry(QRect(760, 250, 231, 28));
        weightBox = new QLineEdit(centralwidget);
        weightBox->setObjectName("weightBox");
        weightBox->setGeometry(QRect(760, 360, 231, 28));
        caloricBox = new QLineEdit(centralwidget);
        caloricBox->setObjectName("caloricBox");
        caloricBox->setGeometry(QRect(760, 470, 231, 28));
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
        enterButton->setGeometry(QRect(480, 570, 151, 51));
        QFont font3;
        font3.setPointSize(11);
        enterButton->setFont(font3);
        enterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #333333;\n"
"color: #09f522;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #09f522;;\n"
"color: white;\n"
"}"));
        heightUnit = new QComboBox(centralwidget);
        heightUnit->addItem(QString());
        heightUnit->addItem(QString());
        heightUnit->setObjectName("heightUnit");
        heightUnit->setGeometry(QRect(1000, 247, 61, 31));
        heightUnit->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
""));
        weightUnit = new QComboBox(centralwidget);
        weightUnit->addItem(QString());
        weightUnit->addItem(QString());
        weightUnit->setObjectName("weightUnit");
        weightUnit->setGeometry(QRect(1000, 360, 61, 31));
        weightUnit->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
""));
        NewUser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewUser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        NewUser->setMenuBar(menubar);
        statusbar = new QStatusBar(NewUser);
        statusbar->setObjectName("statusbar");
        NewUser->setStatusBar(statusbar);

        retranslateUi(NewUser);

        QMetaObject::connectSlotsByName(NewUser);
    } // setupUi

    void retranslateUi(QMainWindow *NewUser)
    {
        NewUser->setWindowTitle(QCoreApplication::translate("NewUser", "Forge", nullptr));
        titleLabel->setText(QCoreApplication::translate("NewUser", "New User.", nullptr));
        nameLabel->setText(QCoreApplication::translate("NewUser", "Name:", nullptr));
        passLabel->setText(QCoreApplication::translate("NewUser", "Password:", nullptr));
        hintLabel->setText(QCoreApplication::translate("NewUser", "Hint (to be used if password is forgotten):", nullptr));
        heightLabel->setText(QCoreApplication::translate("NewUser", "Height:", nullptr));
        weightLabel->setText(QCoreApplication::translate("NewUser", "Weight:", nullptr));
        caloricLabel->setText(QCoreApplication::translate("NewUser", "Caloric Intake:", nullptr));
        backButton->setText(QCoreApplication::translate("NewUser", "Back", nullptr));
        enterButton->setText(QCoreApplication::translate("NewUser", "Enter", nullptr));
        heightUnit->setItemText(0, QCoreApplication::translate("NewUser", "cm", nullptr));
        heightUnit->setItemText(1, QCoreApplication::translate("NewUser", "ft", nullptr));

        weightUnit->setItemText(0, QCoreApplication::translate("NewUser", "cm", nullptr));
        weightUnit->setItemText(1, QCoreApplication::translate("NewUser", "ft", nullptr));

    } // retranslateUi

};

namespace Ui {
    class NewUser: public Ui_NewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWUSER_H
