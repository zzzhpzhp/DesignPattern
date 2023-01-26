#pragma once

#include <iostream>
#include <memory>
#include <string>

#include "visitor_interface.h"

namespace visitor_ns
{
    class ComponentVisitor : public VisitorInterface
    {
    public:
        void visit(ComponentA *component);

        void visit(ComponentB *component);
    };
}