#ifndef MOVABLEUNIT_H
#define MOVABLEUNIT_H
#include "Unit.h"

enum Rotation { Up = 0,
				Right = 90,
				Down = 180,
				Left =270 };


class MovableUnit : public Unit
{
public:
	MovableUnit( const char * );
	void Move( int, int, int );

};

#endif