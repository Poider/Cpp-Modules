#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    name = std::string("Random DiamondTrap");
    hp = FragTrap::hp;
    mana = ScavTrap::hp;
    ad = FragTrap::ad;
    std::cout << "Diamond: default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
    std::cout << "Diamond: param constructor called" << std::endl;
    this->name = name;
    ClapTrap::name = name + std::string("_clap_name");
    hp = FragTrap::hp;
    mana = ScavTrap::hp;
    ad = FragTrap::ad;
    std::cout << ScavTrap::ad << "_____"<<std::endl;
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
    ClapTrap::attack(target);
    FragTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap name : " << ClapTrap::name << " DiamondTrap Name : " << name << std::endl;
}