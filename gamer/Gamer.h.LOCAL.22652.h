#ifndef GAMER_H
#define GAMER_H
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include "MovableUnit.h"

class Gamer : public MovableUnit
{
public:
  Gamer( QObject *parent = 0 );
  void gamerUp();
  void gamerDown();
  void gamerRight();
  void gamerLeft();
  // так будет правильнее
  inline int getDeltaOffset(){ return delta; };
  int MaxPlayerOffset(int);
private:
  int delta;
};


#endif // GAMER_H
