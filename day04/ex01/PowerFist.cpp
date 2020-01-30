#include "PowerFist.hpp"

PowerFist::PowerFist() : PowerFist::AWeapon("Power Fist", 8, 50) {
    return ;
}

PowerFist::PowerFist(PowerFist const &copy) {
    *this = copy;
    return ;
}

PowerFist &PowerFist::operator=(PowerFist const &rhs) {
    this->_name = rhs._name;
    this->_cost = rhs._cost;
    this->_dam = rhs._dam;
    return (*this);
}

PowerFist::~PowerFist() {
    return ;
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM! *" <<std::endl;
}