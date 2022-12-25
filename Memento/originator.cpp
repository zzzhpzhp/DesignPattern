#include "originator.h"

#include <ostream>
#include <iostream>

#include "memento.h"

namespace memento_ns
{
    class Memento;

    Originator::Originator()
    {}

    int Originator::getA() const
    {
        return a_;
    }

    int Originator::getB() const
    {
        return b_;
    }

    void Originator::setA(int a)
    {
        a_ = a;
    }

    void Originator::setB(int b)
    {
        b_ = b;
    }

    Memento *Originator::getMemento()
    {
        return new Memento(*this);
    }

    void Originator::setMemento(Memento memento)
    {
        a_ = memento.getA();
        b_ = memento.getB();
    }
}
