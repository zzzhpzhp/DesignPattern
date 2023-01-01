#include <iostream>

#include "context.h"
#include "state_a.h"

int main()
{
    std::cout << ">>>>>>>> State pattern <<<<<<<<" << std::endl;

    auto context = state_ns::Context::getContext();
    while (!context->execute()) {}

    return 0;
}
