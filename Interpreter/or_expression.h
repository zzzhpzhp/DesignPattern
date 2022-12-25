#pragma once

#include "expression_interface.h"
#include "terminal_expression.h"

namespace interpreter_ns
{
    class OrExpression : public ExpressionInterface
    {
    public:
        OrExpression() = delete;

        explicit OrExpression(const std::shared_ptr<ExpressionInterface> &exp1,
                              const std::shared_ptr<ExpressionInterface> &exp2);

        bool interpret(std::string context) override;

    private:
        std::shared_ptr<ExpressionInterface> exp1_{}, exp2_{};
    };
}