#ifndef UNIT_H
#define UNIT_H
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Unit : public QGraphicsPixmapItem{
public:
	Unit( QObject * parent = 0 );
	Unit( const char * );
	inline int width(){ return image.width(); };
  inline int height(){ return image.height(); };
private:
	QPixmap image;		
};

#endif