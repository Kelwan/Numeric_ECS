

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
  for(int i = 0; i < components.size(); i++)
  {
    //std::cout << components[i]->name << std::endl;
  }
}

void Entity::_addcomponent(std::string name, Component_Container* componentContainer)
{
  components.push_back(componentContainer);
}
