

//#include <ecs/core/core.h>
#include <ecs/game/game_system.h>

int main()
{

    Game simpleGame;

    Entity player;

    player.add_component<health>(100);

    player.printComponents();

    return 0;
}

