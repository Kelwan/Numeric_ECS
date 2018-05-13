#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <cstdint>
#include <string>

#include "../component/component_library.h"
#include "../Entity.h"


//System don't hold entities, just process them



class System {

public:
  System();
  ~System();

  std::string name;
  
 
  void process_entity(Entity entity);
  Component_Container* search_for_component_type(Entity entity, std::string target);


  std::vector<std::string> components_for_process;

  virtual void process(Entity& entity, std::vector<Component*> components) = 0;


  //=0 means if you have a derived class that doesn't implement the function, it will give an error.
};




#endif
