QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SortingAlgs.cpp \
    login.cpp \
    main.cpp \
    MainWindow.cpp \
    CS1C_Vector_Templated_v3.cpp \
    newshape.cpp \
    parser.cpp \
    renderarea.cpp \
    savechanges.cpp

HEADERS += \
    MainWindow.h \
    SortingAlgs.h \
    circle.h \
    line.h \
    login.h \
    newshape.h \
    parser.h \
    polygon.h \
    polyline.h \
    renderarea.h \
    savechanges.h \
    text.h \
    vector.h \
    shape.h \
    rectangle.h \
    square.h \
    ellipse.h

FORMS += \
    MainWindow.ui \
    login.ui \
    newshape.ui \
    savechanges.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    output.txt \
    shape_input_file_specs.txt \
    shapes.txt

RESOURCES += \
    myResource.qrc
