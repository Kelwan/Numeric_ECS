#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <cstdint>

#include "../component/component_library.h"
#include "../Entity.h"


//System don't hold entities, just process them



class System {
public:
  System();
  ~System();


  void process_entity();




};

class CollisionSystem : public System {

};




#endif
