#pragma once

#include "./source/core/core.h"



class poison_component : public Component{
public:

    static inline const std::string get_component_name()
    {
        return "poison_component";
    }

};