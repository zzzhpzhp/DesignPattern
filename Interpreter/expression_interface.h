#pragma once

#include <string>
#include <iostream>
#include <memory>

namespace interpreter_ns
{
    class ExpressionInterface
    {
    public:
        ExpressionInterface() = default;

        virtual bool interpret(std::string context) = 0;
    };
}