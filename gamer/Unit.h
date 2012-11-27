#ifndef UNIT_H
#define UNIT_H
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

/** \class Unit
* \brief Класс объекта на сцене 
*
* Содержит методы, присущие всем объектам сцены
*/

class Unit : public QGraphicsPixmapItem{
public:
  /**
  * Конструктор создает изображение игрока, устанавливает точку, вокруг которой 
  * будет осуществляться поворот 
  */
  Unit( const char * );
  /**
  * метод который возвращает ширину спрайта
  */
  inline int width(){ return image.width(); };
  /** 
  * метод который возвращает длину спрайта
  */
  inline int height(){ return image.height(); };
private:
  /**
  * Атрибут в котором хранится спрайт объекта
  */
  QPixmap image;    
};

#endif