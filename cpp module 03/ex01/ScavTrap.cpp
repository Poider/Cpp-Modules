#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    name = std::string("Random ScravTrap");
    hp = 100;
    mana = 50;
    ad = 20;
    std::cout << "ScavTrap: default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
{
    std::cout << "ScavTrap: param constructor called" << std::endl;
    this->name = name;
    hp = 100;
    mana = 50;
    ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    std::cout << "ScavTrap: copy constructor called" << std::endl;
    this->name = other.name;
    this->hp = other.hp;
    this->mana = other.mana;
    this->ad = other.ad;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    this->name = other.name;
    this->hp = other.hp;
    this->mana = other.mana;
    this->ad = other.ad;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: destructor called" << std::endl;
} 

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(mana)
    {
        std::cout << "ScavTrap " << name <<  " attacks " << target<< " causing "<< ad << " points of damage!" << std::endl;
    }
    else
        std::cout << "No mana" << std::endl;
}
