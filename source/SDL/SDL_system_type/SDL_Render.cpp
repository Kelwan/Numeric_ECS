#include "sdl_render.h"
#include "./source/SDL/sdl_bmp_component.h"
#include "./source/SDL/sdl_rect_component.h"


sdl_render::sdl_render(SDL_Renderer* renderer)
    : ren(renderer) 
{
    name = "sdl_render";
    components_for_process.push_back("sdl_bmp_component");
    components_for_process.push_back("sdl_rect_component");
}

void sdl_render::process(Entity& entity, std::vector<Component_Container*> components)
{
    bool validSurface = true;

    Component* component = components[0]->component;
    auto* bmp_component = reinterpret_cast<sdl_bmp_component*>(component);

    Component* rect = components[1]->component;
    auto* rect_component = reinterpret_cast<sdl_rect_component*>(rect);

    
    if(bmp_component->texture == nullptr)
    {
        bmp_component->texture = SDL_CreateTextureFromSurface(sdl_render::ren, bmp_component->surface);
        SDL_FreeSurface(bmp_component->surface);
    }

    if(bmp_component->surface == 0)
    {
        std::cerr << "BMPComponent Surface: " << SDL_GetError() << ". Check BMP pathing" << std::endl; 
        validSurface = false;
    }

    if(bmp_component->texture == 0)
    {
        std::cerr << "BMPComponent Texture: " << SDL_GetError() << std::endl;
    }

    if(validSurface == true){
        SDL_RenderCopy(sdl_render::ren, bmp_component->texture, &rect_component->SrcR, &rect_component->DestR);
        SDL_RenderPresent(ren);
    }

   
}