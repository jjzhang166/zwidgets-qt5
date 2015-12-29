#-------------------------------------------------
#
# Project created by QtCreator 2015-11-28T15:20:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include($$PWD/../widgets/widgets.pri)

TARGET = examples_zwidgets
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
