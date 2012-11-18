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

//TODO: Это нужно будет в отдельный класс унести (moveHandler)
//Чтобы не было задержки перед повторным срабатыванием нужно создать несколько флагов, которые будут отвечать за зажатость/отпущенность клавиши
//Нужно будет запускать таймер, который будет проверять состояние флагов и вызывать методы меняющие координаты пиксмапа

int MainScene::max_player_offset(int direction)
{
  int offset=gamer->getDeltaOffset();
  if (direction==0 && gamer->y()-gamer->getDeltaOffset()<0) {offset=gamer->y();}
  if (direction==1 && gamer->y()+gamer->getDeltaOffset()>height()) {offset=height()-gamer->y();}
  if (direction==2 && gamer->x()+gamer->getDeltaOffset()>width()) {offset=width()-gamer->x();}
  if (direction==3 && (gamer->x()-gamer->getDeltaOffset())<0) {offset=gamer->x();}
  return offset;
}

//Потом надо будет убрать вычитание, но у меня почему-то неправильно работает суммирование отрицательного числа
void MainScene::gamerUp()
{
  gamer->setRotation(0);
  gamer->setY(gamer->y()-max_player_offset(0));
}

void MainScene::gamerDown()
{
  gamer->setRotation(180);
  gamer->setY(gamer->y()+max_player_offset(1));
}

void MainScene::gamerRight()
{
  gamer->setRotation(90);
  gamer->setX(gamer->x()+max_player_offset(2));
}

void MainScene::gamerLeft()
{
  gamer->setRotation(270);
  gamer->setX(gamer->x()-max_player_offset(3));
}

void MainScene::createMaze()
{
	maze = new Maze();
	maze->loadMazeFromFile("matrix");
	maze->setMazeToScene(this);
}
