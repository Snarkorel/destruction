#ifndef MAZE_H
#define MAZE_H
#include <QString>
#include "MazeMatrix.h"
#include "MazeCell.h"
#include <QMap>
#include <QPair>

class QGraphicsScene;
/** \class Maze
* \brief Класс лабиринта
*
* Класс содержит атрибуты и методы, присущие всему лабиринту.
*/
class Maze
{
  /**
  * Атрибут хранит матрицу лабиринта
  */
  MazeMatrix  											matrix;
  /**
  * Атрибут хранит ячейки лабиринта. Для доступа к ячейке используется пара
  * № строки, № колонки
  */
  QMap<QPair<int,int>,MazeCell * > 	cellsMap;
  /**
  * Метод строит изображение лабиринта на основе матрицы
  */
  void 															createImages();

public:
  /**
  * Метод принимает адрес файла с данными лабиринта и строит лабиринт на его 
  * основе
  */
	void 															loadMazeFromFile(QString);
  /**
  * Метод принимает указатель на сцену и размещает на ней лабиринт
  */
	void 															setMazeToScene(QGraphicsScene * );
};

#endif // MAZE_H