#include "./source/core/core.h"

class health_system : public System
{
public:

    health_system();

      virtual void process(Entity& entity, std::vector<Component_Container*> components) override;


};