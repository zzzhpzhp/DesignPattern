#include <iostream>

#include "user_interface.h"

mediator_ns::UserInterface user_a("UserA"), user_b("UserB");

int main()
{
    std::cout << ">>>>>>>> Mediator pattern <<<<<<<<" << std::endl;
    user_a.sendMessage("Test A");
    user_b.sendMessage("Test B");

    return 0;
}
