

#include "Entity.h"

#include <iostream>
#include <string>


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

}

void Entity::_addcomponent(std::string nameType, Component* component)
{
  components.push_back(new Component_Container(nameType, component));
}
