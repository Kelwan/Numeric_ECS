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
  health PlayerHealth(100);
}

class Test {
public:

  Test() {
    std::cout << "Test Constructor" << std::endl;
  }

  ~Test() {
    std::cout << "Test Destructor" << std::endl;
  }
};

int main()
{

  std::cout << PlayerHealth.getHealth() << std::endl;

  //myGlobalEntity.printComponents();

  // Game game;

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
  entity.checkAccess();
  //entity.printComponents();

}
