#include "spell_system.h"
#include "./source/game_systems/component_type/spell_user_component.h"

spell_system::spell_system()
{
  name = "spell_system";

  components_for_process.push_back("spell_user_component");
}


void spell_system::process
(
  Entity& entity, std::vector
  <Component_Container*> components
)
{
  Component* component = components[0]->component;
  
  auto* spellComponent = reinterpret_cast<spell_user_component*>(component);

}
