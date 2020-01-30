#ifndef B_H
#define B_H

#include "Base.hpp"

class B: public Base {
    public:

        B();
        B(B const &copy);
        B &operator=(B const &rhs);
        ~B();
};

#endif 