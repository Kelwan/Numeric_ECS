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
    stored_entities.push_back(&entity);
}

