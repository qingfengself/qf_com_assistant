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
        mainwindow.cpp \
    dialog_config_recflow.cpp

HEADERS  += mainwindow.h \
    dialog_config_recflow.h

FORMS    += mainwindow.ui \
    dialog_config_recflow.ui

RC_ICONS = app.ico #add app icon
