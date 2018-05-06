#pragma once


#include "../Component.h"

class health : public Component
{
public:
  health(int baseHealth);
  ~health();

  int getHealth();


  static inline const std::string get_component_name()
  {
    return "health";
  }

  void setHealth(int healthSet);
  void subtractHealth(int subtract);
  void addHealth(int add);

private:

  int currentHealth = 0;

};
