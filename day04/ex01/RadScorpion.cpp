#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : RadScorpion::Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(RadScorpion const &copy) {
    *this = copy;
    return ;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}


void RadScorpion::takeDamage(int i) {
    if (this->_hp >= 0)
        this->_hp -= i;
}