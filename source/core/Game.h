#pragma once

#include <memory>
#include <iostream>
#include <sstream>
#include "./entity/Entity_Manager.h"
#include "./system/System_Manager.h"


class Game {
public:
  Game();
  ~Game();

  void add_system();
  void add_entity();
  void optionsTemplate(std::string one, std::string two, std::string three, std::string four);

  //void get_input(std::stringstream input);

  bool run();

  System_Manager system_manager;
  Entity_Manager entity_manager;

  void turn();

  inline int get_vector_size()
  {
    return stored_entities.size();
  };

private:

  
  //void duplicate_entity();
  std::vector<System*> stored_systems;
  std::vector<Entity> stored_entities;

};
