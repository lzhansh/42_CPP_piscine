#ifndef SORCERER_H
#define SORCERER_H

#include "Victim.hpp"
#include <string>
#include <iostream>

class Sorcerer {

  public:
    Sorcerer();
    Sorcerer(std::string n, std::string t);
    Sorcerer(Sorcerer const &copy);
    ~Sorcerer();
    Sorcerer &operator=(Sorcerer const &rhs);

    void polymorph(Victim const &obj) const;
    void        setName(std::string name);
    void        setTitle(std::string title);
    std::string getName() const;
    std::string getTitle() const;

  private:
    std::string _name;
    std::string _title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &r);

#endif
