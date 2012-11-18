#include <QFile>
#include <QByteArray>
#include "MazeMatrix.h"

void MazeMatrix::setMatrixFromFile(QString inputAddress)
{
	QFile inputFile(inputAddress);
	
	if (!inputFile.exists())
	{
		throw "Can not open file";
	}
	
	inputFile.open(QIODevice::ReadOnly);

	while (!inputFile.atEnd())
	{
		cells<<inputFile.readLine(100);
	}
	//Обрезаем символ переноса строки
	cells.replaceInStrings(QRegExp("\n"), "");
	
	checkMazeValid();
	
	columns = cells.first().length();
	rows 		=	cells.size();
}

int MazeMatrix::columnsCount()
{
	return columns
}

int MazeMatrix::rowsCount()
{
	return rows;
}

//Проверка того, что матрица валидная
void MazeMatrix::checkMazeValid()
{
	int firstRowSize = cells.first().length();
	//Цикл проверяет со второй строчки т.к. первая принимается за образец
	for (int i=1;i<cells.size();i++)
	{
		if (cells.at(i).length() != firstRowSize)
		{
			throw "Invalid maze matrix";
		}
	}
}

//Функция проверяет является ли ячейка стеной
bool MazeMatrix::isMaze(int i, int j)
{
	if (cells.at(i)[j]==QChar('0'))
	{
		return false;
	}
	else
	{
		return true;
	}
}