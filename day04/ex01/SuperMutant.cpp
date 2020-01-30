#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : SuperMutant::Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return ;
}

SuperMutant::SuperMutant(SuperMutant const &copy) {
    *this = copy;
    return ;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh ..." << std::endl;
    return ;
}


void SuperMutant::takeDamage(int i) {
    if (this->_hp >= 0)
        this->_hp -= (i - 3);
}