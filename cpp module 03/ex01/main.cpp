#include "ScavTrap.hpp"

int main()
{
    ScavTrap garen("Garen");
    garen.attack("urgot");
    garen.takeDamage(2);
    garen.beRepaired(5);
}