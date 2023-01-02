#pragma once

#include "handle_interface.h"

namespace chain_of_resp_ns
{
    class HandleB : public HandleInterface
    {
    public:
        HandleB() = delete;
        HandleB(int level) : HandleInterface(level){}

        void onHandle() override;
    };
}