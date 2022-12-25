#include "memento.h"

namespace memento_ns
{
    Memento::Memento(Originator originator)
    {
        a_ = originator.getA();
        b_ = originator.getB();
    }

    int Memento::getA() const
    {
        return a_;
    }

    int Memento::getB() const
    {
        return b_;
    }

    void Memento::setA(int a)
    {
        a_ = a;
    }

    void Memento::setB(int b)
    {
        b_ = b;
    }
}