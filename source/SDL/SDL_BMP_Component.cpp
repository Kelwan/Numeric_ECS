#include "SDL_BMP_Component.h"

SDL_BMP_Component::SDL_BMP_Component(const char* bmp_to_load)
{
    surface = SDL_LoadBMP(bmp_to_load);
}

void changeSurface(const char* new_bmp_to_load)
{
    //WHAT?

    //surface = SDL_LoadBMP(new_bmp_to_load);
}