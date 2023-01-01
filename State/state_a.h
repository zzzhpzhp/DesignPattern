#include "state_interface.h"

namespace state_ns
{
    class StateA : public StateInterface
    {
    public:
        bool handle(const std::shared_ptr<Context>& context);
    };
}
