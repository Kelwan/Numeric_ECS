#pragma once

#include<vector>
#include<type_traits>
#include"Entity.h"


class Entity_Manager
{

public:

    Entity_Manager();
    ~Entity_Manager();

    void add_entity(Entity& entity);
    void print_entities();
    
    //How do I send _iterator without using a void 'get' function? Is it possible?;


private:

    friend class Game;
    friend class entity_iterator;
    std::vector<Entity*> stored_entities;
    uint32_t _entityid = 0;

};