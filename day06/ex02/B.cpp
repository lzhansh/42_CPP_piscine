#include "B.hpp"

B::B() {

}

B::B(B const &copy) {
    *this = copy;
}

B &B::operator=(B const &rhs) {
    (void)rhs;
    return (*this);
}

B::~B() {
    
}