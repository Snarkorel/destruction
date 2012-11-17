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
	//Здесь пока что рисуем красные квадратики
	cellImage.fill(Qt::red);
	setPixmap(cellImage);
}

//Функция возвращает размер грания ячейки на карте
int MazeCell::getEdgeSize()
{
	return edgeSize;
}