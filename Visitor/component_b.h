#pragma once

#include "component_interface.h"
#include "visitor_interface.h"

namespace visitor_ns
{
    class ComponentB : public ComponentInterface
    {
    public:
        void accept(const std::shared_ptr<VisitorInterface> &visitor) override;

        std::string getName() override;
    };
}
