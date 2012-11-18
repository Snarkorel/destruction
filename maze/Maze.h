//Класс обеспечивает построение лабиринта
#ifndef MAZE_H
#define MAZE_H
#include <QString>
#include "MazeMatrix.h"
#include "MazeCell.h"
#include <QMap>
#include <QPair>

class QGraphicsScene;

class Maze
{
    MazeMatrix  											matrix;
    QPair<int,int>										cellPosition;
    //Ячейки лабиринта храним в мапе, ключ - пара из номера стобца и строки
    QMap<QPair<int,int>,MazeCell * > 	cellsMap;
    void 															createImages();

	public:
		void 															loadMazeFromFile(QString);
		void 															setMazeToScene(QGraphicsScene * );
};

#endif // MAZE_H