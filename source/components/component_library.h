#ifndef component_library_h
#define component_library_h

#include "AddFive.h"
#include "DoubleValue.h"
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

  //std::vector<T>componentList;

private:
  //Components to be added to component list
  AddFive AddFive;
  DoubleValue DoubleValue;

};

#endif
