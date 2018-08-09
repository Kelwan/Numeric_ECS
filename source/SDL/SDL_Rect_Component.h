#pragma once

#include "./source/core/component/Component.h"

#include "sdl.h"


class sdl_rect_component : public Component
{
public:

    int x, y, w, h;

    //Overload variables for altering source AND dest rectangles
    int src_x, src_y, src_w, src_h;
    int dest_x, dest_y, dest_w, dest_h;

    sdl_rect_component
    (
        int posx, int posy, int width, int height
    );

    sdl_rect_component
    (
        int d_x, int d_y, int d_width, int d_height,
        int s_x, int s_y, int s_width, int s_height
    );



    static inline const std::string get_component_name()
    {
        return "sdl_rect_component";
    }

    SDL_Rect SrcR;
    SDL_Rect DestR;
  
};