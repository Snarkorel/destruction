#ifndef MAINSCENE_H
#define MAINSCENE_H
#include <QGraphicsScene>

class Gamer;
class Maze;

class MainScene:public QGraphicsScene
{
  Q_OBJECT
  Gamer 							*	gamer;
  Maze								* maze;
    
public:
  void									createMaze();
  void									setBackground(int cellSize = 50);
  void									gamerUp();
  void									gamerDown();
  void									gamerRight();
  void									gamerLeft();
  int                   max_player_offset(int direction);
};

#endif // MAINSCENE_H
