#include "C.hpp"

C::C() {

}

C::C(C const &copy) {
    *this = copy;
}

C &C::operator=(C const &rhs) {
    (void)rhs;
    return (*this);
}

C::~C() {
    
}