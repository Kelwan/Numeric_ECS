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

//template<typename systemT>
//void System_Manager::process_entity(Entity entity)
//{

    // @NOTEs from zeke:
  // 1) Find all the components on the entity that apply to this system.
  // 2) Invoke a virtual method with those components and the entity so
  //    that derived systems can process them.

  // Ex: Applying poison to health.

  //for(std::string desired_components, )


//}

void System_Manager::_processentity(Entity& entity, System* system_process)
{
  Component_Container* component_container = nullptr;
    
  bool isFound = false;

  if(system_process->components_for_process.size() == 0)
  {
    isFound = true;
  }

  for(auto component_name : system_process->components_for_process) {
    component_container = system_process->search_for_component_type
    (entity, component_name);


    if(component_container != nullptr) {
      isFound = true;
    }

  }
  
  if(isFound) {
    system_process->process(entity, entity.components);
  }
}
