#pragma once

#include <iostream>

namespace observer_ns
{
    class ObserverInterface
    {
    public:
        ObserverInterface() = default;

        virtual void update(int value) = 0;
    };
}
