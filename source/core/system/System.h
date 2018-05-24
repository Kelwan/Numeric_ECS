#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <cstdint>
#include <string>

#include "./source/core/component/Component.h"
#include "./source/core/entity/Entity.h"


class System {

public:
  System();
  ~System();

  std::string name;

  Component_Container* search_for_component_type(Entity& entity, std::string target);


  std::vector<std::string> components_for_process;

  virtual void process(Entity& entity, std::vector<Component_Container*> components) = 0;

};


#endif
