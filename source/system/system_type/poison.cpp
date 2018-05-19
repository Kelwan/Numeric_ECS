#include "poison.h"
#include "source/component/component_type/health.h"
#include <iostream>

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


void poison::process(Entity& entity, std::vector<Component_Container*> components)
{
  Component* component = components[0]->component;

  auto* healthComponent = reinterpret_cast<health*>(component);
  healthComponent->subtractHealth(this->get_damage());
  std::cout << healthComponent->getHealth() << std::endl;
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
