#pragma once

#include "originator.h"

namespace memento_ns
{
    class Memento
    {
    public:
        Memento();

        explicit Memento(Originator originator);

        int getA() const;

        int getB() const;

        void setA(int a);

        void setB(int b);

    private:
        int a_{}, b_{};
    };
}
