#-------------------------------------------------
#
# Project created by QtCreator 2018-01-15T17:10:22
#
#-------------------------------------------------

QT       += core gui serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UartAssist
TEMPLATE = app


SOURCES += main.cpp\
        uartassist.cpp \
    about.cpp \
    lorameter.cpp \
    protocol.cpp \
    serialprot.cpp \
    loraterminal.cpp \
    TCPSERVER/myclientsocket.cpp \
    TCPSERVER/mytcpserver.cpp

HEADERS  += uartassist.h \
    about.h \
    lorameter.h \
    protocol.h \
    serialprot.h \
    loraterminal.h \
    TCPSERVER/myclientsocket.h \
    TCPSERVER/mytcpserver.h \
    myhelper.h

FORMS    += uartassist.ui \
    about.ui \
    lorameter.ui \
    loraterminal.ui
RESOURCES += \
    uarticon.qrc

RC_FILE += myico.rc


CONFIG += c++11

