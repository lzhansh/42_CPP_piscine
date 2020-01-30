#ifndef A_H
#define A_H

#include "Base.hpp"

class A : public Base {

    public:

        A();
        A(A const &copy);
        A &operator=(A const &rhs);
        ~A();
};

#endif