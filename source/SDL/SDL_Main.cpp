
#include "SDL_Main.h"

SDL_Main::SDL_Main()
{

}

void SDL_Main::createWindow(const char* title,
int x,
int y,
int w,
int h,
Uint32 flags)
{
    win = SDL_CreateWindow(title, x, y, w, h, flags);
}

void SDL_Main::createWindow(const char* title,
int x,
int y,
int w,
int h)
{
    win = SDL_CreateWindow(title, x, y, w, h, SDL_WINDOW_OPENGL);
}

