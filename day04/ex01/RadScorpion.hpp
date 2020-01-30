#ifndef RadScorpion_H
#define RadScorpion_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy{

    private:
            std::string _type;
            int _hp;

    public:
            RadScorpion();
            RadScorpion(RadScorpion const &copy);
            RadScorpion &operator=(RadScorpion const &rhs);
            virtual ~RadScorpion();


            virtual void takeDamage(int i);
};

#endif