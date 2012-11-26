//Класс описывает ячейку лабиринта
#ifndef MAZECELL_H
#define MAZECELL_H
#include <QGraphicsPixmapItem>
#include <QString>
#include <QPixmap>

class MazeCell:public QGraphicsPixmapItem{
private:
 	int edgeSize;
 	QPixmap cellImage;
public:
		MazeCell(int);
		int	getEdgeSize();
		void setImage(QString);
};

#endif // MAZECELL_H