QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ash.cpp \
    bullet.cpp \
    enemy.cpp \
    introduction.cpp \
    main.cpp \
    mainwindow.cpp \
    map.cpp \
    maps.cpp \
    options.cpp \
    things.cpp

HEADERS += \
    ash.h \
    bullet.h \
    config.h \
    enemy.h \
    introduction.h \
    mainwindow.h \
    map.h \
    maps.h \
    options.h \
    things.h

FORMS += \
    introduction.ui \
    mainwindow.ui \
    maps.ui \
    options.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
