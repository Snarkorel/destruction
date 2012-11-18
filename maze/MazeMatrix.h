//Класс описывает ячейку лабиринта
#ifndef MAZEMATRIX_H
#define MAZEMATRIX_H
#include <QString>
#include <QStringList>

class MazeMatrix
{
		QStringList  	cells;
		int 					columns;
		int						rows;
	public:
		void 					setMatrixFromFile(QString);
		int 					columnsCount();
		int 					rowsCount();
		void 					checkMazeValid();
		bool					isMaze(int,int);
};

#endif // MAZEMATRIX_H