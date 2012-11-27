#ifndef IMMOVABLEUNIT_H
#define IMMOVABLEUNIT_H
#include "Unit.h"

/** \class ImmovableUnit
* \brief Класс неподвижного юнита
*
* содержит приватные флаги разрушаемости и состояния
* содержит методы, позволяющие получить значения этих флагов
*/

class ImmovableUnit : public Unit
{
public:
  /**
  * Конструктор создает изображение юнита
  * В качестве параметра принимает путь к файлу
  * В конструкторе флагам присваивается значение true
  */
  ImmovableUnit( const char * );
  /**
  * Метод, который возвращает состояние флага разрушаемости
  */
  bool getDestructibleFlag();
  /**
  * Метод, который возвращает состояние флага "живости" юнита
  */
  bool getAliveFlag();
private:
  /**
  * Флаг, обозначающий возможность разрушения юнита
  */
  bool destructible;
  /**
  * Флаг, обозначающий, что юнит "жив"
  */
  bool alive;
};

#endif // IMMOVABLEUNIT_H
