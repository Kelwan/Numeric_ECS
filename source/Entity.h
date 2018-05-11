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

  //void add_component();

  void _addcomponent(std::string nameType,
    Component* componentContainer);



  template<typename componentT, typename ...ctorArgsT>
  inline auto add_component (ctorArgsT... ctorArgs)
  {
    static_assert(std::is_base_of<Component, componentT>::value,
    "componentT is not a valid type (Component)");

     _addcomponent(componentT::get_component_name(),
        new componentT{ctorArgs...});
  };

  void printComponents();

// Avoid object slicing, use is_base_of to find root class

private:

  std::vector<Component*> components;

  int userNumber;
  uint32_t entity_id = 0;

};

//extern Entity myGlobalEntity;

#endif
