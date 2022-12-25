#include <iostream>

#include "memento.h"
#include "originator.h"

int main()
{
    std::cout << ">>>>>>>> Memento design pattern <<<<<<<<" << std::endl;
    memento_ns::Originator originator;
    originator.setA(1);
    originator.setB(2);
    std::cout << "Initialize originator " << originator << std::endl;
    auto memento = originator.getMemento();
    originator.setA(3);
    originator.setA(4);
    std::cout << "Change originator " << originator << std::endl;
    std::cout << "Cancel change " << std::endl;
    originator.setMemento(*memento);
    std::cout << "Current originator " << originator << std::endl;

    return 0;
}
