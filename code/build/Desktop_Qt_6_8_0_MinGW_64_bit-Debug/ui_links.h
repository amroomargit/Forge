/********************************************************************************
** Form generated from reading UI file 'links.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKS_H
#define UI_LINKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Links
{
public:
    QWidget *centralwidget;
    QPushButton *backButton;
    QLabel *titleLabel;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Links)
    {
        if (Links->objectName().isEmpty())
            Links->setObjectName("Links");
        Links->resize(1203, 721);
        centralwidget = new QWidget(Links);
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
        titleLabel->setGeometry(QRect(60, 70, 191, 91));
        QFont font1;
        font1.setPointSize(40);
        titleLabel->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 200, 971, 471));
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);
        label->setTextFormat(Qt::TextFormat::RichText);
        label->setOpenExternalLinks(true);
        Links->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Links);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1203, 25));
        Links->setMenuBar(menubar);
        statusbar = new QStatusBar(Links);
        statusbar->setObjectName("statusbar");
        Links->setStatusBar(statusbar);

        retranslateUi(Links);

        QMetaObject::connectSlotsByName(Links);
    } // setupUi

    void retranslateUi(QMainWindow *Links)
    {
        Links->setWindowTitle(QCoreApplication::translate("Links", "MainWindow", nullptr));
        backButton->setText(QCoreApplication::translate("Links", "Back", nullptr));
        titleLabel->setText(QCoreApplication::translate("Links", "Links.", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Links: public Ui_Links {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKS_H
