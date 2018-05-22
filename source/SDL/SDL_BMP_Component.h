#include "./source/core/core.h"
#include "sdl.h"

class SDL_BMP_Component : public Component
{
public:

    SDL_Surface* surface = nullptr;

    SDL_BMP_Component(const char* bmp_to_load);

    static inline const std::string get_component_name()
    {
        return "SDL_BMP_Component";
    }

    void changeSurface(const char* new_bmp_to_load);



};
