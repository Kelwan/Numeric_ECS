#pragma once


#include "../Component.h"

class health : public Component
{
public:
  health(int baseHealth);
  ~health();

  int getHealth();

  void setHealth(int healthSet);
  void subtractHealth(int subtract);
  void addHealth(int add);

private:

  int currentHealth = 0;

};
