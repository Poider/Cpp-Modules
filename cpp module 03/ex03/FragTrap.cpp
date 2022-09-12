#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    name = std::string("Random ScravTrap");
    hp = 100;
    mana = 100;
    ad = 30;
    std::cout << "FragTrap: default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
    std::cout << "FragTrap: param constructor called" << std::endl;
    this->name = name;
    hp = 100;
    mana = 100;
    ad = 30;
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "FragTrap: copy constructor called" << std::endl;
    this->name = other.name;
    this->hp = other.hp;
    this->mana = other.mana;
    this->ad = other.ad;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    this->name = other.name;
    this->hp = other.hp;
    this->mana = other.mana;
    this->ad = other.ad;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: destructor called" << std::endl;
} 

void FragTrap::highFiveguys()
{
    std::cout << "High five guys?  ヘ( ^o^)ノ＼(^_^ )" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << name <<  " attacks " << target<< " causing "<< ad << " points of damage!" << std::endl;
}
