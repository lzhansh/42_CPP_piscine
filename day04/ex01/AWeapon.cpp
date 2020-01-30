#include "AWeapon.hpp"

AWeapon::AWeapon() {
    
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _cost(apcost), _dam(damage) {
    return ;
}

AWeapon::AWeapon(AWeapon const &copy) {
    *this = copy;
    return ;
}

AWeapon &AWeapon::operator=(AWeapon const &rhs) {
    this->_name = rhs._name;
    this->_cost = rhs._cost;
    this->_dam = rhs._dam;
    return (*this);
}

AWeapon::~AWeapon() {
    return ;
}

std::string  AWeapon::getName() const {
    return(this->_name);
}

int AWeapon::getAPCost() const {
    return (this->_cost);
}


int AWeapon::getDamage() const {
    return (this->_dam);
}

void AWeapon::setAPCost(int n) {
    this->_cost = n;
}

void AWeapon::setDamage(int m) {
    this->_dam = m;
}