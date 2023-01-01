#include "context.h"
#include "state_a.h"
#include "state_b.h"

namespace state_ns
{
    bool StateA::handle(const std::shared_ptr<Context> &context)
    {
        std::cout << "State A handle" << std::endl;
        auto state_b = std::make_shared<StateB>();
        std::cout << "State switch to state B" << std::endl;
        context->setState(state_b);
        return false;
    }
}