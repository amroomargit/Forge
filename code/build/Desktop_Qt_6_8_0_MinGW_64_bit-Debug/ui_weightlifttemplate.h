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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeightliftTemplate
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QLabel *titleLabel;
    QPushButton *addNewExerciseButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLineEdit *templateNameBox;
    QPushButton *saveNewName;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WeightliftTemplate)
    {
        if (WeightliftTemplate->objectName().isEmpty())
            WeightliftTemplate->setObjectName("WeightliftTemplate");
        WeightliftTemplate->resize(1203, 721);
        WeightliftTemplate->setToolTipDuration(1);
        centralwidget = new QWidget(WeightliftTemplate);
        centralwidget->setObjectName("centralwidget");
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1090, 40, 71, 41));
        QFont font;
        font.setPointSize(9);
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
        titleLabel->setGeometry(QRect(60, 70, 841, 91));
        QFont font1;
        font1.setPointSize(40);
        titleLabel->setFont(font1);
        addNewExerciseButton = new QPushButton(centralwidget);
        addNewExerciseButton->setObjectName("addNewExerciseButton");
        addNewExerciseButton->setGeometry(QRect(100, 210, 221, 41));
        QFont font2;
        font2.setPointSize(11);
        addNewExerciseButton->setFont(font2);
        addNewExerciseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(80, 280, 981, 391));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollBar:vertical {\n"
"    background-color: #656565;\n"
"    width: 15px; \n"
"    margin: 10px 0; \n"
"    border-radius: 15px; \n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: black;\n"
"    border-radius: 15px; \n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"    background: none; \n"
"}"));
        scrollArea->setFrameShape(QFrame::Shape::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 981, 391));
        scrollArea->setWidget(scrollAreaWidgetContents);
        templateNameBox = new QLineEdit(centralwidget);
        templateNameBox->setObjectName("templateNameBox");
        templateNameBox->setGeometry(QRect(670, 207, 301, 41));
        templateNameBox->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
""));
        templateNameBox->setMaxLength(12);
        saveNewName = new QPushButton(centralwidget);
        saveNewName->setObjectName("saveNewName");
        saveNewName->setGeometry(QRect(990, 207, 61, 41));
        saveNewName->setFont(font);
        saveNewName->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #333333;\n"
"color: #09f522;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #09f522;\n"
"color: white;\n"
"}"));
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
        backButton->setText(QCoreApplication::translate("WeightliftTemplate", "Back", nullptr));
        titleLabel->setText(QCoreApplication::translate("WeightliftTemplate", "Please Set Template Name.", nullptr));
        addNewExerciseButton->setText(QCoreApplication::translate("WeightliftTemplate", "+ Add New Exercise", nullptr));
        templateNameBox->setPlaceholderText(QCoreApplication::translate("WeightliftTemplate", "   Set Template Name", nullptr));
        saveNewName->setText(QCoreApplication::translate("WeightliftTemplate", "Set", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WeightliftTemplate: public Ui_WeightliftTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEIGHTLIFTTEMPLATE_H
