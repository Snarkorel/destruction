SOURCES += \
    main.cpp            \
    scene/MainScene.cpp \
    widget/MainForm.cpp \
    gamer/Gamer.cpp     \
    gamer/Unit.cpp     \
    gamer/MovableUnit.cpp     \
    maze/Maze.cpp 		\
    maze/MazeMatrix.cpp \
    maze/MazeCell.cpp \
    eventhandler/EventHandler.cpp \
    gamer/ImmovableUnit.cpp

HEADERS += \
    scene/MainScene.h \
    widget/MainForm.h \
    gamer/Gamer.h 	  \
    gamer/Unit.h     \
    gamer/MovableUnit.h     \
    maze/Maze.h   	  \
    maze/MazeMatrix.h \
    maze/MazeCell.h \
    eventhandler/EventHandler.h \
    gamer/ImmovableUnit.h


DESTDIR = .
TARGET  = Destruction

OBJECTS_DIR = tmp
MOC_DIR			= tmp