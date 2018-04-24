#pragma once

#include <vector>
#include <memory>


class Game {
public:
  Game();
  ~Game();

//  std::vector<System> systems;
//  std::vector<Entity> entities;

  void add_system();
  void add_entity();

  bool run();




};
