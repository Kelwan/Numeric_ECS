#include "System_Manager.h"
#include <iostream>

void System_Manager::_addsystem(System* storeSystem)
{
  stored_systems.push_back(storeSystem);
}

void System_Manager::print_systems()
{
  int i = 0;

  for(auto it = stored_systems.begin();
    it != stored_systems.end(); it++)
  {
    auto system_search = *it;
    std::cout << "System name: " <<  stored_systems[i]->name << std::endl;
  }
}

void System_Manager::_processentity(Entity& entity, System* system_process)
{
  Component_Container* component_container = nullptr;
  
  int component_count = 0;

  bool isFound = false;

  if(system_process->components_for_process.size() == 0)
  {
    isFound = true;
  }

  for(auto component_name : system_process->components_for_process) {
    component_container = system_process->search_for_component_type
    (entity, component_name, component_count);


    if(component_container != nullptr 
    && component_count == system_process->components_for_process.size()) {
      isFound = true;
    }

  }
  
  if(isFound) {
    system_process->process(entity, entity.components);
  }
}
