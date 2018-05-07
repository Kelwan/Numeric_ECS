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



};
