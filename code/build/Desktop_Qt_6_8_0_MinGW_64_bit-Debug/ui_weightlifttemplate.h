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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
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
    QPushButton *backButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget;
    QWidget *widget_5;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *widget_6;
    QPushButton *pushButton_2;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *backButton_4;
    QComboBox *comboBox_2;
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
"color: #09f522;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #09f522;\n"
"color: white;\n"
"}"));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 841, 91));
        QFont font1;
        font1.setPointSize(40);
        titleLabel->setFont(font1);
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
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(80, 280, 981, 341));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 981, 341));
        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 561, 211));
        widget->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(20, 10, 521, 41));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: #bababa;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        label_2 = new QLabel(widget_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 511, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color:white"));
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 60, 71, 41));
        QFont font4;
        font4.setBold(true);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color:white"));
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 60, 81, 41));
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color:white"));
        widget_6 = new QWidget(widget);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(20, 100, 491, 41));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: #bababa;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        pushButton_2 = new QPushButton(widget_6);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(430, 4, 51, 31));
        pushButton_2->setToolTipDuration(-7);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2->setCheckable(true);
        label_12 = new QLabel(widget_6);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(6, -1, 51, 41));
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("color:white"));
        label_13 = new QLabel(widget_6);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(140, 0, 81, 41));
        label_13->setFont(font4);
        label_13->setStyleSheet(QString::fromUtf8("color:white"));
        label_14 = new QLabel(widget_6);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(330, 0, 61, 41));
        label_14->setFont(font4);
        label_14->setStyleSheet(QString::fromUtf8("color:white"));
        backButton_4 = new QPushButton(widget);
        backButton_4->setObjectName("backButton_4");
        backButton_4->setGeometry(QRect(20, 160, 121, 41));
        backButton_4->setFont(font);
        backButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #bababab;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     border: 1px solid white \n"
"}"));
        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(170, 56, 81, 41));
        comboBox_2->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;"));
        scrollArea->setWidget(scrollAreaWidgetContents);
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
        backButton->setText(QCoreApplication::translate("WeightliftTemplate", "Save", nullptr));
        titleLabel->setText(QCoreApplication::translate("WeightliftTemplate", "New Weightlifting Template.", nullptr));
        backButton_2->setText(QCoreApplication::translate("WeightliftTemplate", "+ Add New Exercise", nullptr));
        label_2->setText(QCoreApplication::translate("WeightliftTemplate", "000000000000000000000000000000000000001", nullptr));
        label_5->setText(QCoreApplication::translate("WeightliftTemplate", "Set", nullptr));
        label_6->setText(QCoreApplication::translate("WeightliftTemplate", "Reps", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WeightliftTemplate", "\342\234\223", nullptr));
        label_12->setText(QCoreApplication::translate("WeightliftTemplate", "1", nullptr));
        label_13->setText(QCoreApplication::translate("WeightliftTemplate", "1001", nullptr));
        label_14->setText(QCoreApplication::translate("WeightliftTemplate", "8", nullptr));
        backButton_4->setText(QCoreApplication::translate("WeightliftTemplate", "+ Add Set", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("WeightliftTemplate", "lbs", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("WeightliftTemplate", "kgs", nullptr));

    } // retranslateUi

};

namespace Ui {
    class WeightliftTemplate: public Ui_WeightliftTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEIGHTLIFTTEMPLATE_H
