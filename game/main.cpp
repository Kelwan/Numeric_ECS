

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


    player.add_component<health_component>(100);
    player.add_component<poison_component>();
    player.add_component<position_component>(20.0f, 20.0f);

    rock.add_component<health_component>(100);
    rock.add_component<poison_component>();
    rock.add_component<position_component>(20.0f, 20.0f);

    //player.printComponents();

    simpleGame.system_manager.add_system<health_system>();
    simpleGame.system_manager.add_system<poison_system>(2);

    simpleGame.entity_manager.add_entity(player);
    simpleGame.entity_manager.add_entity(rock);

    simpleGame.system_manager.process_entity(player);
    //simpleGame.system_manager.process_entity(rock);


    simpleGame.system_manager.process_all_entities(simpleGame.entity_manager);
    

    simpleGame.sdl.init("simpleGame", 100, 100, 640, 480);

    simpleGame.sdl.render();

    simpleGame.sdl.delay(2000);

    



    int loop = 1;
    //while(loop = 1)
    //{
    //    simpleGame.run();
    //}

    return 0;

}

