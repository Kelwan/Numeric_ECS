#pragma once


#include <iostream>
#include <vector>
#include <cstdint>
#include <type_traits>
#include <atomic>

#include "./source/core/component/Component.h"


namespace iterator
{
  using entity_id = uint32_t;
}

class System_Manager;
class System;

class Entity
{

public:
  Entity();
  ~Entity();

  friend class System_Manager;
  friend class System;


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



private:

  std::vector<Component_Container*> components;


  iterator::entity_id _entityid = 0;

};

