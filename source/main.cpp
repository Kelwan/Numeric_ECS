#include "Entity.h"
#include "system/System.h"
#include "component/component_library.h"



#include <string>
#include <iostream>

// Can I initiate things outside of main? Ex: System?

//Can namespace be used as a declaration to initiate
//a class?

namespace {
  Entity entity(1);
  health player_health(100);
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
  // I can't get static_assert to trigger correctly
  // because of errors lol
  entity.add_component<health>(player_health);

  entity.printComponents();

  //myGlobalEntity.printComponents();

  // //Add Death collector system. ex: if hp < 0 killEntity

  // Entity myPlayerEntity;
  // myPlayerEntity.add_component(PositionComponent{0.f, 10.f, 0.f});
  //
  // game.add_entity(myPlayerEntity);

  // for(;;) {
  //   bool shouldQuit = game.run();
  //
  //   if(shouldQuit) {
  //     break;
  //   }
  // }

//  System::StoreEntities<int> storeEntities;

  //storeEntities.EntityList.push_back(24);

  //std::cout << "Hey: " << storeEntities.EntityList[0] << std::endl;



  //entity.addComponent(component1);
  //entity.addComponent(component2);
  //entity.checkAccess();
  //entity.printComponents();

}
