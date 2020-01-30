#include "Enemy.hpp"

Enemy::Enemy() {
    
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
    return ;
}

Enemy::Enemy(Enemy const &copy) {
    *this = copy;
    return ;
}

Enemy &Enemy::operator=(Enemy const &rhs) {
    this->_hp = rhs._hp;
    this->_type = rhs._type;
    return (*this);
}

Enemy::~Enemy() {
    return ;
}

std::string  Enemy::getType() const {
    return(this->_type);
}

int Enemy::getHP() const {
    return (this->_hp);
}

// void Enemy::setHP(int n) {
//     this->_hp = n;
// }

void Enemy::takeDamage(int i) {
    if (this->getHP() >= 0 && i > 0)
        this->_hp -= i;
}