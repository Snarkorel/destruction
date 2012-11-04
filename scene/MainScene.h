#ifndef MAINSCENE_H
#define MAINSCENE_H
#include <QGraphicsScene>


class MainScene:public QGraphicsScene{
    Q_OBJECT
public:
    MainScene( QObject *parent = 0 );
    void AddObject( QObject *, int, int ){};
};


#endif // MAINSCENE_H
