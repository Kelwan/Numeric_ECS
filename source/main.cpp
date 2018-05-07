#include "Entity.h"
#include "./system/System.h"
#include "./system/System_Manager.h"
#include "component/component_library.h"
#include "./system/system_type/poison.h"


#include <string>
#include <iostream>

// Can I initiate things outside of main? Ex: System?

//Can namespace be used as a declaration to initiate
//a class?

namespace {
  Entity entity(1);
  health player_health(100);
  System_Manager system_manager;
}

class Test {
public:

  Test() {
    std::cout << "Test enabled!" << std::endl;
  }

  ~Test() {
  }
};



int main()
{
  //Test test;

  std::cout << player_health.getHealth() << std::endl;


  entity.add_component<health>(100);
  entity.printComponents();

  system_manager.add_system<poison>(2);
  system_manager.print_systems();



  // //Add Death collector system. ex: if hp < 0 killEntity

  // Entity myPlayerEntity;
  // myPlayerEntity.add_component(PositionComponent{0.f, 10.f, 0.f});


//  System::StoreEntities<int> storeEntities;

  //storeEntities.EntityList.push_back(24);

  //std::cout << "Hey: " << storeEntities.EntityList[0] << std::endl;


}
