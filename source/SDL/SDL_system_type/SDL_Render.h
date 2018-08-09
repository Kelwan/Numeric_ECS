#pragma once

#include "./source/core/system/System.h"
#include "sdl.h"


class sdl_render : public System
{
public:
    SDL_Renderer* ren = nullptr;

    sdl_render(SDL_Renderer* renderer);

    virtual void process(Entity& entity, std::vector<Component_Container*> components) override;

    


};