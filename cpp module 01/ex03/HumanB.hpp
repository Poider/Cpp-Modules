#ifndef HUMANB_
#define HUMANB_
#include "Weapon.hpp"

//weapon as ptr
class HumanB{
    std::string name;
    Weapon  *weapon;

    public:
    HumanB(const std::string &name);
    void setWeapon(Weapon *weapon);
    void attack();
    ~HumanB();
};

#endif