#pragma once

#include <vector>
#include <type_traits>

#include "System.h"
#include "./source/core/entity/Entity_Manager.h"

class System_Manager
{

public:


template<typename systemT, typename ...systemArgsT>
inline auto add_system(systemArgsT... systemArgs)
{
  static_assert
  (
    std::is_base_of<System, systemT>::value,
    "systemT does not derive from base System"
  );

_addsystem(new systemT{systemArgs...});

};

  inline void process_entity(Entity& entity)
  {
    for(System* system_process : stored_systems)
    {
      if(system_process != nullptr)
      {
        _processentity(entity, system_process);
      }

    }
    
  };

  inline void process_all_entities(Entity_Manager& entity_manager)
  {
    for(System* system_process : stored_systems)
    {
      if(system_process != nullptr)
      {
        _processallentities(entity_manager.stored_entities, system_process);
        
      }
    }
  }

    inline void process_all_entities_type(Entity_Manager& entity_manager, std::string target)
  {
    for (System* specific_system : stored_systems)
    {
      if (specific_system->name == target)
      {
        _processallentities(entity_manager.stored_entities, specific_system); 
      }
    }
  }

  void print_systems();


private:

  friend class Game;
  void _processentity(Entity& entity, System* system_process);
  void _processallentities(std::vector<Entity*>& stored_entities,
                           System* system_process);
  void _addsystem(System* storeSystem);
  std::vector<System*> stored_systems;

};
