#ifndef PEON_H
#define PEON_H

#include "Victim.hpp"
#include <string>
#include <iostream>

class Peon : public Victim {

  public:
    Peon();
    Peon(std::string n);
    Peon(Peon const &copy);
    ~Peon();
    Peon &operator=(Peon const &rhs);

    void getPolymorphed() const;

  private:
    std::string _name;
};

#endif
