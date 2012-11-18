#ifndef GAMER_H
#define GAMER_H
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Gamer:public QGraphicsPixmapItem
{
    // Q_OBJECT
		QPixmap  				image;
public:
    Gamer( QObject *parent = 0 );
    int							width();
    int							height();
};


#endif // GAMER_H
