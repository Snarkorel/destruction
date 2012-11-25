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

//Потом надо будет убрать вычитание, но у меня почему-то неправильно работает суммирование отрицательного числа
//TODO изменить методы так чтоб можно было передавать угол и дельту, дельту сделать 
// параметром по умолчанию для стандартных случаев и передавать ее если объект близко 
// к границе
void Gamer::gamerUp()
{
  this->setRotation(0);
  this->setY(this->y()-delta);
}

void Gamer::gamerDown()
{
  this->setRotation(180);
  this->setY(this->y()+delta);
}

void Gamer::gamerRight()
{
  this->setRotation(90);
  this->setX(this->x()+delta);
}

void Gamer::gamerLeft()
{
  this->setRotation(270);
  this->setX(this->x()-delta);
}
// проблема с перемещением крылась в этом методе поэтому он пока закоментирован 
/*int Gamer::max_player_offset(int direction)
{
  int offset=this->getDeltaOffset();
  if (direction==0 && this->y()-this->getDeltaOffset()<0) {offset=this->y();}
  if (direction==1 && this->y()+this->getDeltaOffset()>height()) {offset=height()-this->y();}
  if (direction==2 && this->x()+this->getDeltaOffset()>width()) {offset=width()-this->x();}
  if (direction==3 && (this->x()-this->getDeltaOffset())<0) {offset=this->x();}
  return offset;
}*/