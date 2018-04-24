#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component
{

public:

  std::string name;
  int componentNum;

  Component(std::string nameType);
  ~Component();



private:
  //int signature;


};


#endif//COMPONENT_H
