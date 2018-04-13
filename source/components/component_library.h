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

  void getStoredComponents();

private:

  std::vector<int> storedComponents;
  AddFive AddFive;
  DoubleValue DoubleValue;
};

#endif
