#include "health.h"


health::health(int baseHealth) : Component()
{
  currentHealth = baseHealth;
  name = "health";
}

health::~health()
{

}

int health::getHealth()
{
  return currentHealth;
}

void health::setHealth(int healthSet){
  currentHealth = healthSet;
}

void health::subtractHealth(int subtract){
  currentHealth -= subtract;
}

void health::addHealth(int add){
  currentHealth += add;
}
