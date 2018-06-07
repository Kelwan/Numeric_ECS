#pragma once

#include "./source/core/component/Component.h"


class spell_user_component : public Component
{
public:

spell_user_component(int spellArgs);

  static inline const std::string get_component_name()
  {
    return "spell_user_component";
  }


  int spell_permissions = 0;
  //std::vector<int> spell_permissions;

};
