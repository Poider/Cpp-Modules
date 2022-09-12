#ifndef ClapTrap_
#define ClapTrap_

#include <iostream>
#include <string>

class ClapTrap{
    protected:
    std::string name;
    unsigned int hp;
    unsigned int mana;
    unsigned int ad;

    public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif