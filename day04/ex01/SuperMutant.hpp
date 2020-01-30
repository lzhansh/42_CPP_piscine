#ifndef SuperMutant_H
#define SuperMutant_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {

    private:
            std::string _type;
            int _hp;

    public:
            SuperMutant();
            SuperMutant(SuperMutant const &copy);
            SuperMutant &operator=(SuperMutant const &rhs);
            virtual  ~SuperMutant();

            virtual void takeDamage(int i);
};

#endif