#include "sdl.h"

class SDL_Main
{
public:
    SDL_Main();


    //If no flag, OPENGL is assumed
    void createWindow(const char* title,
    int x,
    int y,
    int w,
    int h,
    Uint32 flags);

    void createWindow(const char* title,
    int x,
    int y,
    int w,
    int h
    );


private:

    SDL_Window* win = nullptr;
    SDL_Renderer* renderer = nullptr;

    


}