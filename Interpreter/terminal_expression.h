#pragma

#include "expression_interface.h"

namespace interpreter_ns
{
    class TerminalExpression : public ExpressionInterface
    {
    public:
        TerminalExpression() = delete;

        explicit TerminalExpression(std::string data);

        bool interpret(std::string context) override;

    private:
        std::string data_{};
    };
}