#ifndef MAINFORM_H
#define MAINFORM_H
#include <QMainWindow>
#include <QGraphicsView>
#include "eventhandler/EventHandler.h"

class MainScene;
class QKeyEvent;

class MainForm : public QWidget
{
  Q_OBJECT
//TODO добавить метод который бы вернул указатель на сцену и вернуть ее в поле
// private
public:
	EventHandler  eventhandler;
	  MainScene *   	gamescene;
  MainForm(QWidget * parent = 0);
private:
  QGraphicsView 	graphicsview;

};
#endif // MAINFORM_H
