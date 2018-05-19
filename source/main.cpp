#include "Entity.h"
#include "./system/System.h"
#include "./system/System_Manager.h"
#include "Entity_Manager.h"
#include "./system/system_type/poison.h"
#include "./component/component_type/health.h"

#include "Game.h"


#include <string>
#include <iostream>

// Can I initiate things outside of main? Ex: System?

//Can namespace be used as a declaration to initiate
//a class?

//More things to add:
//You need something to hold systems
//Something to hold entities(Entity manager)
//Something holding systems and entities (the managers themselves) -> Game
//When I make a system, it automatically is added by 'game' <- Don't do this!
//system_manager->add_system();


namespace {
  Entity player;
  health player_health(100);
  Game simpleGame;
}


class print_components_system : public System {
  virtual inline void process
    ( Entity&                           entity
    , std::vector<Component_Container*> components
    ) override
  {
    entity.printComponents();
  }
};


int main()
{

  player.add_component<health>(100);

  simpleGame.entity_manager.add_entity(player);
  simpleGame.system_manager.add_system<poison>(2);
  simpleGame.system_manager.add_system<print_components_system>();


while(1)
{
  simpleGame.run();
}
  

  return 0;
}
