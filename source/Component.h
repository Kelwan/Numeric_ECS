#ifndef Component_h
#define Component_h

#include <string>
#include "components/component_library.h"


class Component
{

public:

  std::string name;
  int componentNum;

  Component(component_library* compLibrary, std::string nameType);
  ~Component();



private:
  int signature;


};


#endif
