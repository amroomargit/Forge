/********************************************************************************
** Form generated from reading UI file 'wltdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLTDIALOG_H
#define UI_WLTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WLTDialog
{
public:
    QPushButton *addNewWorkoutButton;
    QLineEdit *searchBar;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *xButton;

    void setupUi(QDialog *WLTDialog)
    {
        if (WLTDialog->objectName().isEmpty())
            WLTDialog->setObjectName("WLTDialog");
        WLTDialog->resize(488, 553);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/plus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        WLTDialog->setWindowIcon(icon);
        WLTDialog->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px;"));
        addNewWorkoutButton = new QPushButton(WLTDialog);
        addNewWorkoutButton->setObjectName("addNewWorkoutButton");
        addNewWorkoutButton->setGeometry(QRect(410, 70, 50, 40));
        QFont font;
        font.setPointSize(11);
        addNewWorkoutButton->setFont(font);
        addNewWorkoutButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #000000;\n"
"color: #09f522;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: #09f522;\n"
"color: white;\n"
"}"));
        searchBar = new QLineEdit(WLTDialog);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(30, 70, 361, 41));
        searchBar->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        scrollArea = new QScrollArea(WLTDialog);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(30, 140, 431, 401));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 411, 381));
        scrollArea->setWidget(scrollAreaWidgetContents);
        xButton = new QPushButton(WLTDialog);
        xButton->setObjectName("xButton");
        xButton->setGeometry(QRect(430, 10, 51, 40));
        QFont font1;
        font1.setPointSize(8);
        xButton->setFont(font1);
        xButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #000000;\n"
"color: red;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: red;  \n"
"color: white;\n"
"}"));

        retranslateUi(WLTDialog);

        QMetaObject::connectSlotsByName(WLTDialog);
    } // setupUi

    void retranslateUi(QDialog *WLTDialog)
    {
        WLTDialog->setWindowTitle(QCoreApplication::translate("WLTDialog", "New Workout Search", nullptr));
        addNewWorkoutButton->setText(QCoreApplication::translate("WLTDialog", "+", nullptr));
        searchBar->setPlaceholderText(QCoreApplication::translate("WLTDialog", "Search...", nullptr));
        xButton->setText(QCoreApplication::translate("WLTDialog", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WLTDialog: public Ui_WLTDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLTDIALOG_H
