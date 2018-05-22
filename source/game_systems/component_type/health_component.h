#pragma once


#include "./source/core/core.h"

class health_component : public Component
{
public:
  health_component(int baseHealth);
  ~health_component();

  int getHealth();


  static inline const std::string get_component_name()
  {
    return "health_component";
  }

  void setHealth(int healthSet);
  void subtractHealth(int subtract);
  void addHealth(int add);

private:

  int currentHealth = 0;

};
