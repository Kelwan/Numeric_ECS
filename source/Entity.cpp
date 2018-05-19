

#include "Entity.h"

#include <iostream>
#include <string>

// Entity myGlobalEntity(1);

Entity::Entity()
{
  
}

Entity::~Entity()
{

}

void Entity::printComponents()
{
  for(auto it = components.begin(); it != components.end(); it++)
  {
    auto& component_search = *it;
    std::cout << "Component name: " << component_search->nameType << std::endl;
  }

  //for(auto& component : entity.components) {

	//}

}

//If I use Component_Container (base component class) as my argument, it
//won't recognize name as a value. Is object slicing occuring??
void Entity::_addcomponent(std::string nameType, Component* component)
{
  components.push_back(new Component_Container(nameType, component));
}
