QT += widgets scxml
requires(qtConfig(combobox))

CONFIG += c++11

STATECHARTS = sudoku.scxml

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    notepad.cpp

HEADERS += \
    mainwindow.h \
    notepad.h

RESOURCES += \
    sudoku.qrc

# install
target.path = $$[QT_INSTALL_EXAMPLES]/scxml/sudoku
INSTALLS += target
