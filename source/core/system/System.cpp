#include <iostream>

#include "System.h"
#include <type_traits>

System::System() {}
System::~System() {}



Component_Container* System::search_for_component_type(Entity entity, std::string target)
{

  Component_Container* returnComponent = nullptr;


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
