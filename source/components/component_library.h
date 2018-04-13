#ifndef component_library_h
#define component_library_h


#include "AddFive.h"
#include "DoubleValue.h"
#include <string>
#include <vector>


class component_library
{
public:

  component_library();
  ~component_library();

private:

  AddFive AddFive;
  DoubleValue DoubleValue;


  std::vector<int> storedComponents;
};

#endif
