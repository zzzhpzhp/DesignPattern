#include "component_b.h"

void visitor_ns::ComponentB::accept(const std::shared_ptr<VisitorInterface> &visitor)
{
    visitor->visit(this);
}

std::string visitor_ns::ComponentB::getName()
{
    return std::string("ComponentB");
}
