#ifndef COMPONENT_LIBRARY_H
#define COMPONENT_LIBRARY_H


#include "component_struct.h"

#include <string>
#include <vector>

//Not sure how to make template communicate with the
//.cpp file. Errors everywhere!

//Want a template to allow my private component functions
//To be stored in a vector under a universal type

//template <class T>
class component_library
{

public:
  component_library();
  ~component_library();

private:
  //Components to be added to component list

};

namespace component_list
{
  template<typename T>
  typename std::vector<T> CompArray;
}

#endif
