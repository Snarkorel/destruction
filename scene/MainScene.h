#ifndef MAINSCENE_H
#define MAINSCENE_H
#include <QGraphicsScene>

class Gamer;
class Maze;
class EventHandler;
/** \class MainScene
* \brief Класс основной сцены
*
* Основная сцена содержит поле, по которому могут перемещаться объекты
*/
class MainScene:public QGraphicsScene
{
  //TODO сделать метод который бы вернул указатель на gamer  
  // вернуть геймера в private  и внести соответсвующие изменения в класс обработчик
  Q_OBJECT
  /**
  * Атрибут хранит указатель на лабиринт
  */
  Maze * maze;
  /**
  * Метод создает лабиринт и размещает его на сцене
  */
  void createMaze();

public:
  /**
  * Атрибут хранит указатель на игрока
  */
  Gamer * gamer;
  /**
  * Метод принимает размер ячейки и строит все изображение на сцене
  */
  void setBackground(int cellSize = 50);
  
};

#endif // MAINSCENE_H
