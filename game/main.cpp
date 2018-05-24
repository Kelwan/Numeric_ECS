

//#include <ecs/core/core.h>
#include <ecs/game/game_system.h>
#include <ecs/game/SDL_core.h>


class SDL_Game : public Game
{
public:
    SDL_Main sdl;

};


int main(int argc, char* argv[])
{


    SDL_Game simpleGame;
    Entity player;
    Entity rock;


    //player.add_component<health_component>(100);
    //rock.add_component<health_component>(100);
    //player.printComponents();
    //simpleGame.system_manager.add_system<health_system>();



    //simpleGame.entity_manager.add_entity(player);
    //simpleGame.system_manager.process_entity(player);
    //simpleGame.system_manager.process_all_entities_type(simpleGame.entity_manager, "SDL_Render");
    //simpleGame.system_manager.process_all_entities(simpleGame.entity_manager);
 
    simpleGame.sdl.init("simpleGame", 100, 100, 640, 480);

    simpleGame.system_manager.add_system<SDL_Render>(simpleGame.sdl.renderer);

    



    //simpleGame.sdl.render();
    //simpleGame.sdl.delay(2000);



    return 0;

}

