#include "Game.h"
#include <thread>
#include <chrono>



Game::Game()
{

}


Game::~Game()
{

}

bool Game::run()
{

  for(Entity* entity : entity_manager.stored_entities) {
    system_manager.process_entity(*entity);
  }

    using namespace std::literals::chrono_literals;
    std::this_thread::sleep_for(16ms);

 

  return true;
}
