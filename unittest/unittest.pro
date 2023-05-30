QT += widgets testlib

SOURCES = maintest.cpp

#install
target.path = $$[QT_INSTALL_EXAMPLES]/unittest
INSTALLS += target

DISTFILES += \
    QMakeList
