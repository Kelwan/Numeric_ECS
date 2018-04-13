#ifndef System_h
#define System_h

//#include <memory>
//#include <vector>
#include <iostream>
#include "Component.h"



class System {
public:
  System();
  ~System();

  void checkComponentSignature(int signature, Component component);
};

#endif
