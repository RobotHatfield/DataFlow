#-------------------------------------------------
#
# Project created by QtCreator 2014-06-12T11:14:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataFlow_1_0_0_03
TEMPLATE = app


SOURCES += main.cpp \

HEADERS += \

OTHER_FILES += \
    DataFlow.GUI.pri \
    DataFlow.Core.pri \
    DataFlow.Gui.Dialogs.pri \
    DataFlow.Gui.Modules.pri \
    DataFlow.Entities.pri

include("DataFlow.Core.pri")
include("DataFlow.Entities.pri")
include("DataFlow.Gui.pri")
include("DataFlow.Gui.Dialogs.pri")
include("DataFlow.Gui.Modules.pri")
