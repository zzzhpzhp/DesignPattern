#pragma once

#include "command_interface.h"

#include <iostream>
#include <vector>
#include <memory>

namespace command_ns
{
    class Executor
    {
    public:
        Executor() = default;

        void executeAllCommands();

        void addCommand(std::shared_ptr<CommandInterface> command);

    private:
        std::vector<std::shared_ptr<CommandInterface>> commends_{};
    };
}