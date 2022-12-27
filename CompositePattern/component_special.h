#pragma once

#include <utility>

#include "component_interface.h"

namespace composite_ns
{
    class ComponentSpecial : public ComponentInterface
    {
    public:
        explicit ComponentSpecial(std::string id);

        void doSomething() override;
    };
}
