
#include "SDL_Rect_Component.h"


SDL_Rect_Component::SDL_Rect_Component
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

    SrcR.x = 16;
    SrcR.y = 16;
    SrcR.w = 16;
    SrcR.h = 16;

}


