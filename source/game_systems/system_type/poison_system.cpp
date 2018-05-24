#include "poison_system.h"
#include "./source/game_systems/component_type/health_component.h"
#include <iostream>

poison_system::poison_system(int poison_level) : System()
{
  name = "poison_system";
  level = poison_level;
  damage = level * 10;

  components_for_process.push_back("poison_component");
  components_for_process.push_back("health_component");
  
}

poison_system::~poison_system()
{


}


void poison_system::process(Entity& entity, std::vector<Component_Container*> components)
{
  
  Component* component = components[1]->component;
  
  auto* healthComponent = reinterpret_cast<health_component*>(component);
  healthComponent->subtractHealth(this->get_damage());
  std::cout << "Health: " << healthComponent->getHealth() << std::endl;
}



int poison_system::get_level()
{
  return level;
}

int poison_system::get_damage()
{
  return damage;
}
