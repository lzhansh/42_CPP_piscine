#ifndef C_H
#define C_H

#include "Base.hpp"

class C : public Base {
    public:

        C();
        C(C const &copy);
        C &operator=(C const &rhs);
        ~C();
};

#endif