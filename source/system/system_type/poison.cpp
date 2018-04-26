#include "poison.h"

poison::poison(int poison_init) : System()
{
  level = poison_init;
  damage = level * 10;
}

poison::~poison()
{


}

void poison::apply(Entity entity)
{
  

}

int poison::get_level()
{
  return level;
}

int poison::get_damage()
{
  return damage;
}
