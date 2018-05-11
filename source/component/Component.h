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





private:
  //Uint32 component_id;


};


#endif//COMPONENT_H
