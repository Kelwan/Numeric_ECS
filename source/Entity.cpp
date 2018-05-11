

#include "Entity.h"

#include <iostream>
#include <string>

// Entity myGlobalEntity(1);

Entity::Entity(int value)
{
  userNumber = value;
}

Entity::~Entity()
{

}

void Entity::printComponents()
{
  for(auto it = components.begin(); it != components.end(); it++)
  {
    auto& component = *it;
    std::cout << "Component name is: " << component->get_component_name()
    << std::endl;
  }

  //for(auto& component : entity.components) {

	//}

}


//If I use Component_Container (base component class) as my argument, it
//won't recognize name as a value. Is object slicing occuring??
void Entity::_addcomponent(std::string name, Component* componentContainer)
{
  components.push_back(componentContainer);
}
