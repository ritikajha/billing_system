
QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = billing_system2.pro
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    currency.cpp \
    customerdetail.cpp \
    deleteitem.cpp \
        main.cpp \
        mainwindow.cpp \
    additem.cpp \
    management.cpp \
    sell.cpp \
    selladditem.cpp \
    totalstock.cpp \
    updateitem.cpp \
    mydb.cpp

HEADERS += \
    currency.h \
    customerdetail.h \
    deleteitem.h \
        mainwindow.h \
    additem.h \
    management.h \
    sell.h \
    selladditem.h \
    totalstock.h \
    updateitem.h \
    mydb.h

FORMS += \
    currency.ui \
    customerdetail.ui \
    deleteitem.ui \
        mainwindow.ui \
    additem.ui \
    management.ui \
    sell.ui \
    selladditem.ui \
    totalstock.ui \
    updateitem.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
