#include "Gamer.h"
#include <QPixmap>

Gamer::Gamer(QObject *parent):
										image(50,50)
{
  image.load("graphics/player.png");
}
