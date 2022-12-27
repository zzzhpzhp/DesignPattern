#include <iostream>

#include "component_interface.h"
#include "component_special.h"

int main()
{
    std::cout << ">>>>>>>> Composite pattern <<<<<<<<" << std::endl;

    auto comp = std::make_shared<composite_ns::ComponentInterface>("Components");
    auto comp_a = std::make_shared<composite_ns::ComponentInterface>("ComponentA");
    auto comp_a_1 = std::make_shared<composite_ns::ComponentInterface>("ComponentA_1");
    auto comp_a_2 = std::make_shared<composite_ns::ComponentInterface>("ComponentA_2");
    auto comp_a_2_1 = std::make_shared<composite_ns::ComponentInterface>("ComponentA_2_1");
    auto comp_b = std::make_shared<composite_ns::ComponentInterface>("ComponentB");
    auto comp_b_1 = std::make_shared<composite_ns::ComponentInterface>("ComponentB_1");
    auto comp_b_2 = std::make_shared<composite_ns::ComponentInterface>("ComponentB_2");

    comp->addComponent(comp_a);
    comp->addComponent(comp_b);
    comp_a->addComponent(comp_a_1);
    comp_a->addComponent(comp_a_2);
    comp_a_2->addComponent(comp_a_2_1);
    comp_b->addComponent(comp_b_1);
    comp_b->addComponent(comp_b_2);

    std::cout << "Print components of Components:" << std::endl;
    comp->doSomething();
    std::cout << std::endl;


    std::cout << "ComponentA_2 remove ComponentA_2_1" << std::endl;
    comp_a_2->removeComponent(comp_a_2_1);
    std::cout << "Print components of Components:" << std::endl;
    comp->doSomething();
    std::cout << std::endl;

    std::cout << "Components remove ComponentA:" << std::endl;
    comp->removeComponent(comp_a);
    std::cout << "Print components of Components:" << std::endl;
    comp->doSomething();
    std::cout << std::endl;

    std::cout << "Add special component" << std::endl;
    auto special_comp = std::make_shared<composite_ns::ComponentSpecial>("special");
    comp->addComponent(special_comp);
    std::cout << "Print components of Components:" << std::endl;
    comp->doSomething();

    return 0;
}
