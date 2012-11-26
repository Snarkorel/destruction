#ifndef MAZECELL_H
#define MAZECELL_H
#include <QGraphicsPixmapItem>
#include <QString>
#include <QPixmap>
/** \class MazeCell
* \brief Класс ячейки лабиринта
*
* Класс содержит атрибуты и методы, присущие ячейке лабиринта
*/
class MazeCell:public QGraphicsPixmapItem
{
  /**
  * Атрибут хранит длину ребра одной ячейки
  */
  int						edgeSize;
  /**
  * Атрибут хранит изображение ячейки
  */
  QPixmap 		  cellImage;

public:
  /**
  * Конструктор ячейки лабиринта. Принимает длину ребра для ячейки и строит её 
  * изображение.
  */
								MazeCell(int);
  /**
  * Метод возвращает длину ребра ячейки
  */
	int						getEdgeSize();
  /**
  * Метод принимает путь к картинке и устанавливает её в качестве изображения 
  * ячейки лабиринта
  */
	void					setImage(QString);
};

#endif // MAZECELL_H