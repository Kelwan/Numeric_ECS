

/*
/ from game BUILD file (Mac programming): ",
/ Also made BUILD in SDL a .txt file to avoid SDL conflicts
*/


//#include <ecs/core/core.h>
#include <ecs/game/game_system.h>
#include <sstream>
#include <ecs/game/sdl_core.h>



class SDL_Game : public Game
{
public:
    SDL_Main sdl;

};


int main(int argc, char* argv[])
{

    Entity player;
    SDL_Game game;

    game.sdl.init("a game", 100, 100, 640, 480);


     player.add_component<health_component>(100);
     player.add_component<poison_component>();
    
     player.add_component<sdl_bmp_component>("../../content/bmp/tiger.bmp");
     player.add_component<sdl_rect_component>(200, 200, 100, 100);

     game.system_manager.add_system<poison_system>(10);
     game.system_manager.add_system<sdl_render>(game.sdl.renderer);

     game.entity_manager.add_entity(player);


    for(;;)
    {
        game.run();
    }




    return 0;

}
