#include "../System.h"

class poison : public System{

public:

  int level;
  int damage;

  static inline const std::string get_component_name()
  {
    return "poison";
  }

  poison(int poison_level);
  ~poison();

  void apply(Entity entity);

  int get_level();
  int get_damage();

  //If you don't re-declare process, it will give an error because of =0 abstraction


  virtual void process(Entity& entity, std::vector<Component_Container*> components) override/*, final*/;

  //If you specify override, it will SPECIFICALLY search the base classes for the virtual function
  //Look up final for more info



};
