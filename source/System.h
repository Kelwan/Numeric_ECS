#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include <cstdint>

#include "Component.h"
#include "components/component_library.h"

// How do I pass a system effectively without constantly
// Sending via function / declaring it in main?


//AKA Self-initiating global system?

//Why use namespaces??

class System {
public:
  System();
  ~System();

    //void checkComponentSignature(int signature, Component component);

    // I include 'Component', but I can't make
    //Declaratons of it in function arguments
    //But I can in Entity?

  component_library compLibrary;

  void init();
  void LOGGER();


private:
  //How do I use template with vectors?
  //It seems complicated to pass its argument around
  //Below is the only one I got to work
  template<typename T>
  class StoreEntities
  {
  public:
    typename std::vector<T>EntityList;
  };





};

//System* gameSystem;
//ecs::System* gameSystem;


#endif
