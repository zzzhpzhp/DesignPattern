#include "user_interface.h"
#include "mediator.h"

namespace mediator_ns
{
    UserInterface::UserInterface(std::string name)
    {
        name_ = std::move(name);
    }

    std::string UserInterface::getName()
    {
        return name_;
    }

    void UserInterface::setName(std::string name)
    {
        name_ = std::move(name);
    }

    void UserInterface::sendMessage(std::string msg)
    {
        Mediator::sendMessage(this, msg);
    }
}
