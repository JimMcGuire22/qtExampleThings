#####
##
## @Author:Jim McGuire
## Rev History
## Issue       Date         Author          Description
## Initial      06-30-23    J. McGuire      Inital Creation.
QT = core

CONFIG += c++17 cmdline

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += \
        includes

SOURCES += \
        src/FEgui_CalculatorWidget.cpp \
        src/main.cpp

HEADERS += \
    includes/FEgui_AbstractCalculatorWidget.h \
    includes/FEgui_CalculatorWidget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

