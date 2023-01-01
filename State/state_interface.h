#pragma once

#include <string>
#include <memory>
#include <iostream>

namespace state_ns
{
    class Context;
    class StateInterface
    {
    public:
        virtual bool handle(const std::shared_ptr<Context>& context) = 0;
    };
}