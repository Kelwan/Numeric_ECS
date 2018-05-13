#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>


class Component
{

public:

  Component();
  ~Component();




private:
  //Uint32 component_id;


};

struct Component_Container {
  Component_Container(std::string nameType, Component* component);

  std::string nameType;
  Component* component;

};


#endif//COMPONENT_H
