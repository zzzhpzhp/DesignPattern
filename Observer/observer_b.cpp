#include "observer_b.h"

namespace observer_ns
{
    void ObserverB::update(int value)
    {
        std::cout << "ObserverB has been notified, value change to " << value << std::endl;
    }
}