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

};

  void print_systems();


private:
  void _addsystem(System* storeSystem);

  std::vector<System*> stored_systems;





};
