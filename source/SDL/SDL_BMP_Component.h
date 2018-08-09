#include "./source/core/core.h"
#include "sdl.h"

class sdl_bmp_component : public Component
{
public:

    SDL_Surface* surface = nullptr;
    SDL_Texture* texture = nullptr;


    sdl_bmp_component(const char* bmp_to_load);

    static inline const std::string get_component_name()
    {
        return "sdl_bmp_component";
    }

    void changeSurface(const char* new_bmp_to_load);

};
