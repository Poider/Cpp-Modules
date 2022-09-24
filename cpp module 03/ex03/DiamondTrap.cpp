#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    name = std::string("Random DiamondTrap");
    hp = 100;
    mana = 50;
    ad = 30;
    std::cout << "Diamond: default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
    std::cout << "Diamond: param constructor called" << std::endl;
    this->name = name;
    ClapTrap::name = name + std::string("_clap_name");
    hp = 100;
    mana = 50;
    ad = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
    std::cout << "Diamond: copy constructor called" << std::endl;
    this->name = other.name;
    this->hp = other.hp;
    this->mana = other.mana;
    this->ad = other.ad;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    this->name = other.name;
    this->hp = other.hp;
    this->mana = other.mana;
    this->ad = other.ad;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond: destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap name : " << ClapTrap::name << " DiamondTrap Name : " << name << std::endl;
}