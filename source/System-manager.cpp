#include <iostream>

#include "System.h"
#include "components/component_library.h"


System::System() {}
System::~System() {}

void System::checkComponentSignature(int signature, Component component)
{

}

void System::init()
{

}

void System::LOGGER()
{
  std::cout << "System Communication established!"
  << std::endl;
}
