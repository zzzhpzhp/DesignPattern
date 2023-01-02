#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <memory>

namespace chain_of_resp_ns
{
    class HandleInterface
    {
    public:
        HandleInterface() = delete;

        HandleInterface(int level)
        {
            level_ = level;
        }

        virtual void handle(int level)
        {
            if (level_ >= level)
            {
                onHandle();
                return;
            }
            if (successor_)
            {
                successor_->handle(level);
            }
        }

        virtual void onHandle()
        {

        }

        virtual void setSuccessor(const std::shared_ptr<HandleInterface>& successor)
        {
            successor_ = successor;
        }

        virtual std::shared_ptr<HandleInterface> getSuccessor()
        {
            return successor_;
        }

    protected:
        std::shared_ptr<HandleInterface> successor_{};
        int level_{0};
    };
}
