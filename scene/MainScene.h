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
    void									gamerDown();
    void									gamerRight();
    void									gamerLeft();
    int                   max_player_offset(int direction);
};

#endif // MAINSCENE_H
