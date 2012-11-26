#ifndef GAMER_H
#define GAMER_H
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Gamer:public QGraphicsPixmapItem
{
    // Q_OBJECT
public:
  Gamer( QObject *parent = 0 );
  void gamerUp();
  void gamerDown();
  void gamerRight();
  void gamerLeft();
  // так будет правильнее
  inline int getDeltaOffset(){ return delta; };
  inline int width(){ return image.width(); };
  inline int height(){ return image.height(); };

  int MaxPlayerOffset(int);
private:
  QPixmap image;
  int delta;
};


#endif // GAMER_H
