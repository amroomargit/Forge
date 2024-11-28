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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *titleLabel;
    QPushButton *backButton;
    QPushButton *backButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CardioTemplate)
    {
        if (CardioTemplate->objectName().isEmpty())
            CardioTemplate->setObjectName("CardioTemplate");
        CardioTemplate->resize(1203, 721);
        centralwidget = new QWidget(CardioTemplate);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(80, 290, 981, 391));
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
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 841, 91));
        QFont font;
        font.setPointSize(40);
        titleLabel->setFont(font);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1080, 20, 71, 41));
        QFont font1;
        font1.setPointSize(9);
        backButton->setFont(font1);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        backButton_2 = new QPushButton(centralwidget);
        backButton_2->setObjectName("backButton_2");
        backButton_2->setGeometry(QRect(100, 210, 221, 41));
        QFont font2;
        font2.setPointSize(11);
        backButton_2->setFont(font2);
        backButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        titleLabel->setText(QCoreApplication::translate("CardioTemplate", "New Cardio Template.", nullptr));
        backButton->setText(QCoreApplication::translate("CardioTemplate", "Save", nullptr));
        backButton_2->setText(QCoreApplication::translate("CardioTemplate", "+ Add New Exercise", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardioTemplate: public Ui_CardioTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDIOTEMPLATE_H
