#include <iostream>

#include "System.h"
#include <type_traits>

System::System() {}
System::~System() {}



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
