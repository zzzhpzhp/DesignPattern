#include "executor.h"


namespace command_ns
{

    void Executor::executeAllCommands()
    {
        for (const auto &c : commends_)
        {
            c->execute();
        }
        std::cout << "All commands executed" << std::endl;
    }

    void Executor::addCommand(std::shared_ptr<CommandInterface> command)
    {
        commends_.emplace_back(command);
    }
}