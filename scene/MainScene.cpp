#include "MainScene.h"
#include <QKeyEvent>
#include <QColor>
#include <QBrush>
#include <QGraphicsView>
#include "gamer/Gamer.h"
#include "maze/Maze.h"
#include <QGraphicsPixmapItem>
#include <QDebug>

//TODO: Потом сюда нормальную текстуру натянем
void MainScene::setBackground(int cellSize)
{
	QColor firstColor;
	QColor secondColor;

	int width = views().first()->width();
	int height = views().first()->height();
	
	//Добавление изображения игрока на сцену
	setSceneRect(0,0,width,height);
	gamer = new Gamer;
  addItem(gamer);
  gamer->setPos(100,100);
  createMaze();
}

void MainScene::createMaze()
{
	maze = new Maze();
	maze->loadMazeFromFile("matrix");
	maze->setMazeToScene(this);
}
