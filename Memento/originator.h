#pragma once

#include <ostream>

namespace memento_ns
{
    class Memento;

    class Originator
    {
    public:
        Originator();

        int getA() const;

        int getB() const;

        void setA(int a);

        void setB(int b);

        Memento *getMemento();

        void setMemento(Memento memento);

        friend std::ostream &operator<<(std::ostream &os, const Originator &originator)
        {
            os << "a: " << originator.getA() << " b: " << originator.getB();
            return os;
        }

    private:
        int a_{}, b_{};
    };
}