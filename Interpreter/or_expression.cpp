#include "or_expression.h"

namespace interpreter_ns
{
    OrExpression::OrExpression(const std::shared_ptr<ExpressionInterface> &exp1,
                               const std::shared_ptr<ExpressionInterface> &exp2)
    {
        exp1_ = exp1;
        exp2_ = exp2;
    }

    bool OrExpression::interpret(std::string context)
    {
        return exp1_->interpret(context) || exp2_->interpret(context);
    }
}