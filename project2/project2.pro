#-------------------------------------------------
#
# Project created by QtCreator 2016-04-29T17:39:12
#
#-------------------------------------------------

QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project2
TEMPLATE = app


SOURCES += main.cpp \
    Enemy.cpp \
    Bullet.cpp \
    Score.cpp \
    Player.cpp \
    Game.cpp \
    Drum.cpp \
    Timer.cpp \
    MyTimer.cpp \
    mainwindow.cpp \
    Dialog.cpp

HEADERS  += \
    Bullet.h \
    Enemy.h \
    Score.h \
    Player.h \
    Game.h \
    Drum.h \
    Timer.h \
    MyTimer.h \
    mainwindow.h \
    Dialog.h

FORMS    += \
    mainwindow.ui \
    Dialog.ui

RESOURCES += \
    res.qrc

DISTFILES +=
