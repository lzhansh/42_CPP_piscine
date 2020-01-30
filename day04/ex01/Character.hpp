#ifndef Character_H
#define Character_H

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

    private:
            std::string _name;
            int _ap;
            AWeapon *_weap;

    public:
            Character();
            Character(std::string const & name);
            Character(Character const &copy);
            Character &operator=(Character const &rhs);
            virtual ~Character();

            void recoverAP();
            void equip(AWeapon* weap);
            void attack(Enemy* enem);
        
            std::string  getName() const;
            int getAp() const;
            AWeapon *getWep() const;

};

std::ostream &operator<<(std::ostream &o, Character const &r);

#endif