#include "Peon.hpp"

Peon::Peon(std::string n) : _name(n) {
  
  std::cout << "Zog zog." << std::endl; 
  return;
}

Peon::Peon(Peon const &copy) {
  *this = copy;
  std::cout << "Zog zog." << std::endl;
  return;
}

Peon &Peon::operator=(Peon const &rhs) {

  this->_name = rhs._name;
  return (*this);
}

Peon::~Peon() {

  std::cout << "Bleuark..." << std::endl;
  return ;
}

void Peon::getPolymorphed() const {
  std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
  return ;
}