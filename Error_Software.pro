#-------------------------------------------------
#
# Project created by QtCreator 2019-05-17T09:40:20
#
#-------------------------------------------------

QT += core gui
QT += widgets
QT += sql
QT += network
QT += printsupport
QT += quick qml 3dcore 3drender 3dinput 3dlogic 3dextras 3danimation
QTPLUGIN += qsqlmysql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Error_Software
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


INCLUDEPATH+= /usr/local/include/vtk-7.1

LIBS+=-L/usr/local/lib

SOURCES += \
        sources/Brachytherapy.cpp \
        sources/CTDosimetry.cpp \
        sources/NMDosimetry.cpp \
        sources/integradedose.cpp \
        sources/interp.cc \
        sources/main.cpp \
        sources/mainwindow.cpp \


HEADERS += \
        headers/Brachytherapy.h \
        headers/CTDosimetry.h \
        headers/NMDosimetry.h \
        headers/integradedose.h \
        headers/interp.hh \
        headers/mainwindow.h \


FORMS += \
        forms/Brachytherapy.ui \
        forms/CTDosimetry.ui \
        forms/NMDosimetry.ui \
        forms/mainwindow.ui \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    data/I123_MIBG/phantom_001.txt \
    data/I123_MIBG/time_activity_curves_I123_MIBG.txt \
    data/I131_INa1/phantom_001.txt \
    data/I131_INa1/time_activity_curves_I131_INa1.txt \
    data/I131_INa2/phantom_001.txt \
    data/I131_INa2/time_activity_curves_I131_INa2.txt \
    data/I131_MIBG/phantom_001.txt \
    data/I131_MIBG/time_activity_curves_I131_MIBG.txt \
    data/Sm153_EDTMP/phantom_001.txt \
    data/Sm153_EDTMP/time_activity_curves_Sm153_EDTMP.txt \
    data/Tc99m_MDP/phantom_001.txt \
    data/Tc99m_MDP/time_activity_curves_Tc99m_MDP.txt \
    data/excel_files/ERROR_Updated_db.xlsx \
    data/excel_files/Tc-99m_doses.xlsx \
    data/excel_files/Time activity curves.xlsx \
    icons/error.png
