#include "scene/MainScene.h"
#include "MainForm.h"
#include <QKeyEvent>
#include "eventhandler/EventHandler.h"

MainForm::MainForm(QWidget *parent)
{ 
  setWindowTitle(trUtf8("Destruction"));
 	gamescene = new MainScene;
 	graphicsview.setGeometry(0,0,800,600);
  graphicsview.setScene(gamescene);
  gamescene->setBackground();
  graphicsview.show();
  // подписка на события данного класса 
  this->installEventFilter(&eventhandler);
  grabKeyboard();
}
