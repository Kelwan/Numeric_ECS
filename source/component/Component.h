#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>


struct Component_Container {};


class Component : public Component_Container
{

public:

  Component();
  ~Component();

  std::string name;
  int componentNum;


  //std::string& get_component_name();




private:
  //int signature;


};


#endif//COMPONENT_H
