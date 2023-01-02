#pragma once

#include "handle_interface.h"

namespace chain_of_resp_ns
{
    class HandleA : public HandleInterface
    {
    public:
        HandleA() = delete;
        HandleA(int level) : HandleInterface(level){}

        void onHandle() override;
    };
}