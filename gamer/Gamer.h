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
  QPixmap  				image;
  int getDeltaOffset();
	void gamerUp();
  void gamerDown();
  void gamerRight();
  void gamerLeft();
//  int max_player_offset(int direction);
private:
  int width();
  int height();
  int delta;
};


#endif // GAMER_H
