#pragma once

#include <memory>
#include "./entity/Entity_Manager.h"
#include "./system/System_Manager.h"


class Game {
public:
  Game();
  ~Game();

  void add_system();
  void add_entity();

  bool run();

  System_Manager system_manager;
  Entity_Manager entity_manager;

  void frameRate();


private:



  //void duplicate_entity();
  std::vector<System*> stored_systems;
  std::vector<Entity> stored_entities;

};
