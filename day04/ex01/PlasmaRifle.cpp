#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : PlasmaRifle::AWeapon("Plasma Rifle", 5, 21) {
    return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &copy) {
    *this = copy;
    return ;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &rhs) {
    this->_name = rhs._name;
    this->_cost = rhs._cost;
    this->_dam = rhs._dam;
    return (*this);
}

PlasmaRifle::~PlasmaRifle() {
    return ;
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" <<std::endl;
}