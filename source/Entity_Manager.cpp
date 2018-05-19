#include "Entity_Manager.h"

#include <memory>
#include <cstdint>

namespace{
    uint32_t entity_id;
}


Entity_Manager::Entity_Manager()
{
    _entityid = entity_id;
    ++entity_id;
}

Entity_Manager::~Entity_Manager() {

}

void Entity_Manager::add_entity(Entity& entity)
{
    //auto iterator = std::make_unique<Entity_Manager::iterator>;
    stored_entities.push_back(&entity);
}

void Entity_Manager::print_entities()
{
    for(auto& it : stored_entities)
    {
        
        //std::cout << it->entity_id << std::endl;
    }
}
