#ifndef MAINFORM_H
#define MAINFORM_H
#include <QMainWindow>
#include <QGraphicsView>
#include "eventhandler/EventHandler.h"

class MainScene;
class QKeyEvent;

/** \class MainForm
* \brief Класс основного окна
*
* На основном окне располагаются все элементы, которые может видеть пользователь
*/

class MainForm : public QWidget
{
  Q_OBJECT
//TODO добавить метод который бы вернул указатель на сцену и вернуть ее в поле
// private
  /**
  * Атрибут хранит представление, на котором размещается сцена
  */
  QGraphicsView graphicsview;
public:
  /**
  * Атрибут хранит обработчик событий
  */
	EventHandler eventhandler;
  /**
  * Атрибут хранит указатель на сцену
  */
	MainScene * gamescene;
  /**
  * Конструктор основного окна. Создает все, что содержится в основном окне
  */
  MainForm();
  
};
#endif // MAINFORM_H
