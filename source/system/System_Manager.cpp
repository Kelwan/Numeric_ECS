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
    it != stored_systems.end(); it++, i++)
  {
    std::cout << stored_systems[i]->name << std::endl;
  }
}
