#include "Unit.h"
#include <QObject>

Unit::Unit( const char * filename ) : image ( 50, 50 ){
	image.load( filename );
	setPixmap( image );
  setTransformOriginPoint(width()/2,height()/2);

}