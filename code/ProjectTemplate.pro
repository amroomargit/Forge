QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addnewworkoutdialog.cpp \
    calculator.cpp \
    main.cpp \
    mainwindow.cpp \
    newuser.cpp \
    returninguser.cpp \
    usermainmenu.cpp \
    userswindow.cpp \
    weightlifttemplate.cpp \
    wltdialog.cpp

HEADERS += \
    addnewworkoutdialog.h \
    calculator.h \
    mainwindow.h \
    newuser.h \
    returninguser.h \
    usermainmenu.h \
    userswindow.h \
    weightlifttemplate.h \
    wltdialog.h

FORMS += \
    addnewworkoutdialog.ui \
    calculator.ui \
    mainwindow.ui \
    newuser.ui \
    returninguser.ui \
    usermainmenu.ui \
    userswindow.ui \
    weightlifttemplate.ui \
    wltdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
