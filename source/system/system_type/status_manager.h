#include "../System.h"

class status_manager : public System {
public:

  status_manager();
  ~status_manager();


  void check_status(Entity entity);

  

};
