#ifndef Entity_h
#define Entity_h

#include <iostream>
#include <vector>
#include "Component.h"

class Entity
{

public:
  Entity(int value);
  ~Entity();

  void addComponent(Component component); //You need a pointer/reference to pass objects?
  void printComponents();

private:

  std::vector<Component> components;
  int userNumber;

};

#endif
