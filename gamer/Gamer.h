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
    QPixmap  				image;
    int getDeltaOffset();
private:
    int width();
    int height();
    int delta;
};


#endif // GAMER_H
