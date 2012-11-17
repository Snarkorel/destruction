#include "Gamer.h"
#include <QPixmap>

Gamer::Gamer(QObject *parent):
										image(50,50)
{
    image.fill(Qt::green);
    int delta_w;
    int delta_h;
}


int Gamer::width()
{
  return image.width();
}

int Gamer::height()
{
  return image.height();
}
