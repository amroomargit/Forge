/********************************************************************************
** Form generated from reading UI file 'weightlifttemplate.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEIGHTLIFTTEMPLATE_H
#define UI_WEIGHTLIFTTEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeightliftTemplate
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WeightliftTemplate)
    {
        if (WeightliftTemplate->objectName().isEmpty())
            WeightliftTemplate->setObjectName("WeightliftTemplate");
        WeightliftTemplate->resize(1203, 721);
        centralwidget = new QWidget(WeightliftTemplate);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"    background: #333333;          /* Background color of the scrollbar track */\n"
"    width: 12px;                  /* Width of the vertical scrollbar */\n"
"    border-radius: 15px;          /* Rounded scrollbar edges */\n"
"    margin: 0px 3px 0px 3px;      /* Margin to prevent scrollbar from touching edges */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: black;            /* Color of the draggable handle */\n"
"    min-height: 20px;             /* Minimum height of the handle */\n"
"    border-radius: 15px;          /* Rounding of the handle */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: none;             /* Remove arrow buttons (optional) */\n"
"    height: 0px;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: #333333;          /* Background for empty scrollable area */\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"    background: #333333;          /* Background"
                        " color of the scrollbar track */\n"
"    height: 12px;                 /* Height of the horizontal scrollbar */\n"
"    border-radius: 15px;          /* Rounded scrollbar edges */\n"
"    margin: 3px 0px 3px 0px;      /* Margin to prevent scrollbar from touching edges */\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background: black;            /* Color of the draggable handle */\n"
"    min-width: 20px;              /* Minimum width of the handle */\n"
"    border-radius: 15px;          /* Rounding of the handle */\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {\n"
"    background: none;             /* Remove arrow buttons (optional) */\n"
"    width: 0px;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"    background: #333333;          /* Background for empty scrollable area */\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1179, 647));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 851, 91));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 210, 271, 51));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        WeightliftTemplate->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WeightliftTemplate);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        WeightliftTemplate->setMenuBar(menubar);
        statusbar = new QStatusBar(WeightliftTemplate);
        statusbar->setObjectName("statusbar");
        WeightliftTemplate->setStatusBar(statusbar);

        retranslateUi(WeightliftTemplate);

        QMetaObject::connectSlotsByName(WeightliftTemplate);
    } // setupUi

    void retranslateUi(QMainWindow *WeightliftTemplate)
    {
        WeightliftTemplate->setWindowTitle(QCoreApplication::translate("WeightliftTemplate", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("WeightliftTemplate", "New Weightlifting Template.", nullptr));
        pushButton->setText(QCoreApplication::translate("WeightliftTemplate", "+ Add New Excercise", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WeightliftTemplate: public Ui_WeightliftTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEIGHTLIFTTEMPLATE_H
