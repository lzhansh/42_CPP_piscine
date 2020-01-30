#ifndef PowerFist_H
#define PowerFist_H

#include "AWeapon.hpp"
#include <string>

class PowerFist : public AWeapon {

    private:
            std::string _name;
            int _cost;
            int _dam;
    public:
            PowerFist();
            PowerFist(PowerFist const &copy);
            PowerFist &operator=(PowerFist const &rhs);
            ~PowerFist();

            virtual void attack() const;
};

#endif