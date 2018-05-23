#pragma once

#include "./entity/Entity_Manager.h"
#include "./system/System_Manager.h"
#include "Game.h"

/*

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

*/
