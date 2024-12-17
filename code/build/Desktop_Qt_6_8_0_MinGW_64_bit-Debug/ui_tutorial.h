/********************************************************************************
** Form generated from reading UI file 'tutorial.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUTORIAL_H
#define UI_TUTORIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tutorial
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QLabel *titleLabel;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tutorial)
    {
        if (Tutorial->objectName().isEmpty())
            Tutorial->setObjectName("Tutorial");
        Tutorial->resize(1203, 721);
        centralwidget = new QWidget(Tutorial);
        centralwidget->setObjectName("centralwidget");
        backButton = new QPushButton(centralwidget);
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
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 241, 91));
        QFont font1;
        font1.setPointSize(40);
        titleLabel->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 140, 971, 521));
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);
        label->setWordWrap(true);
        Tutorial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tutorial);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        Tutorial->setMenuBar(menubar);
        statusbar = new QStatusBar(Tutorial);
        statusbar->setObjectName("statusbar");
        Tutorial->setStatusBar(statusbar);

        retranslateUi(Tutorial);

        QMetaObject::connectSlotsByName(Tutorial);
    } // setupUi

    void retranslateUi(QMainWindow *Tutorial)
    {
        Tutorial->setWindowTitle(QCoreApplication::translate("Tutorial", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("Tutorial", "Back", nullptr));
        titleLabel->setText(QCoreApplication::translate("Tutorial", "Tutorial.", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tutorial: public Ui_Tutorial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUTORIAL_H
