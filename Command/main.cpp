#include <iostream>

#include "command_a.h"
#include "command_b.h"
#include "executor.h"

int main()
{
    std::cout << ">>>>>>>> Command pattern <<<<<<<<" << std::endl;

    auto cmd_a = std::make_shared<command_ns::CommandA>();
    auto cmd_b = std::make_shared<command_ns::CommandB>();
    command_ns::Executor executor;

    executor.addCommand(cmd_a);
    executor.addCommand(cmd_b);
    executor.executeAllCommands();

    return 0;
}
