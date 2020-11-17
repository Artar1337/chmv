QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bird_astrakhantcev.cpp \
    main.cpp \
    paint_astrakhantsev.cpp \
    speedpicker_astrakhantcev.cpp \
    tree_astrakhantcev.cpp

HEADERS += \
    bird_astrakhantcev.h \
    paint_astrakhantsev.h \
    speedpicker_astrakhantcev.h \
    tree_astrakhantcev.h

FORMS += \
    paint_astrakhantsev.ui \
    speedpicker_astrakhantcev.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    r.qrc
