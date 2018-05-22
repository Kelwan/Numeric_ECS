#include "./source/core/core.h"

class position_component : public Component
{
public:
    float pos_x, pos_y, pos_z;
    //if in 2D, take 2 inputs instead
    position_component(float x, float y, float z) 
    : pos_x(x)
    , pos_y(y)
    , pos_z(z) 
    {

    }

    position_component(float x, float y)
    : pos_x(x)
    , pos_y(y)
    {

    }

    static inline const std::string get_component_name()
    {
        return "position_component";
    }
    
};