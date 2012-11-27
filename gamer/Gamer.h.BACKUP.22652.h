#ifndef GAMER_H
#define GAMER_H
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include "MovableUnit.h"

<<<<<<< HEAD
class Gamer : public MovableUnit
{
=======
/** \class Gamer
*	\brief Класс игрока
*
* Содержит методы, присущие игроку, которым управляет пользователь
*/

class Gamer:public QGraphicsPixmapItem
{
  /**
  * Атрибут хранит объект-изображение игрока
  */
  QPixmap image;
  /**
  * Атрибут хранит максимальное расстояние, на которое может сместиться игрок за 
  * один раз.
  */
  int delta;
>>>>>>> 12abbb970a086320cfb2fec3e2a6e56a8097598a
public:
	/** 
  * Конструктор создает изображение игрока, устанавливает точку, вокруг которой 
  * будет осуществляться поворот и определяет расстояние, на которое будет 
  * смещаться игрок при движении
	*/
  Gamer( QObject *parent = 0 );
  /**
  * Поворот с сдвигом игрока вверх
  */
  void gamerUp();
  /**
  * Поворот с сдвигом игрока вниз
  */
  void gamerDown();
  /**
  * Поворот с сдвигом игрока вправо
  */
  void gamerRight();
  /**
  * Поворот с сдвигом игрока влево
  */
  void gamerLeft();
  /**
  * Метод возвращает расстояние, на которое сдвигается игрок, установленное в 
  * конструкторе
  */
  inline int getDeltaOffset(){ return delta; };
<<<<<<< HEAD
  int MaxPlayerOffset(int);
private:
  int delta;
=======
  /**
  * Метод возвращает ширину игрока
  */
  inline int width(){ return image.width(); };
  /**
  * Метод возвращает высоту игрока
  */
  inline int height(){ return image.height(); };
  /**
  * Метод возвращает принимает направление движения игрока (целое число от 0 
  * до 4) и возвращает максимальное расстояние, на которое может сдвинуться 
  * игрок в этом направлении. Используется для обработки столкновений с 
  * границами карты.
  */
  int maxPlayerOffset(int);
>>>>>>> 12abbb970a086320cfb2fec3e2a6e56a8097598a
};


#endif // GAMER_H
