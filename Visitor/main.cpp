#include "component_a.h"
#include "component_b.h"
#include "component_visitor.h"

int main()
{
    std::cout << ">>>>>>>> Visitor pattern <<<<<<<<" << std::endl;
    visitor_ns::ComponentA cmp_a;
    visitor_ns::ComponentB cmp_b;
    auto visitor = std::make_shared<visitor_ns::ComponentVisitor>();
    cmp_a.accept(visitor);
    cmp_b.accept(visitor);

    return 0;
}
