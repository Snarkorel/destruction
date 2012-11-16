#ifndef GAMER_H
#define GAMER_H
#include <QObject>
#include <QPixmap>


class Gamer:public QObject{
    Q_OBJECT
public:
    Gamer( QObject *parent = 0 );
    QPixmap  				image;
    int width();
    int height();
    int delta_w;
    int delta_h;
};


#endif // GAMER_H
