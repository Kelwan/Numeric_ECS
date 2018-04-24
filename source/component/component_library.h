#ifndef COMPONENT_LIBRARY_H
#define COMPONENT_LIBRARY_H

#include <string>
#include <vector>

#include "component_type/health.h"


class component_library
{

public:
  component_library();
  ~component_library();

private:

  //Inline template example
  template<typename T>
  inline void getNum();

};

// Mess with implementaion ex #2
template<typename T>
void component_library::getNum() {

}

namespace component_list
{
  template<typename T>
  std::vector<T> CompArray;
}

#endif
