#include "Entity.h"
#include "System.h"
#include "components/component_library.h"

#include <string>
#include <iostream>

namespace {
    Entity entity(1);
    component_library* compLibrary;

    System system; //Switched to upper case and it stopped giving me a C4430 error. What??

    Component component1(compLibrary, "AddFive");
    //Component component2(component2, "DoubleValue");
}

int main()
{

  //entity.addComponent(component1);
  //entity.addComponent(component2);

  //entity.printComponents();


}
