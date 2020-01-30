#include "Character.hpp"

Character::Character() {
    
}

Character::Character(std::string const & name) : _name(name), _ap(40), _weap(NULL) {
    return ;
}

Character::Character(Character const &copy) {
    *this = copy;
    return ;
}

Character &Character::operator=(Character const &rhs) {
    this->_name = rhs._name;
    this->_ap = rhs._ap;
    this->_weap = rhs._weap;
    return (*this);
}

Character::~Character() {
    return ;
}

std::string  Character::getName() const {
    return(this->_name);
}

int Character::getAp() const {
    return (this->_ap);
}

AWeapon *Character::getWep() const {
    return (this->_weap);
}

void Character::recoverAP() {
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}

void Character::equip(AWeapon* weap) {
    this->_weap = weap;
}

void Character::attack(Enemy* en) {
    int c;

    if (this->_weap && en)
    {
        c = this->_weap->getAPCost();
        if (this->_ap - c >= 0)
        {
            this->_weap->attack();
            en->takeDamage(this->_weap->getDamage());
            if (en->getHP() <= 0)
                delete en;
            this->_ap -= c;
            std::cout << this->_name << " attacks " << en->getType() << " with a " << this->_weap->getName() << std::endl;
        }
    }
}

std::ostream &operator<<(std::ostream &o, Character const &r) {
    if (r.getWep())
        o << r.getName() << " has " << r.getAp() << " AP and wields a " << r.getWep()->getName() << std::endl;
    else
        o << r.getName() << " has " << r.getAp() << " AP and is unarmed" << std::endl;
    return (o);
}