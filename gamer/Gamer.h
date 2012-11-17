#ifndef GAMER_H
#define GAMER_H
#include <QObject>
#include <QPixmap>


class Gamer:public QObject
{
    Q_OBJECT
public:
    Gamer( QObject *parent = 0 );
    QPixmap  				image;
};


#endif // GAMER_H
