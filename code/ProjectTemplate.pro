QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addnewworkoutdialog.cpp \
    calculator.cpp \
    cardiotemplate.cpp \
    links.cpp \
    main.cpp \
    mainwindow.cpp \
    newuser.cpp \
    returninguser.cpp \
    terminology.cpp \
    tips.cpp \
    tutorial.cpp \
    usermainmenu.cpp \
    userswindow.cpp \
    weightlifttemplate.cpp \
    wltdialog.cpp \
    workoutgoals.cpp \
    workoutwidget.cpp

HEADERS += \
    TextPage.h \
    addnewworkoutdialog.h \
    calculator.h \
    cardiotemplate.h \
    links.h \
    mainwindow.h \
    newuser.h \
    returninguser.h \
    terminology.h \
    tips.h \
    tutorial.h \
    usermainmenu.h \
    userswindow.h \
    weightlifttemplate.h \
    wltdialog.h \
    workoutgoals.h \
    workoutwidget.h

FORMS += \
    addnewworkoutdialog.ui \
    calculator.ui \
    cardiotemplate.ui \
    links.ui \
    mainwindow.ui \
    newuser.ui \
    returninguser.ui \
    terminology.ui \
    tips.ui \
    tutorial.ui \
    usermainmenu.ui \
    userswindow.ui \
    weightlifttemplate.ui \
    wltdialog.ui \
    workoutgoals.ui \
    workoutwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

QT += sql

