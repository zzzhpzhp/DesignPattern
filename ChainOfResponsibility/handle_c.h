#pragma once

#include "handle_interface.h"

namespace chain_of_resp_ns
{
    class HandleC : public HandleInterface
    {
    public:
        HandleC() = delete;
        HandleC(int level) : HandleInterface(level){}

        void onHandle() override;
    };
}