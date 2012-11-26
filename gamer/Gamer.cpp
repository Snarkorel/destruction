#include "Gamer.h"
#include <QPixmap>
#include <QGraphicsScene>

Gamer::Gamer(QObject *parent):
										image(50,50)
{
  image.load("graphics/player.png");
  setPixmap(image);
  setTransformOriginPoint(width()/2,height()/2);
  delta=10;
}

//Потом надо будет убрать вычитание, но у меня почему-то неправильно работает суммирование отрицательного числа
//TODO изменить методы так чтоб можно было передавать угол и дельту, дельту сделать 
// параметром по умолчанию для стандартных случаев и передавать ее если объект близко 
// к границе
void Gamer::gamerUp()
{
  this->setRotation(0);
  this->setY(this->y()-MaxPlayerOffset(0));
}

void Gamer::gamerDown()
{
  this->setRotation(180);
  this->setY(this->y()+MaxPlayerOffset(1));
}

void Gamer::gamerRight()
{
  this->setRotation(90);
  this->setX(this->x()+MaxPlayerOffset(2));
}

void Gamer::gamerLeft()
{
  this->setRotation(270);
  this->setX(this->x()-MaxPlayerOffset(3));
}
// проблема с перемещением крылась в этом методе поэтому он пока закоментирован 
int Gamer::MaxPlayerOffset(int direction)
{
  int offset=this->getDeltaOffset();
  if ((direction==0) && (this->y()-this->getDeltaOffset()<0)) {offset=this->y();}
  if ((direction==1) && (this->y()+this->getDeltaOffset()>scene()->height())) {offset=scene()->height()-this->y();}
  if ((direction==2) && (this->x()+this->getDeltaOffset()>scene()->width())) {offset= scene()->width()-this->x();}
  if ((direction==3) && ((this->x()-this->getDeltaOffset())<0)) {offset=this->x();}
  return offset;
}