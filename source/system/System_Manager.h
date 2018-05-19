#pragma once

#include <vector>
#include <type_traits>

#include "System.h"

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
    //if(system_process != nullptr)
    //{
      //_processentity(entity, system_process);
    //}

    //else()
    //{
      //std::cout << "process_entity system is undefined" << std::endl;
    //}

    
  };

  void print_systems();


private:

  friend class Game;
  void _processentity(Entity& entity, System* system_process);
  void _addsystem(System* storeSystem);
  std::vector<System*> stored_systems;


};
