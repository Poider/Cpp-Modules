#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
    this->name = name;
    weapon = NULL;
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}

void HumanB::attack()
{
    if (weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << "No weapon" << std::endl;
}

HumanB::~HumanB()
{
    delete weapon;
    // std::cout<< "destructor called" << std::endl;
}