#pragma once

#include "expression_interface.h"

namespace interpreter_ns
{
    class AndExpression : public ExpressionInterface
    {
    public:
        AndExpression() = delete;

        AndExpression(const std::shared_ptr<ExpressionInterface> &exp1,
                      const std::shared_ptr<ExpressionInterface> &exp2);

        bool interpret(std::string context) override;

    private:
        std::shared_ptr<ExpressionInterface> exp1_{}, exp2_{};
    };
}
