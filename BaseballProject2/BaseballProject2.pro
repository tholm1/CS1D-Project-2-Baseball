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
    login.cpp \
    main.cpp \
    maintenance.cpp \
    mainwindow.cpp \
    modifysouvenirs.cpp \
    modifystadiums.cpp \
    planvacation.cpp \
    souvenir2.cpp \
    teamtablemodel.cpp

HEADERS += \
    Souvenir.h \
    allinfo.h \
    dbmanager.h \
    displayinfo.h \
    displayteam.h \
    filteredteams.h \
    login.h \
    maintenance.h \
    mainwindow.h \
    modifysouvenirs.h \
    modifystadiums.h \
    planvacation.h \
    souvenir2.h \
    teamtablemodel.h

FORMS += \
    allinfo.ui \
    displayinfo.ui \
    displayteam.ui \
    filteredteams.ui \
    login.ui \
    maintenance.ui \
    mainwindow.ui \
    modifysouvenirs.ui \
    modifystadiums.ui \
    planvacation.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
