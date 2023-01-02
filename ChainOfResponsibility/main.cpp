#include <iostream>

#include "handle_a.h"
#include "handle_b.h"
#include "handle_c.h"

int main()
{
    std::cout << ">>>>>>>> Chain of responsibility <<<<<<<<" << std::endl;

    auto handle_a = std::make_shared<chain_of_resp_ns::HandleA>(1);
    auto handle_b = std::make_shared<chain_of_resp_ns::HandleB>(2);
    auto handle_c = std::make_shared<chain_of_resp_ns::HandleC>(3);

    handle_a->setSuccessor(handle_b);
    handle_b->setSuccessor(handle_c);

    std::cout << "Task level 1" << std::endl;
    handle_a->handle(1);
    std::cout << "Task level 2" << std::endl;
    handle_a->handle(2);
    std::cout << "Task level 3" << std::endl;
    handle_a->handle(3);

    return 0;
}
