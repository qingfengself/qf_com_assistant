#-------------------------------------------------
#
# Project created by QtCreator 2017-09-15T17:04:31
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qf_com_assistant
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RC_ICONS = app.ico #add app icon
