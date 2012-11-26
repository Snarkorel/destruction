#include <QApplication>
#include "scene/MainScene.h"
#include "widget/MainForm.h"
#include <QDebug>
/**
*	Метод main. Создает объект приложения, вызывает конструктор формы и запускает 
* обработку событий в бесконечный цикл
*/
int main(int argc, char * argv[])
{
  QApplication app(argc,argv);
  MainForm * window = new MainForm;
  return app.exec();
}
