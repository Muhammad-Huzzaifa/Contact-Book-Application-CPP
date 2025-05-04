QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcontactingroupwindow.cpp \
    addcontactwindow.cpp \
    addgroupwindow.cpp \
    address.cpp \
    contact.cpp \
    contactbook.cpp \
    contactsingroupwindow.cpp \
    detailsofcontactingroup.cpp \
    detailswindow.cpp \
    editwindow.cpp \
    groupswindow.cpp \
    main.cpp \
    openingwindow.cpp \
    searchhistorywindow.cpp \
    searchwindow.cpp

HEADERS += \
    Vector.h \
    addcontactingroupwindow.h \
    addcontactwindow.h \
    addgroupwindow.h \
    address.h \
    contact.h \
    contactbook.h \
    contactsingroupwindow.h \
    detailsofcontactingroup.h \
    detailswindow.h \
    editwindow.h \
    groupswindow.h \
    openingwindow.h \
    searchhistorywindow.h \
    searchwindow.h

FORMS += \
    addcontactingroupwindow.ui \
    addcontactwindow.ui \
    addgroupwindow.ui \
    contactsingroupwindow.ui \
    detailsofcontactingroup.ui \
    detailswindow.ui \
    editwindow.ui \
    groupswindow.ui \
    openingwindow.ui \
    searchhistorywindow.ui \
    searchwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
