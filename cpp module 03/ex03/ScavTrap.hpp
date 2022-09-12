#ifndef ScavTrap_
#define	ScavTrap_

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public virtual ClapTrap {
    public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string& target);
};

#endif
