#ifndef EVENT_HANDLER_H
#define EVENT_HANDLER_H
#include <QKeyEvent>

#include <QObject>
/** \class EventHandler
* \brief Класс, выполняющий обработку событий.
*
* Класс обрабатывающий все события, которые приходят в приложение
*/
class EventHandler : public QObject{
	Q_OBJECT
public:
	/**
	* Переопределенный метод из Qt. Занимается обработкой всех событий, 
  * приходящих в приложение
	*/
	bool eventFilter(QObject *, QEvent *);
};

#endif