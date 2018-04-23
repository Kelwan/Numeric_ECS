#ifndef Component_h
#define Component_h

#include <string>
#include "System.h"


class Component
{

public:

  std::string name;
  int componentNum;

  Component(std::string nameType);
  ~Component();



private:
  //int signature;


};


#endif
