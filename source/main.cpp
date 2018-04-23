#include "Entity.h"
#include "System.h"
#include "components/component_library.h"


#include <string>
#include <iostream>

// Can I initiate things outside of main? Ex: System?

//Can namespace be used as a declaration to initiate
//a class?
namespace {
    Entity entity(1);
    Component component1("AddFive");
    System* gameSystem;
}


int main()
{


  //ecs::gameSystem->LOGGER();
  entity.addComponent(component1);
  //entity.addComponent(component2);
  entity.checkAccess();
  //entity.printComponents();


}
