
include(../../common.pri)

QT += core gui charts widgets

TARGET = drone_vision_ui
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    domain_ui.cpp \
    sandbox_window.cpp \
    scene_ui.cpp

HEADERS += \
    domain_ui.h \
    sandbox_window.h \
    scene_ui.h

addLibrary(../drone_vision)
addLibrary(../../core_ui)
addLibrary(../../core)
