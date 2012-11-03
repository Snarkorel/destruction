#include "MainScene.h"
#include <QPixmap>
#include <QGraphicsSceneMouseEvent>
#include <QKeyEvent>
#include <QGraphicsItem>
#include <QtCore>
#include <QColor>
#include <QBrush>
MainScene::MainScene(QObject *parent) : QGraphicsScene(parent)
{
    this ->setBackgroundBrush(QBrush(Qt::green));
}
