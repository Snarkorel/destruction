#include "Gamer.h"
#include <QPixmap>

Gamer::Gamer(QObject *parent):
										image(50,50)
{
  image.load("graphics/player.png");
  setPixmap(image);
  setTransformOriginPoint(width()/2,height()/2);
  delta=10;
}

int Gamer::getDeltaOffset()
{
  return Gamer::delta;
}

int Gamer::width()
{
  return image.width();
}

int Gamer::height()
{
  return image.height();
}
