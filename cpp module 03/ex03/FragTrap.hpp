#ifndef FragTrap_
#define	FragTrap_

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public virtual ClapTrap {
    public:
    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();
    void highFiveguys();
    void attack(const std::string& target);
};

#endif
