#include "focus.h"

namespace observer_ns
{
    void Focus::addObserver(std::shared_ptr<ObserverInterface> observer)
    {
        observers_.emplace_back(observer);
    }

    void Focus::updateValue(int value)
    {
        value_ = value;
        std::cout << "Focus update value to " << value_ << std::endl;
        for (const auto &o : observers_)
        {
            o->update(value_);
        }
    }
}