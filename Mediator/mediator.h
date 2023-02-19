#pragma once

#include <string>
#include <iostream>

#include "user_interface.h"

namespace mediator_ns
{
    class Mediator
    {
    public:
        static void sendMessage(UserInterface *user, std::string msg)
        {
            std::cout << user->getName() << ": " << msg << std::endl;
        }
    };
}
