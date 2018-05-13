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

  friend class System;

  //void add_component();

  void _addcomponent(std::string nameType,
    Component* component);



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

  std::vector<Component_Container*> components;

  //Component_Container new_component_vector = *components[0];
  //Component_Container* new_component_vector_pointer = &new_component_vector;

  int userNumber;
  uint32_t entity_id = 0;

};

//extern Entity myGlobalEntity;

#endif
