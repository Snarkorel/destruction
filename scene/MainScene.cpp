#include "MainScene.h"
#include <QKeyEvent>
#include <QColor>
#include <QBrush>
#include <QGraphicsView>
#include "gamer/Gamer.h"
#include <QGraphicsPixmapItem>

//TODO: Потом сюда нормальную текстуру натянем
void MainScene::setBackground(int cellSize)
{
	QColor firstColor;
	QColor secondColor;
	
	int width = views().first()->width();
	int height = views().first()->height();
	//Создание "шахматки"
	for(int i = 0; i <= height/cellSize; i++){
	
		if (i % 2 == 0){firstColor=Qt::black;secondColor=Qt::white;}
		else {firstColor=Qt::white;secondColor=Qt::black;}
		
		for(int j = 0; j <= height/cellSize; j++){
			this->addRect(j*cellSize*2,i*cellSize,cellSize,cellSize,QPen(),QBrush(firstColor));
			this->addRect(j*cellSize*2+cellSize,i*cellSize,cellSize,cellSize,QPen(),QBrush(secondColor));
		}
	}
	//Добавление изображения игрока на сцену
	setSceneRect(0,0,width,height);
  gamer = new Gamer(this);
  gamerImage = addPixmap(gamer->image);
  gamerImage->setPos(100,100);
}

//TODO: Это нужно будет в отдельный класс унести (moveHandler)
//Чтобы не было задержки перед повторным срабатыванием нужно создать несколько флагов, которые будут отвечать за зажатость/отпущенность клавиши
//Нужно будет запускать таймер, который будет проверять состояние флагов и вызывать методы меняющие координаты пиксмапа

//Пока что здесь хреновая реализация с магическими числами
int MainScene::max_player_offset(int direction)
{
  int offset=10;
  if (direction==0 && gamerImage->y()-10<0) {offset=gamerImage->y();}
  if (direction==1 && gamerImage->y()+10>height()) {offset=height()-gamerImage->y();}
  if (direction==2 && gamerImage->x()+10>width()) {offset=width()-gamerImage->x();}
  if (direction==3 && gamerImage->x()-10<0) {offset=gamerImage->x();}
  return offset;
}

void MainScene::gamerUp()
{
  gamerImage->setY(gamerImage->y()-max_player_offset(0));
}

void MainScene::gamerDown()
{
  gamerImage->setY(gamerImage->y()+max_player_offset(1));
}

void MainScene::gamerRight()
{
  gamerImage->setX(gamerImage->x()+max_player_offset(2));
}

void MainScene::gamerLeft()
{
  gamerImage->setX(gamerImage->x()-max_player_offset(3));
}
