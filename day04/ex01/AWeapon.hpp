#ifndef AWEAPON_H
#define AWEAPON_H

#include <string>
#include <iostream>

class AWeapon {

    private:
            std::string _name;
            int _cost;
            int _dam;
    public:
            AWeapon();
            AWeapon(std::string const & name, int apcost, int damage);
            AWeapon(AWeapon const &copy);
            AWeapon &operator=(AWeapon const &rhs);
            ~AWeapon();

            std::string  getName() const;
            int getAPCost() const;
            int getDamage() const;
            void setAPCost(int n);
            void setDamage(int m);
            virtual void attack() const = 0;
};

#endif