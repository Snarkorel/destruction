#ifndef MAINSCENE_H
#define MAINSCENE_H
#include <QGraphicsScene>

class Gamer;

class MainScene:public QGraphicsScene{
    Q_OBJECT
    QGraphicsPixmapItem * gamerImage;
    Gamer *								gamer;
    
public:
    void									setBackground(int cellSize = 50);
    void									gamerUp();
};

#endif // MAINSCENE_H
