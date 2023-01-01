#pragma once

#include "state_interface.h"

namespace state_ns
{
    class StateB : public StateInterface
    {
    public:
        bool handle(const std::shared_ptr<Context>& context) override;
    };
}