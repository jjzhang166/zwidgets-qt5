include($$PWD/private/private.pri)

CONFIG += c++11
INCLUDEPATH += $$PWD

HEADERS += \
    $$PWD/zwidgets_global.h \
    $$PWD/anchors.h \
    $$PWD/zobject.h \
    $$PWD/zwidget.h \
    $$PWD/zborder.h

SOURCES += \
    $$PWD/anchors.cpp \
    $$PWD/zobject.cpp \
    $$PWD/zwidget.cpp \
    $$PWD/zborder.cpp
