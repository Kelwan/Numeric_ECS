#pragma once

#include "Entity.h"

#include <iostream>
#include <string>

Entity::Entity(int value)
{
  userNumber = value;
}

Entity::~Entity()
{

}

void Entity::addComponent(Component component)
{
  components.push_back(component);
}

void Entity::printComponents()
{
  for(int i = 0; i < components.size(); i++)
  {
    std::cout << components[i].name << std::endl;
  }
}
