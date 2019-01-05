TEMPLATE = app
TARGET = ClassGenerator

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    main.cpp \
    mainwin.cpp \
    codewin.cpp \
    qgroupboxdefclass.cpp \
    qgroupboxoptions.cpp \
    qgroupboxcommentary.cpp

HEADERS += \
    mainwin.h \
    codewin.h \
    qgroupboxdefclass.h \
    qgroupboxoptions.h \
    qgroupboxcommentary.h

TRANSLATIONS += \
    classgenerator_en.ts \
    classgenerator_es.ts
