TEMPLATE = app
TARGET = ClassGenerator

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    mainwin.cpp \
    codewin.cpp

HEADERS += \
    mainwin.h \
    codewin.h
