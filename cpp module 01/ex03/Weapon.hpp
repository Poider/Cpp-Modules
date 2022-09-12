#ifndef WEAPON_
#define WEAPON_
#include <iostream>
#include <string>

class Weapon{

    std::string type;
    public:
    Weapon(const std::string& type);
    std::string& getType();
    void    setType(const std::string& type);

};

#endif