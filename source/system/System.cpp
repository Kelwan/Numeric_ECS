#include <iostream>

#include "System.h"

System::System() {}
System::~System() {}

void System::process_entity(Entity entity)
{
  // @NOTEs from zeke:
  // 1) Find all the components on the entity that apply to this system.
  // 2) Invoke a virtual method with those components and the entity so
  //    that derived systems can process them.

  // Ex: Applying poison to health.

  //for(std::string desired_components, )

  Component_Container* component_container = nullptr;
  bool isFound = false;

  for(auto component_name : components_for_process) {
    component_container = search_for_component_type(entity, component_name);

    if(component_container != nullptr) {
      isFound = true;
    }

  }
  
  if(isFound) {
    //this->process(entity, component_container->component);
  }
}


Component_Container* System::search_for_component_type(Entity entity, std::string target)
{

  Component_Container* returnComponent = nullptr;

  //Can you refer to a pointer as a reference just to change it in the scope?
  //Asterisk before a pointer de-references its value
  //Reference = De-Reference?

  for(Component_Container* component_container : entity.components)
  {
    if(component_container->nameType == target)
    {
      returnComponent = component_container;
      break;
    }
  }
  return returnComponent;

}
