#pragma once

#include "state_interface.h"

namespace state_ns
{
    class Context
    {
    public:
        Context();

        std::shared_ptr<StateInterface> getState();

        void setState(const std::shared_ptr<StateInterface> &state);

        bool execute();

        static std::shared_ptr<Context> getContext();

    private:
        std::shared_ptr<StateInterface> state_{};

        static std::shared_ptr<Context> context_;
    };
}