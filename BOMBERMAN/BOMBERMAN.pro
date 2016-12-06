#-------------------------------------------------
#
# Project created by QtCreator 2016-11-14T19:56:58
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BOMBERMAN
TEMPLATE = app


SOURCES += main.cpp\
        game.cpp \
    instrucciones.cpp \
    start.cpp \
    player.cpp \
    bomba.cpp \
    win.cpp \
    win2.cpp \
    empate.cpp

HEADERS  += game.h \
    instrucciones.h \
    start.h \
    player.h \
    bomba.h \
    win.h \
    win2.h \
    empate.h

FORMS    += game.ui \
    instrucciones.ui \
    start.ui \
    win.ui \
    win2.ui \
    empate.ui

RESOURCES += \
    imagen.qrc
