#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <vector>
#include <cstdint>
#include <type_traits>

#include "component/Component.h"

class Entity
{

public:
  Entity(int value);
  ~Entity();

  //Template add component w/ is_base_of inline.
  void addComponent(Component component);
  void printComponents();
  void checkAccess();


// Avoid object slicing, use is_base_of to find root class


private:

  std::vector<Component> components;
  int userNumber;
  uint32_t signature = 0;

};

//extern Entity myGlobalEntity;

#endif
