#ifndef COMPONENT_LIBRARY_H
#define COMPONENT_LIBRARY_H


#include "component_struct.h"

#include <string>
#include <vector>



//Want a template to allow my private component functions
//To be stored in a vector under a universal type

//template <class T>
class component_library
{

public:
  component_library();
  ~component_library();

private:


  template<typename T>
  inline void getNum();
  //Components to be added to component list

};

// Mess with implementaion
template<typename T>
void component_library::getNum() {

}

namespace component_list
{
  template<typename T>
  typename std::vector<T> CompArray;
}

#endif
