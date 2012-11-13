#include "scene/MainScene.h"
#include "MainForm.h"
#include <QKeyEvent>

MainForm::MainForm(QWidget *parent){
  setWindowTitle(trUtf8("Destruction"));
 	
 	this->gamescene = new MainScene;
 	this->graphicsview.setGeometry(0,0,400,300);
  this->graphicsview.setScene(gamescene);
  this->gamescene->setBackground();
  this->graphicsview.show();
//FIXME: Нужно работать через фокус. Пока оставил так, но надо будет пофиксить
  grabKeyboard();
}
//TODO: Обработку событий нужно вынести в отдельный класс
void MainForm::keyPressEvent(QKeyEvent *event){
	switch (event->key()){
    case Qt::Key_Up: {gamescene->gamerUp();break;}
    case Qt::Key_Down: {gamescene->gamerDown();break;}
    case Qt::Key_Left: {gamescene->gamerLeft();break;}
    case Qt::Key_Right: {gamescene->gamerRight();break;}
	}
}
