#include "MazeCell.h"
#include <QDebug>

MazeCell::MazeCell(int recivedEdgeSize):
						cellImage(recivedEdgeSize,recivedEdgeSize)
{
	edgeSize = recivedEdgeSize;
}

//Установка нужного изображения для ячейки
void MazeCell::setImage(QString path)
{
	cellImage.load("graphics/wall.png");
	setPixmap(cellImage);
}

//Функция возвращает размер грания ячейки на карте
int MazeCell::getEdgeSize()
{
	return edgeSize;
}