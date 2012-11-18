#ifndef MAINSCENE_H
#define MAINSCENE_H
#include <QGraphicsScene>

class Gamer;
class Maze;

class MainScene:public QGraphicsScene
{
  Q_OBJECT
  // QGraphicsPixmapItem * gamerImage;
  Gamer 							*	gamer;
  Maze								* maze;
    
public:
	void									createMaze();
  void									setBackground(int cellSize = 50);
  void									gamerUp();
  void									gamerDown();
  void									gamerRight();
  void									gamerLeft();
};

#endif // MAINSCENE_H
