#pragma once

#include "./source/core/core.h"

class poison_system : public System{

public:

  int level;
  int damage;


  poison_system(int poison_level);
  ~poison_system();



  int get_level();
  int get_damage();

  //If you don't re-declare process, it will give an error because of =0 abstraction


  virtual void process(Entity& entity, std::vector<Component_Container*> components) override/*, final*/;

  //If you specify override, it will SPECIFICALLY search the base classes for the virtual function
  //Look up final for more info



};
