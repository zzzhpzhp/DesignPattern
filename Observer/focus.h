#pragma once

#include "observer_interface.h"

#include <vector>
#include <iostream>
#include <memory>

namespace observer_ns
{
    class Focus
    {
    public:
        Focus() = default;

        void addObserver(std::shared_ptr<ObserverInterface> observer);

        void updateValue(int value);

    private:
        std::vector<std::shared_ptr<ObserverInterface>> observers_{};
        int value_{0};
    };
}