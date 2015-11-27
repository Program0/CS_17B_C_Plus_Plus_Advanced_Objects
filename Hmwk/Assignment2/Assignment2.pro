#-------------------------------------------------
#
# Project created by QtCreator 2015-09-22T20:24:43
#
#-------------------------------------------------

QT += core

QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT +=widgets

TARGET = Assignment2

CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    myarraybase.cpp \
    myarrayderived.cpp

HEADERS += \
    myarrayabstract.h \
    myarraybase.h \
    myarrayderived.h

