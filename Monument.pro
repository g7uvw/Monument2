#-------------------------------------------------
#
# Project created by QtCreator 2014-12-16T10:36:28
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Monument
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    diametersdialog.cpp \
    speeddialog.cpp \
    transferlengthdialog.cpp \
    motor.cpp \
    serialdialog.cpp

HEADERS  += mainwindow.h \
    diametersdialog.h \
    speeddialog.h \
    transferlengthdialog.h \
    messages.h \
    motor.h \
    serialdialog.h

FORMS    += mainwindow.ui \
    diametersdialog.ui \
    speeddialog.ui \
    transferlengthdialog.ui \
    serialdialog.ui
