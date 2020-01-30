#include "Victim.hpp"

Victim::Victim() {
    this->_name = "Joe";
    std::cout << "Some random victim called " << this->_name \
              << " just popped !" << std::endl;
    return ;
}

Victim::Victim(std::string n) : _name(n) {

  std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
  return;
}

Victim::Victim(Victim const &copy) {
  *this = copy;
  std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
  return;
}

Victim &Victim::operator=(Victim const &rhs) {

  this->_name = rhs._name;
  return (*this);
}

Victim::~Victim() {

  std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
  return ;
}

void Victim::setName(std::string name) {
    this->_name = name;
    return ;
}

std::string Victim::getName() const {
  return (this->_name);
}

void Victim::getPolymorphed() const {
  std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
  return ;
}

std::ostream &operator<<(std::ostream &o, Victim const &r) {
  o << "I'm " << r.getName() << " and I like otters !" << std::endl;
  return (o);
}
