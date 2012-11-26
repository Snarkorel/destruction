#include "MovableUnit.h"

MovableUnit::MovableUnit( const char * _file ) : Unit( _file ) {}

void MovableUnit::Move( int angle, int deltaX, int deltaY ){
	this->setRotation( angle );
  this->setY( this->y() + deltaY );
  this->setX( this->x() + deltaX );
}