/********************************************************************************
** Form generated from reading UI file 'terminology.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMINOLOGY_H
#define UI_TERMINOLOGY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Terminology
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QLabel *label;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Terminology)
    {
        if (Terminology->objectName().isEmpty())
            Terminology->setObjectName("Terminology");
        Terminology->resize(1203, 721);
        centralwidget = new QWidget(Terminology);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 381, 91));
        QFont font;
        font.setPointSize(40);
        titleLabel->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 130, 971, 471));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
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
        Terminology->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Terminology);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        Terminology->setMenuBar(menubar);
        statusbar = new QStatusBar(Terminology);
        statusbar->setObjectName("statusbar");
        Terminology->setStatusBar(statusbar);

        retranslateUi(Terminology);

        QMetaObject::connectSlotsByName(Terminology);
    } // setupUi

    void retranslateUi(QMainWindow *Terminology)
    {
        Terminology->setWindowTitle(QCoreApplication::translate("Terminology", "MainWindow", nullptr));
        titleLabel->setText(QCoreApplication::translate("Terminology", "Terminology.", nullptr));
        label->setText(QString());
        backButton->setText(QCoreApplication::translate("Terminology", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Terminology: public Ui_Terminology {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMINOLOGY_H
