#include "state_b.h"

namespace state_ns
{
    bool StateB::handle(const std::shared_ptr<Context> &context)
    {
        std::cout << "State B handle" << std::endl;
        return true;
    }
}
