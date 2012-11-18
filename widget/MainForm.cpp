#include "scene/MainScene.h"
#include "MainForm.h"
#include <QKeyEvent>

MainForm::MainForm(QWidget *parent)
{
  setWindowTitle(trUtf8("Destruction"));
 	
 	gamescene = new MainScene;
 	graphicsview.setGeometry(0,0,800,600);
  graphicsview.setScene(gamescene);
  gamescene->setBackground();
  graphicsview.show();
//FIXME: Нужно работать через фокус. Пока оставил так, но надо будет пофиксить
  grabKeyboard();
}
//TODO: Обработку событий нужно вынести в отдельный класс
void MainForm::keyPressEvent(QKeyEvent *event)
{
	switch (event->key()){
    case Qt::Key_Up: {gamescene->gamerUp();break;}
    case Qt::Key_Down: {gamescene->gamerDown();break;}
    case Qt::Key_Left: {gamescene->gamerLeft();break;}
    case Qt::Key_Right: {gamescene->gamerRight();break;}
	}
}
