#include "ImmovableUnit.h"

ImmovableUnit::ImmovableUnit( const char * _file ) : Unit( _file )
{
  destructible=true;
  alive=true;
}

bool ImmovableUnit::getDestructibleFlag()
{
  return destructible;
}

bool ImmovableUnit::getAliveFlag()
{
  return alive;
}
