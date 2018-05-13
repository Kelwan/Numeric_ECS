#include "poison.h"

poison::poison(int poison_init) : System()
{
  name = "poison";
  level = poison_init;
  damage = level * 10;

  components_for_process.push_back("health");
}

poison::~poison()
{


}


void poison::process(Entity& entity, std::vector<Component*> components)
{
  // Component* firstComponent = components[1];
  //health* healthComponent = reinterpret_cast<health*>(firstComponent);
  //health->subtractHealth(30);
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
