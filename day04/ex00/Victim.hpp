#ifndef VICTIM_H
#define VICTIM_H

#include <string>
#include <iostream>

class Victim {

  public:
    Victim();
    Victim(std::string n);
    Victim(Victim const &copy);
    ~Victim();
    Victim &operator=(Victim const &rhs);

    void getPolymorphed() const;
    void       setName(std::string name);
    std::string getName() const;

  private:
    std::string _name;
};

std::ostream &operator<<(std::ostream &o, Victim const &r);

#endif
