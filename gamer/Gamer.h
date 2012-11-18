#ifndef GAMER_H
#define GAMER_H
#include <QObject>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class Gamer:public QGraphicsPixmapItem
{
    // Q_OBJECT
public:
    Gamer( QObject *parent = 0 );
    QPixmap  				image;
    int							width();
    int							height();
    int 						azimuth();
    // void						setX(int);
    // void						setY(int);
};


#endif // GAMER_H
