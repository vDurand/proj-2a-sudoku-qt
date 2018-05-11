#-------------------------------------------------
#
# Project created by QtCreator 2017-03-21T08:35:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sudoku-qt
TEMPLATE = app
INCLUDEPATH += ./include/
CONFIG += c++11

    MOC_DIR  = moc
OBJECTS_DIR  = obj

SOURCES += src/main.cpp\
        src/mainwindow.cpp \
    src/sudokuModel.cpp

HEADERS  += include/mainwindow.h \
    include/sudokuModel.h

FORMS    += form/mainwindow.ui

RESOURCES += \
    grids/qtgrids.qrc \
    img/img.qrc
