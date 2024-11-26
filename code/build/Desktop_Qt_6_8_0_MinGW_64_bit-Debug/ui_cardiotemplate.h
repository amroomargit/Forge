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
#include <QtWidgets/QComboBox>
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
    QWidget *workoutWidget;
    QWidget *W5;
    QLabel *W6;
    QLabel *W3;
    QLabel *W4;
    QWidget *W7;
    QPushButton *W11;
    QLabel *W8;
    QLabel *W9;
    QLabel *W10;
    QPushButton *W1;
    QComboBox *W2;
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
        workoutWidget = new QWidget(scrollAreaWidgetContents);
        workoutWidget->setObjectName("workoutWidget");
        workoutWidget->setGeometry(QRect(20, 20, 561, 211));
        workoutWidget->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        W5 = new QWidget(workoutWidget);
        W5->setObjectName("W5");
        W5->setGeometry(QRect(20, 10, 521, 41));
        W5->setStyleSheet(QString::fromUtf8("background-color: #bababa;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        W6 = new QLabel(W5);
        W6->setObjectName("W6");
        W6->setGeometry(QRect(0, 0, 511, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        W6->setFont(font);
        W6->setStyleSheet(QString::fromUtf8("color:white"));
        W3 = new QLabel(workoutWidget);
        W3->setObjectName("W3");
        W3->setGeometry(QRect(20, 60, 71, 41));
        QFont font1;
        font1.setBold(true);
        W3->setFont(font1);
        W3->setStyleSheet(QString::fromUtf8("color:white"));
        W4 = new QLabel(workoutWidget);
        W4->setObjectName("W4");
        W4->setGeometry(QRect(340, 60, 81, 41));
        W4->setFont(font1);
        W4->setStyleSheet(QString::fromUtf8("color:white"));
        W7 = new QWidget(workoutWidget);
        W7->setObjectName("W7");
        W7->setGeometry(QRect(20, 100, 491, 41));
        W7->setStyleSheet(QString::fromUtf8("background-color: #bababa;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        W11 = new QPushButton(W7);
        W11->setObjectName("W11");
        W11->setGeometry(QRect(430, 4, 51, 31));
        W11->setToolTipDuration(-7);
        W11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #bababa;\n"
"    color: #7e7e7e;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0eb63e;\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0eb63e;\n"
"    color: white;\n"
"}\n"
""));
        W11->setCheckable(true);
        W8 = new QLabel(W7);
        W8->setObjectName("W8");
        W8->setGeometry(QRect(6, -1, 51, 41));
        W8->setFont(font1);
        W8->setStyleSheet(QString::fromUtf8("color:white"));
        W9 = new QLabel(W7);
        W9->setObjectName("W9");
        W9->setGeometry(QRect(140, 0, 81, 41));
        W9->setFont(font1);
        W9->setStyleSheet(QString::fromUtf8("color:white"));
        W10 = new QLabel(W7);
        W10->setObjectName("W10");
        W10->setGeometry(QRect(330, 0, 61, 41));
        W10->setFont(font1);
        W10->setStyleSheet(QString::fromUtf8("color:white"));
        W1 = new QPushButton(workoutWidget);
        W1->setObjectName("W1");
        W1->setGeometry(QRect(20, 160, 121, 41));
        QFont font2;
        font2.setPointSize(9);
        W1->setFont(font2);
        W1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #bababab;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     border: 1px solid white \n"
"}"));
        W2 = new QComboBox(workoutWidget);
        W2->addItem(QString());
        W2->addItem(QString());
        W2->setObjectName("W2");
        W2->setGeometry(QRect(170, 56, 81, 41));
        W2->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 841, 91));
        QFont font3;
        font3.setPointSize(40);
        titleLabel->setFont(font3);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1080, 20, 71, 41));
        backButton->setFont(font2);
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
        QFont font4;
        font4.setPointSize(11);
        backButton_2->setFont(font4);
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
        W6->setText(QCoreApplication::translate("CardioTemplate", "000000000000000000000000000000000000001", nullptr));
        W3->setText(QCoreApplication::translate("CardioTemplate", "Set", nullptr));
        W4->setText(QCoreApplication::translate("CardioTemplate", "Reps", nullptr));
        W11->setText(QCoreApplication::translate("CardioTemplate", "\342\234\223", nullptr));
        W8->setText(QCoreApplication::translate("CardioTemplate", "1", nullptr));
        W9->setText(QCoreApplication::translate("CardioTemplate", "1001", nullptr));
        W10->setText(QCoreApplication::translate("CardioTemplate", "8", nullptr));
        W1->setText(QCoreApplication::translate("CardioTemplate", "+ Add Set", nullptr));
        W2->setItemText(0, QCoreApplication::translate("CardioTemplate", "lbs", nullptr));
        W2->setItemText(1, QCoreApplication::translate("CardioTemplate", "kgs", nullptr));

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
