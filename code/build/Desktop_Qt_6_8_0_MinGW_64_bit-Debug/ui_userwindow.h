/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1203, 721);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/flame-icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Dialog->setWindowIcon(icon);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 60, 171, 61));
        QFont font;
        font.setPointSize(40);
        label->setFont(font);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 210, 131, 121));
        QFont font1;
        font1.setPointSize(25);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #333333;  \n"
"color: white;               \n"
"border-radius: 15px; \n"
"padding: 10px 20px; \n"
""));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 660, 81, 31));
        QFont font2;
        font2.setPointSize(7);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #333333; \n"
"color: white;               \n"
"border-radius: 15px;       \n"
"padding: 10px 20px;        \n"
""));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Forge", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Users.", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
