/********************************************************************************
** Form generated from reading UI file 'addnewworkoutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWWORKOUTDIALOG_H
#define UI_ADDNEWWORKOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddNewWorkoutDialog
{
public:
    QPushButton *xButton;
    QPushButton *addNewWorkoutButton;
    QLineEdit *searchBar;
    QLabel *label;

    void setupUi(QDialog *AddNewWorkoutDialog)
    {
        if (AddNewWorkoutDialog->objectName().isEmpty())
            AddNewWorkoutDialog->setObjectName("AddNewWorkoutDialog");
        AddNewWorkoutDialog->resize(400, 258);
        AddNewWorkoutDialog->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px;"));
        xButton = new QPushButton(AddNewWorkoutDialog);
        xButton->setObjectName("xButton");
        xButton->setGeometry(QRect(340, 10, 51, 40));
        QFont font;
        font.setPointSize(9);
        xButton->setFont(font);
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
        addNewWorkoutButton = new QPushButton(AddNewWorkoutDialog);
        addNewWorkoutButton->setObjectName("addNewWorkoutButton");
        addNewWorkoutButton->setGeometry(QRect(160, 160, 81, 40));
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
        searchBar = new QLineEdit(AddNewWorkoutDialog);
        searchBar->setObjectName("searchBar");
        searchBar->setGeometry(QRect(20, 90, 361, 41));
        searchBar->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        label = new QLabel(AddNewWorkoutDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 251, 41));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);

        retranslateUi(AddNewWorkoutDialog);

        QMetaObject::connectSlotsByName(AddNewWorkoutDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewWorkoutDialog)
    {
        AddNewWorkoutDialog->setWindowTitle(QCoreApplication::translate("AddNewWorkoutDialog", "Dialog", nullptr));
        xButton->setText(QCoreApplication::translate("AddNewWorkoutDialog", "x", nullptr));
        addNewWorkoutButton->setText(QCoreApplication::translate("AddNewWorkoutDialog", "Add", nullptr));
        searchBar->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("AddNewWorkoutDialog", "Enter new workout name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewWorkoutDialog: public Ui_AddNewWorkoutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWWORKOUTDIALOG_H
