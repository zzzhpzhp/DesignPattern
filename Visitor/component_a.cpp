#include "component_a.h"

void visitor_ns::ComponentA::accept(const std::shared_ptr<VisitorInterface> &visitor)
{
    visitor->visit(this);
}

std::string visitor_ns::ComponentA::getName()
{
    return std::string("ComponentA");
}
