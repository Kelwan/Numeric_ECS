#include "sdl_bmp_component.h"

sdl_bmp_component::sdl_bmp_component(const char* bmp_to_load)
{
    surface = SDL_LoadBMP(bmp_to_load);

    if(surface == NULL)
    {
        std::cerr << "SDL_LoadBMP failed to load: " << SDL_GetError() << std::endl;
    }
}

void sdl_bmp_component::changeSurface(const char* new_bmp_to_load)
{
    surface = SDL_LoadBMP(new_bmp_to_load);
}