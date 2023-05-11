QT       += core gui

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Souvenir.cpp \
    allinfo.cpp \
    dbmanager.cpp \
    displayinfo.cpp \
    displayteam.cpp \
    filteredteams.cpp \
    graph.cpp \
    graphtraversals.cpp \
    login.cpp \
    main.cpp \
    maintenance.cpp \
    mainwindow.cpp \
    modifysouvenirs.cpp \
    modifystadiums.cpp \
    planvacation.cpp \
    teamtablemodel.cpp \
    tripplanner.cpp

HEADERS += \
    Souvenir.h \
    allinfo.h \
    dbmanager.h \
    displayinfo.h \
    displayteam.h \
    filteredteams.h \
    graph.h \
    graphtraversals.h \
    login.h \
    maintenance.h \
    mainwindow.h \
    modifysouvenirs.h \
    modifystadiums.h \
    planvacation.h \
    teamtablemodel.h \
    tripplanner.h

FORMS += \
    allinfo.ui \
    displayinfo.ui \
    displayteam.ui \
    filteredteams.ui \
    graphtraversals.ui \
    login.ui \
    maintenance.ui \
    mainwindow.ui \
    planvacation.ui \
    tripplanner.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
