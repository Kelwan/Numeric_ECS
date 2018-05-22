

//#include <ecs/core/core.h>
#include <ecs/game/game_system.h>

int main()
{

    Game simpleGame;


    Entity player;
    Entity rock;


    player.add_component<health_component>(100);
    player.add_component<poison_component>();

    player.printComponents();

    simpleGame.system_manager.add_system<health_system>();
    simpleGame.system_manager.add_system<poison_system>(2);

    simpleGame.system_manager.process_entity(player);
    simpleGame.system_manager.process_entity(player);
    simpleGame.system_manager.process_entity(player);
    simpleGame.system_manager.process_entity(player);
    simpleGame.system_manager.process_entity(player);
    
    simpleGame.system_manager.process_entity(rock);



    int loop = 1;
    //while(loop = 1)
    //{
    //    simpleGame.run();
    //}

    return 0;

}

