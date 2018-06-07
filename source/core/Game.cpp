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

void Game::turn()
{
  std::cout << "Welcome to a brand new day in the beauty of simple turn-based conquest" << std::endl;
  std::cout << "You have four options, what will you choose?" << std::endl;

  for(Entity* entity : entity_manager.stored_entities) {
    system_manager.process_entity(*entity);
  }



}

//void Game::get_input(std::stringstream input)
//{

//}
