#include "MainScene.h"
#include <QKeyEvent>
#include <QColor>
#include <QBrush>
#include <QGraphicsView>
#include "gamer/Gamer.h"
#include "maze/Maze.h"
#include <QGraphicsPixmapItem>

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
  gamerImage = addPixmap(gamer->image);
  gamerImage->setPos(100,100);
  createMaze();
}

//TODO: Это нужно будет в отдельный класс унести (moveHandler)
//Чтобы не было задержки перед повторным срабатыванием нужно создать несколько флагов, которые будут отвечать за зажатость/отпущенность клавиши
//Нужно будет запускать таймер, который будет проверять состояние флагов и вызывать методы меняющие координаты пиксмапа
void MainScene::gamerUp()
{
  gamerImage->setY(gamerImage->y()-10);
}

void MainScene::gamerDown()
{
  gamerImage->setY(gamerImage->y()+10);
}

void MainScene::gamerRight()
{
  gamerImage->setX(gamerImage->x()+10);
}

void MainScene::gamerLeft()
{
  gamerImage->setX(gamerImage->x()-10);
}

void MainScene::createMaze()
{
	maze = new Maze();
	maze->loadMazeFromFile("matrix");
	maze->setMazeToScene(this);
}