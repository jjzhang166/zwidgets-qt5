#-------------------------------------------------
#
# Project created by QtCreator 2015-11-28T15:01:48
#
#-------------------------------------------------

QT       += widgets

TARGET = zwidgets-qt5
TEMPLATE = lib

include($$PWD/widgets/widgets.pri)

DEFINES += ZWIDGETS_LIBRARY
CONFIG += create_pc create_prl no_install_prl

unix {
    isEmpty(LIB_INSTALL_DIR) {
        target.path = /usr/lib
    } else {
        target.path = $$LIB_INSTALL_DIR
    }

    headers.files += widgets/*.h
    headers.path = /usr/include/zwidgets-qt5/

    QMAKE_PKGCONFIG_NAME = ZWidgets-Qt5
    QMAKE_PKGCONFIG_DESCRIPTION = widgets in Qt 5.x
    QMAKE_PKGCONFIG_LIBDIR = $$target.path
    QMAKE_PKGCONFIG_INCDIR = $$headers.path
    QMAKE_PKGCONFIG_VERSION = $$VERSION
    QMAKE_PKGCONFIG_DESTDIR = pkgconfig

    INSTALLS += target headers
}
