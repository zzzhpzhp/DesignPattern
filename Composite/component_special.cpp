#include "component_special.h"

namespace composite_ns
{
    ComponentSpecial::ComponentSpecial(std::string id) : ComponentInterface(id)
    {
    }

    void ComponentSpecial::doSomething()
    {
        std::cout << "I'm special component" << std::endl;

        for (const auto &c: getComponents())
        {
            c.second->doSomething();
        }
    }
}