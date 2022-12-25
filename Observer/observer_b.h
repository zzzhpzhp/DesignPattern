#pragma once

#include "observer_interface.h"

namespace observer_ns
{
    class ObserverB : public ObserverInterface
    {
    public:
        ObserverB() = default;

        void update(int value) override;
    };
}
