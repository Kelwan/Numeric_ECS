#include "health_component.h"


health_component::health_component(int baseHealth) : Component()
{
  currentHealth = baseHealth;
}

health_component::~health_component()
{

}

int health_component::getHealth()
{
  return currentHealth;
}

void health_component::setHealth(int healthSet){
  currentHealth = healthSet;
}

void health_component::subtractHealth(int subtract){
  currentHealth -= subtract;
}

void health_component::addHealth(int add){
  currentHealth += add;
}
