#ifndef Entity_h
#define Entity_h

#include <iostream>
#include <vector>
#include <cstdint>

#include "Component.h"

class Entity
{

public:
  Entity(int value);
  ~Entity();

  void addComponent(Component component); //You need a pointer/reference to pass objects?
  void printComponents();
  void checkAccess();

private:

  std::vector<Component> components;
  int userNumber;
  uint32_t signature;

};

#endif
