#include "Gamer.h"
#include <QPixmap>

Gamer::Gamer(QObject *parent):
										image(50,50)
{
    image.fill(Qt::green);
//Пока что они не используются из-за странного поведения
    int delta_w=10;
    int delta_h=10;
}


int Gamer::width()
{
  return image.width();
}

int Gamer::height()
{
  return image.height();
}
