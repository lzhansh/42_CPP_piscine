#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string n, std::string t) : _name(n), _title(t) {

  std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
  return ;
}

Sorcerer::Sorcerer(Sorcerer const &copy) {
  *this = copy;
  std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
  return;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {

  this->_name = rhs._name;
  this->_title = rhs._title;
  return (*this);
}

Sorcerer::~Sorcerer() {

  std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
  return ;
}

void Sorcerer::setName(std::string name)
{
    this->_name = name;
    return ;
}

void Sorcerer::setTitle(std::string title)
{
    this->_title = title;
    return ;
}

std::string Sorcerer::getName() const{
  return (this->_name);
}

std::string Sorcerer::getTitle() const{
  return (this->_title);
}

void Sorcerer::polymorph(Victim const &obj) const {
  obj.getPolymorphed();
  return ;
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &r) {
  o << "I am " << r.getName() << ", " << r.getTitle() << ", and I like ponies !" <<std::endl;
  return (o);
}
