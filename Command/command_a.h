#pragma once

#include "command_interface.h"

#include <iostream>

namespace command_ns
{
    class CommandA : public CommandInterface
    {
    public:
        CommandA() = default;

        void execute() override;
    };
}