#include "observer_a.h"

namespace observer_ns
{
    void ObserverA::update(int value)
    {
        std::cout << "ObserverA has been notified, value change to " << value << std::endl;
    }
}