#pragma once

#include "./source/core/core.h"


enum class Spells
{
  fireball = 1,
  lightning = 2,
  heal = 3,
  poison = 4,
};


class spell_system : public System
{
  spell_system();

  virtual void process
  (
    Entity& entity, std::vector
    <Component_Container*> components
  ) override;

  void findSpell();


private:
  Spells spells;
  std::vector<Component_Container*> stored_spells;
  
};

