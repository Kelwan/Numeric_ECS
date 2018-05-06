#pragma once

#include <vector>
#include <memory>
#include "./system/System.h"


class Game {
public:
  Game();
  ~Game();

//  std::vector<System> systems;
//  std::vector<Entity> entities;

  void add_system();
  void add_entity();

  bool run();

private:

  std::vector<System> store_systems;
  std::vector<Entity> store_entities;


};
