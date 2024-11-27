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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddNewWorkoutDialog
{
public:
    QLineEdit *lineEdit;
    QPushButton *addNewWorkoutButton;
    QPushButton *xButton;

    void setupUi(QDialog *AddNewWorkoutDialog)
    {
        if (AddNewWorkoutDialog->objectName().isEmpty())
            AddNewWorkoutDialog->setObjectName("AddNewWorkoutDialog");
        AddNewWorkoutDialog->resize(450, 123);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/plus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AddNewWorkoutDialog->setWindowIcon(icon);
        AddNewWorkoutDialog->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px;"));
        lineEdit = new QLineEdit(AddNewWorkoutDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(20, 50, 321, 41));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #000000;\n"
"color: white;\n"
"border-radius: 15px;\n"
"padding: 10px 20px;"));
        addNewWorkoutButton = new QPushButton(AddNewWorkoutDialog);
        addNewWorkoutButton->setObjectName("addNewWorkoutButton");
        addNewWorkoutButton->setGeometry(QRect(350, 50, 71, 40));
        QFont font;
        font.setPointSize(8);
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
        xButton = new QPushButton(AddNewWorkoutDialog);
        xButton->setObjectName("xButton");
        xButton->setGeometry(QRect(400, 10, 41, 31));
        xButton->setFont(font);
        xButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #000000;\n"
"color: red;\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"     background-color: red;  \n"
"color: white;\n"
"}"));

        retranslateUi(AddNewWorkoutDialog);

        QMetaObject::connectSlotsByName(AddNewWorkoutDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewWorkoutDialog)
    {
        AddNewWorkoutDialog->setWindowTitle(QCoreApplication::translate("AddNewWorkoutDialog", "Add New Workout", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("AddNewWorkoutDialog", "Type New Exercise Name Here", nullptr));
        addNewWorkoutButton->setText(QCoreApplication::translate("AddNewWorkoutDialog", "Enter", nullptr));
        xButton->setText(QCoreApplication::translate("AddNewWorkoutDialog", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewWorkoutDialog: public Ui_AddNewWorkoutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWWORKOUTDIALOG_H
