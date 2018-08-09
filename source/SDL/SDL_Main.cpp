
#include "sdl_main.h"
#include <iostream>


SDL_Main::SDL_Main()
{

}

void SDL_Main::init(const char* title,
int x,
int y,
int w,
int h,
Uint32 flags)
{

    if(win == nullptr && renderer == nullptr)
    {
        SDL_Init(SDL_INIT_EVERYTHING);
        win = SDL_CreateWindow(title, x, y, w, h, flags);
        renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    }
    else
    {
        std::cout << "SDL has already been initialized" << std::endl;
    }

    if(!win || !renderer)
    {
        std::cout << "SDL_init failed" << std::endl;
    }

}

void SDL_Main::init(const char* title,
int x,
int y,
int w,
int h)
{

    if(win == nullptr && renderer == nullptr)
    {
        SDL_Init(SDL_INIT_EVERYTHING);
        win = SDL_CreateWindow(title, x, y, w, h, SDL_WINDOW_OPENGL);
        renderer = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED);
    }
    else
    {
        std::cout << "SDL has already been initialized" << std::endl;
        SDL_GetError();
    }
    
    if(!win || !renderer)
    {
        std::cout << "SDL_init failed" << std::endl;
    }
}

void SDL_Main::render()
{

    SDL_RenderClear(renderer);
    //SDL_RenderCopy(renderer);
    SDL_RenderPresent(renderer);
}

void SDL_Main::delay(Uint32 ms)
{
    SDL_Delay(ms);
}

