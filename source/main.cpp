#include "Entity.h"
#include "System.h"
#include "components/component_library.h"

#include <string>
#include <iostream>

// Can I initiate things outside of main? Ex: System?

//Can namespace be used as a declaration to initiate
//a class?


namespace {
  Entity entity(1);
  Component component1("AddFive");
  System* gameSystem;
}

// class Game {
// public:
//
//   std::vector<system> systems;
//   std::vector<entity> entities;
//
//   void add_system(System);
//   void add_entity(Entity);
//
//   bool run();
//
// };

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

  std:: cout << "Before scope" << std::endl;

  {
    Test test;
    std::cout << "Inside scope" << std::endl;
  }
  std::cout << "After scope" << std::endl;


  //myGlobalEntity.printComponents();

  // Game game;
  //
  // game.add_system(GravitySystem{});
  // game.add_system(CollisionSystem{});
  // //Add Death collector system. ex: if hp < 0 killEntity
  //
  //
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

  System::StoreEntities<int> storeEntities;

  storeEntities.EntityList.push_back(24);

  std::cout << "Hey: " << storeEntities.EntityList[0] << std::endl;

  gameSystem->LOGGER();
  //ecs::gameSystem->LOGGER();
  entity.addComponent(component1);
  //entity.addComponent(component2);
  entity.checkAccess();
  //entity.printComponents();

}
