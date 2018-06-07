

/*
/ from game BUILD file (Mac programming): "//source/SDL:SDL_Core",
/ Also made BUILD in SDL a .txt file to avoid SDL conflicts
*/


//#include <ecs/core/core.h>
#include <ecs/game/game_system.h>
#include <sstream>

//#include <ecs/game/SDL_core.h>



class SDL_Game : public Game
{
public:
    //SDL_Main sdl;

};


int main(int argc, char* argv[])
{


  //SDL_Game simpleGame;
  //player.add_component<health_component>(100);
  //rock.add_component<health_component>(100);
  //player.printComponents();
  //simpleGame.system_manager.add_system<health_system>();
  //simpleGame.entity_manager.add_entity(player);
  //simpleGame.system_manager.process_entity(player);
  //simpleGame.system_manager.process_all_entities_type(simpleGame.entity_manager, "SDL_Render");
  //simpleGame.system_manager.process_all_entities(simpleGame.entity_manager);
  //simpleGame.sdl.init("simpleGame", 100, 100, 640, 480);
  //simpleGame.system_manager.add_system<SDL_Render>(simpleGame.sdl.renderer);
  //simpleGame.sdl.render();
  //simpleGame.sdl.delay(2000);


    std::string input;
    typedef std::basic_istream<std::string> istream;




  Game game;

  Entity player;

  player.add_component<health_component>(100);


  std::cout << "Welcome... to the place! You wanna play the thing?" << '\n';
  std::cin.clear();
  std::cin.sync();
  std::getline(std::cin >> std::ws, input);
  
  std::cout << "You said: " << input << '\n';
  

  std::cout << "Are you a happy person?" << std::endl;
  std::getline(std::cin, input);

  std::cout << "You said: " << input << '\n';


    

    return 0;

}
