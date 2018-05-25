#pragma once

#include "./source/core/component/Component.h"

#include "sdl.h"


class SDL_Rect_Component : public Component
{
public:
    SDL_Rect_Component(int posx, int posy, int width, int height);

    int x, y, w, h;

    static inline const std::string get_component_name()
    {
        return "SDL_Rect_Component";
    }

    SDL_Rect SrcR;
    SDL_Rect DestR;
  
};