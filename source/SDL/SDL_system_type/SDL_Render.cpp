#include "SDL_Render.h"
#include "./source/SDL/SDL_BMP_Component.h"


SDL_Render::SDL_Render(SDL_Renderer* renderer)
    : ren(renderer) 
{
    name = "SDL_Render";
    components_for_process.push_back("SDL_BMP_Component");
}

void SDL_Render::process(Entity& entity, std::vector<Component_Container*> components)
{

    Component* component = components[0]->component;
    auto* bmp_component = reinterpret_cast<SDL_BMP_Component*>(component);

    if(bmp_component->texture == nullptr)
    {
        SDL_CreateTextureFromSurface(SDL_Render::ren, bmp_component->surface);
        SDL_FreeSurface(bmp_component->surface);
    }


    SDL_RenderCopy(SDL_Render::ren, bmp_component->texture, NULL, NULL);
    SDL_RenderPresent(SDL_Render::ren);




    
}