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
  void process_entity(Entity entity, Component target);




};




#endif
