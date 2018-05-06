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
    Component_Container* componentContainer);

// Put back if necessary
//inline void add_component (/*ctorArgsT... ctorArgs*/)

  //Why a Component_base instance?
  //Template add component w/ is_base_of inline.
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

  int userNumber;
  uint32_t signature = 0;

};

//extern Entity myGlobalEntity;

#endif
