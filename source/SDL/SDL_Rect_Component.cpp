
#include "sdl_rect_component.h"


sdl_rect_component::sdl_rect_component
(
int posx, int posy, int width, int height
)
: x(posx)
, y(posy)
, w(width)
, h(height)
{
    DestR.x = x;
    DestR.y = y;
    DestR.w = w;
    DestR.h = h;

    SrcR.x = x;
    SrcR.y = y;
    SrcR.w = w;
    SrcR.h = h;

}

sdl_rect_component::sdl_rect_component
(
    int d_x, int d_y, int d_width, int d_height,
    int s_x, int s_y, int s_width, int s_height
)
: dest_x(d_x)
, dest_y(d_y)
, dest_w(d_width)
, dest_h(d_height) 
, src_x(s_x)
, src_y(s_y)
, src_w(s_width)
, src_h(s_height)
{
    DestR.x = dest_x;
    DestR.y = dest_y;
    DestR.w = dest_w;
    DestR.h = dest_h;

    SrcR.x = src_x;
    SrcR.y = src_y;
    SrcR.w = src_w;
    SrcR.h = src_h;
}




