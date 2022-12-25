#include <iostream>

#include "or_expression.h"
#include "and_expression.h"

std::string resultInterpret(bool res)
{
    if (res)
    {
        return "yes";
    }
    return "no";
}

int main()
{
    std::cout << ">>>>>>>> Interpret pattern <<<<<<<<" << std::endl;

    auto red = std::make_shared<interpreter_ns::TerminalExpression>("red");
    auto green = std::make_shared<interpreter_ns::TerminalExpression>("green");
    auto car = std::make_shared<interpreter_ns::TerminalExpression>("car");

    auto color_judge = std::make_shared<interpreter_ns::OrExpression>(red, green);

    auto mc_queen = std::make_shared<interpreter_ns::AndExpression>(red, car);

    std::cout << "red is one type of color: " << resultInterpret(color_judge->interpret("red")) << std::endl;
    std::cout << "green is one type of color: " << resultInterpret(color_judge->interpret("green")) << std::endl;
    std::cout << "car is one type of color: " << resultInterpret(color_judge->interpret("car")) << std::endl;

    // 麦坤是电影《汽车总动员》中的角色，是一辆红色跑车
    std::cout << "McQueen is a red car: " << resultInterpret(mc_queen->interpret("red car")) << std::endl;
    std::cout << "McQueen is a green car: " << resultInterpret(mc_queen->interpret("green car")) << std::endl;

    return 0;
}
