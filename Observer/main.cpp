#include <iostream>

#include "observer_a.h"
#include "observer_b.h"
#include "focus.h"

int main()
{
    std::cout << ">>>>>>>> Command patten <<<<<<<<" << std::endl;

    auto observer_a = std::make_shared<observer_ns::ObserverA>();
    auto observer_b = std::make_shared<observer_ns::ObserverB>();

    observer_ns::Focus focus;
    focus.addObserver(observer_a);
    focus.addObserver(observer_b);

    focus.updateValue(1);
    focus.updateValue(2);
    focus.updateValue(3);

    return 0;
}
