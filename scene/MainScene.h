#ifndef MAINSCENE_H
#define MAINSCENE_H
#include <QGraphicsScene>


class Gamer;
class Maze;
class EventHandler;

class MainScene:public QGraphicsScene
{
  //TODO сделать метод который бы вернул указатель на gamer  
  // вернуть геймера в private  и внести соответсвующие изменения в класс обработчик
  Q_OBJECT
  
  Maze * maze;
    
public:
  Gamer * gamer;
  void createMaze();
  void setBackground(int cellSize = 50);
  
};

#endif // MAINSCENE_H
