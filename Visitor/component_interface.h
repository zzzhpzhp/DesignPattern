#pragma once

#include <iostream>
#include <memory>
#include <string>

namespace visitor_ns
{
    class VisitorInterface;

    class ComponentInterface
    {
    public:
        virtual void accept(const std::shared_ptr<VisitorInterface> &visitor) = 0;

        virtual std::string getName() = 0;
    };
}
