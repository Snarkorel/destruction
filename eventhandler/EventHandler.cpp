#include "EventHandler.h"
#include <QKeyEvent>
#include "widget/MainForm.h"
#include "gamer/Gamer.h"
#include "scene/MainScene.h"
//TODO подумать как избавиться от приведения типов
bool EventHandler::eventFilter( QObject * target, QEvent * event ){
	if( event -> type() == QEvent::KeyPress ){
		QKeyEvent * keyEvent = ( QKeyEvent * ) event;
		switch (keyEvent->key()){
   		case Qt::Key_Up: {((MainForm *)target)->gamescene->gamer->gamerUp();break;}
   		case Qt::Key_Down: {((MainForm *)target)->gamescene->gamer->gamerDown();break;}
   		case Qt::Key_Left: {((MainForm *)target)->gamescene->gamer->gamerLeft();break;}
   		case Qt::Key_Right: {((MainForm *)target)->gamescene->gamer->gamerRight();break;}
			} 
		}
	return true;
}
