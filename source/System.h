#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <cstdint>

#include "Component.h"
#include "components/component_library.h"


//System don't hold entities, just process them



class System {
public:
  System();
  ~System();

    void checkComponentSignature(int signature, Component component);

  component_library compLibrary;

  void init();
  void LOGGER();


// private:
  //How do I use template with vectors?
  //It seems complicated to pass its argument around
  //Below is the only one I got to work
  template<typename T>
  class StoreEntities
  {
  public:
    std::vector<T> EntityList;
  };




};

//Inherit root system and create a separate root folder
class GravitySystem : public System {
  //Do the implemtation
  //friend Component
};

class CollisionSystem : public System {

};




#endif
