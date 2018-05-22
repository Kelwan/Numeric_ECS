#include "health_system.h"
#include "./source/game_systems/component_type/health_component.h"


health_system::health_system()
{
    components_for_process.push_back("health_component");
}

void health_system::process(Entity& entity, std::vector<Component_Container*> components)
{
    Component* component = components[0]->component;
    auto* healthComponent = reinterpret_cast<health_component*>(component);

    if(healthComponent->getHealth() <= 0)
    {
        std::cout << "character is dead!";
    }
    
}