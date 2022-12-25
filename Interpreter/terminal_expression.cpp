#include "terminal_expression.h"

namespace interpreter_ns
{
    TerminalExpression::TerminalExpression(std::string data)
    {
        data_ = std::move(data);
    }

    bool TerminalExpression::interpret(std::string context)
    {
        return context.find(data_) != std::string::npos;
    }
}
