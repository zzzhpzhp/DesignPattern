#include "context.h"
#include "state_a.h"

namespace state_ns
{
    std::shared_ptr<Context> Context::context_;

    Context::Context()
    {
        std::cout << "Initialize state to state A" << std::endl;
        state_ = std::make_shared<StateA>();
    }

    std::shared_ptr<StateInterface> Context::getState()
    {
        return state_;
    }

    void Context::setState(const std::shared_ptr<StateInterface> &state)
    {
        state_ = state;
    }

    bool Context::execute()
    {
        return state_->handle(getContext());
    }

    std::shared_ptr<Context> Context::getContext()
    {
        if (context_)
        {
            return context_;
        }
        context_ = std::make_shared<Context>();
        return context_;
    }
}