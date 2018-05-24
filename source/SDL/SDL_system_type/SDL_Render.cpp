#include "SDL_Render.h"


SDL_Render::SDL_Render(SDL_Renderer* renderer)
    : ren(renderer) 
{
    components_for_process.push_back("SDL_BMP_Component");
}

void SDL_Render::process(Entity& entity, std::vector<Component_Container*> components)
{
    SDL_Texture* tex = nullptr;
    //std::cout << components.size() << std::endl;
    Component* component = components[0]->component;

    //auto* bmp_component = reinterpret_cast<SDL_BMP_Component*>(component);

    //SDL_CreateTextureFromSurface(SDL_Render::ren, bmp_component);
    //SDL_RenderCopy(SDL_Render::ren, tex, NULL, NULL);


    
}