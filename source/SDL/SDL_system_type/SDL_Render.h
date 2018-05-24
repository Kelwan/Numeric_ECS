#pragma once

#include "./source/core/system/System.h"
#include "sdl.h"


class SDL_Render : public System
{
public:
    SDL_Renderer* ren = nullptr;

    SDL_Render(SDL_Renderer* renderer);

    virtual void process(Entity& entity, std::vector<Component_Container*> components) override;




};