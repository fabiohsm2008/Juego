#-------------------------------------------------
#
# Project created by QtCreator 2016-11-14T19:56:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BOMBERMAN
TEMPLATE = app


SOURCES += main.cpp\
        game.cpp \
    instrucciones.cpp \
    dificultad.cpp

HEADERS  += game.h \
    instrucciones.h \
    dificultad.h

FORMS    += game.ui \
    instrucciones.ui \
    dificultad.ui

RESOURCES += \
    imagen.qrc
