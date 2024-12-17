/********************************************************************************
** Form generated from reading UI file 'cardiotemplate.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDIOTEMPLATE_H
#define UI_CARDIOTEMPLATE_H

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

class Ui_CardioTemplate
{
public:
    QWidget *centralwidget;
    QPushButton *saveNewName;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *addNewExerciseButton;
    QLineEdit *templateNameBox;
    QPushButton *backButton;
    QLabel *titleLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CardioTemplate)
    {
        if (CardioTemplate->objectName().isEmpty())
            CardioTemplate->setObjectName("CardioTemplate");
        CardioTemplate->resize(1203, 721);
        centralwidget = new QWidget(CardioTemplate);
        centralwidget->setObjectName("centralwidget");
        saveNewName = new QPushButton(centralwidget);
        saveNewName->setObjectName("saveNewName");
        saveNewName->setGeometry(QRect(990, 207, 61, 41));
        QFont font;
        font.setPointSize(9);
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
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 981, 391));
        scrollArea->setWidget(scrollAreaWidgetContents);
        addNewExerciseButton = new QPushButton(centralwidget);
        addNewExerciseButton->setObjectName("addNewExerciseButton");
        addNewExerciseButton->setGeometry(QRect(100, 210, 221, 41));
        QFont font1;
        font1.setPointSize(11);
        addNewExerciseButton->setFont(font1);
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
        templateNameBox = new QLineEdit(centralwidget);
        templateNameBox->setObjectName("templateNameBox");
        templateNameBox->setGeometry(QRect(670, 207, 301, 41));
        templateNameBox->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px;\n"
""));
        templateNameBox->setMaxLength(12);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1080, 30, 71, 41));
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
        QFont font2;
        font2.setPointSize(40);
        titleLabel->setFont(font2);
        CardioTemplate->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CardioTemplate);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        CardioTemplate->setMenuBar(menubar);
        statusbar = new QStatusBar(CardioTemplate);
        statusbar->setObjectName("statusbar");
        CardioTemplate->setStatusBar(statusbar);

        retranslateUi(CardioTemplate);

        QMetaObject::connectSlotsByName(CardioTemplate);
    } // setupUi

    void retranslateUi(QMainWindow *CardioTemplate)
    {
        CardioTemplate->setWindowTitle(QCoreApplication::translate("CardioTemplate", "MainWindow", nullptr));
        saveNewName->setText(QCoreApplication::translate("CardioTemplate", "Set", nullptr));
        addNewExerciseButton->setText(QCoreApplication::translate("CardioTemplate", "+ Add New Exercise", nullptr));
        templateNameBox->setPlaceholderText(QCoreApplication::translate("CardioTemplate", "Set Template Name", nullptr));
        backButton->setText(QCoreApplication::translate("CardioTemplate", "Back", nullptr));
        titleLabel->setText(QCoreApplication::translate("CardioTemplate", "Default Name.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardioTemplate: public Ui_CardioTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDIOTEMPLATE_H
