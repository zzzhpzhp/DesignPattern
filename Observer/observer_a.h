#pragma once

#include "observer_interface.h"

namespace observer_ns
{
    class ObserverA : public ObserverInterface
    {
    public:
        ObserverA() = default;

        void update(int value) override;
    };
}
