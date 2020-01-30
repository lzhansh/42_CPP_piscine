#ifndef Enemy_H
#define Enemy_H

#include <string>
#include <iostream>

class Enemy {

    private:
            int _hp;
            std::string _type; 

    public:
            Enemy();
            Enemy(int hp, std::string const & type);
            Enemy(Enemy const &copy);
            Enemy &operator=(Enemy const &rhs);
            virtual ~Enemy();

            std::string  getType() const;
            int getHP() const;

            virtual void takeDamage(int i);
};

#endif