#include "component_visitor.h"
#include "component_a.h"
#include "component_b.h"

namespace visitor_ns
{
    void ComponentVisitor::visit(ComponentA *component)
    {
        std::cout << "Visit " << component->getName() << std::endl;
    }

    void ComponentVisitor::visit(ComponentB *component)
    {
        std::cout << "Visit " << component->getName() << std::endl;
        std::cout << "Do something others when visit ComponentB" << std::endl;
    }
}
