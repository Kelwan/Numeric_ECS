#pragma once

#include "sdl.h"
#include <cstdint>

class SDL_Main
{
public:
    SDL_Main();


    //If no flag, OPENGL is assumed
    void init(const char* title,
    int x,
    int y,
    int w,
    int h,
    Uint32 flags);

    void init(const char* title,
    int x,
    int y,
    int w,
    int h
    );
    
    void render();
    void delay(Uint32 ms);

private:
    

    SDL_Window* win = nullptr;
    SDL_Renderer* renderer = nullptr;    


};