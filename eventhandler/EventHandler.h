#ifndef EVENT_HANDLER_H
#define EVENT_HANDLER_H
#include <QKeyEvent>

#include <QObject>
/**
класс обработчик событий пока всех в дальнейшем нужно будет на каждый тип эвента 
делать свой обработчик
*/
class EventHandler : public QObject{
	Q_OBJECT
public:
	// функция обработчик
	bool eventFilter(QObject *, QEvent *);
};

#endif