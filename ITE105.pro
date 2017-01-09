#-------------------------------------------------
#
# Project created by QtCreator 2017-01-05T15:29:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ITE105
TEMPLATE = app


SOURCES += main.cpp\
    logindialog.cpp \
    mainwindow.cpp \
    newprojectdialog.cpp \
    newprojectwelcomwidget.cpp \
    newprojectpathwidget.cpp \
    newprojectvcwidget.cpp \
    newprojectmemberwidget.cpp \
    treeview.cpp

HEADERS  += logindialog.h \
    mainwindow.h \
    newprojectdialog.h \
    newprojectwelcomwidget.h \
    newprojectpathwidget.h \
    newprojectvcwidget.h \
    newprojectmemberwidget.h \
    treeview.h

FORMS    += logindialog.ui \
    mainwindow.ui \
    newprojectdialog.ui \
    newprojectwelcomwidget.ui \
    newprojectpathwidget.ui \
    newprojectvcwidget.ui \
    newprojectmemberwidget.ui

DISTFILES +=

RESOURCES += \
    login_bg.qrc
