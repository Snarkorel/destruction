#include <QString>
#include "MazeMatrix.h"
#include "Maze.h"
#include "MazeCell.h"
#include <QGraphicsScene>
#include <QDebug>

void Maze::loadMazeFromFile(QString inputString)
{
	matrix.setMatrixFromFile(inputString);
	createImages();
}

void Maze::createImages()
{
	for(int i=0;i<matrix.columnsCount();i++)
	{
		for(int j=0;j<matrix.rowsCount();j++)
		{
			MazeCell * cell = new MazeCell(50);
			
			cell->setImage("graphics/mazeCell.jpg");

			cell->setVisible(matrix.isMaze(i,j));
			
			cell->setPos(j*cell->getEdgeSize()+50,i*cell->getEdgeSize()+50);

			cellsMap.insert(QPair<int,int>(i,j),cell);
		}
	}
}

void Maze::setMazeToScene(QGraphicsScene * scene)
{
	for(int i=0;i<matrix.columnsCount();i++)
	{
		for(int j=0;j<matrix.rowsCount();j++)
		{
			scene->addItem(cellsMap.value(QPair<int,int>(i,j)));
		}
	}
}