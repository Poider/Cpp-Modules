#ifndef HUMANA_
#define HUMANA_

#include "Weapon.hpp"
//takes weapon as reference
class HumanA{
    std::string name;
    Weapon  &weapon;

    public:
    HumanA(const std::string &name, Weapon &weapon);
    void attack();
};

#endif