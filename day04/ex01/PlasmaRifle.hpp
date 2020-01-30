#ifndef PlasmaRifle_H
#define PlasmaRifle_H

#include "AWeapon.hpp"
#include <string>

class PlasmaRifle : public AWeapon {

    private:
            std::string _name;
            int _cost;
            int _dam;
    public:
            PlasmaRifle();
            PlasmaRifle(PlasmaRifle const &copy);
            PlasmaRifle &operator=(PlasmaRifle const &rhs);
            ~PlasmaRifle();


            virtual void attack() const;
};

#endif