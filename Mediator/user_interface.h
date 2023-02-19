#pragma once

#include <string>
#include <iostream>

class Mediator;

namespace mediator_ns
{
    class UserInterface
    {
    public:
        explicit UserInterface(std::string name);

        UserInterface() = delete;

        virtual std::string getName();

        virtual void setName(std::string name);

        void sendMessage(std::string msg);

    private:
        std::string name_{};
    };
}