#pragma once

#include <iostream>
#include <memory>
#include <string>

namespace visitor_ns
{
    class ComponentA;

    class ComponentB;

    class VisitorInterface
    {
    public:
        virtual void visit(ComponentA *component) = 0;

        virtual void visit(ComponentB *component) = 0;
    };
}