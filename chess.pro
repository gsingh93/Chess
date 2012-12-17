TEMPLATE = app
TARGET = 
DEPENDPATH += . headers source
INCLUDEPATH += . headers

QMAKE_CLEAN += chess

# Input
HEADERS += headers/bishop.h \
           headers/board.h \
           headers/king.h \
           headers/knight.h \
           headers/pawn.h \
           headers/piece.h \
           headers/queen.h \
           headers/rook.h \
           headers/square.h
SOURCES += source/bishop.cpp \
           source/board.cpp \
           source/king.cpp \
           source/knight.cpp \
           source/main.cpp \
           source/pawn.cpp \
           source/piece.cpp \
           source/queen.cpp \
           source/rook.cpp \
           source/square.cpp
RESOURCES += Resources.qrc
