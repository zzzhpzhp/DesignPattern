#pragma once

namespace command_ns
{
    class CommandInterface
    {
    public:
        CommandInterface() = default;

        virtual void execute() = 0;
    };
}
