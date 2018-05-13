
#include "Component.h"


Component::Component()
{


}

Component::~Component()
{

}


Component_Container::Component_Container(std::string nameType, Component* component) : nameType(nameType), component(component)
{


}
