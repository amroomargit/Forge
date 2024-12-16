/********************************************************************************
** Form generated from reading UI file 'tips.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPS_H
#define UI_TIPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tips
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QPushButton *backButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Tips)
    {
        if (Tips->objectName().isEmpty())
            Tips->setObjectName("Tips");
        Tips->resize(1203, 721);
        centralwidget = new QWidget(Tips);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(60, 70, 131, 91));
        QFont font;
        font.setPointSize(40);
        titleLabel->setFont(font);
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(1080, 30, 83, 31));
        QFont font1;
        font1.setPointSize(8);
        backButton->setFont(font1);
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 110, 971, 471));
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);
        Tips->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Tips);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        Tips->setMenuBar(menubar);
        statusbar = new QStatusBar(Tips);
        statusbar->setObjectName("statusbar");
        Tips->setStatusBar(statusbar);

        retranslateUi(Tips);

        QMetaObject::connectSlotsByName(Tips);
    } // setupUi

    void retranslateUi(QMainWindow *Tips)
    {
        Tips->setWindowTitle(QCoreApplication::translate("Tips", "MainWindow", nullptr));
        titleLabel->setText(QCoreApplication::translate("Tips", "Tips.", nullptr));
        backButton->setText(QCoreApplication::translate("Tips", "Back", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tips: public Ui_Tips {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPS_H
