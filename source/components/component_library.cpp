
#include "component_library.h"


component_library::component_library()
{
  storedComponents.push_back(AddFive);
  storedComponents.push_back(DoubleValue);
}

component_library::~component_library()
{

}

void component_library::getStoredComponents()
{
  return storedComponents;
}
