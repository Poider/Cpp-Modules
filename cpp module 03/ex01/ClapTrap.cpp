#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = std::string("Random ClapTrap");
    hp = 10;
    mana = 10;
    ad = 0;
    std::cout << "ClaptTrap: default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
{
    std::cout << "ClaptTrap: param constructor called" << std::endl;
    this->name = name;
    hp = 10;
    mana = 10;
    ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "ClaptTrap: copy constructor called" << std::endl;
    this->name = other.name;
    this->hp = other.hp;
    this->mana = other.mana;
    this->ad = other.ad;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    this->name = other.name;
    this->hp = other.hp;
    this->mana = other.mana;
    this->ad = other.ad;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClaptTrap: destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(mana)
    {
    mana -= 1;
    std::cout << "ClapTrap " << name <<  " attacks " << target<< " causing "<< ad << " points of damage!" << std::endl;
    }
    else std::cout << "No mana" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hp -= amount;
    std::cout << "ClapTrap " << name <<  "takes " <<  amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(mana)
    {
    mana -= 1;
    hp += amount;
    std::cout << "ClapTrap " << name <<  "repairs " << amount << "of Hp" << std::endl;
    }
    else std::cout << "No mana" << std::endl;
}