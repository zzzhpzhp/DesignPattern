#pragma once

#include "command_interface.h"

#include <iostream>

namespace command_ns
{
    class CommandB : public CommandInterface
    {
    public:
        CommandB() = default;

        void execute() override;
    };
}
