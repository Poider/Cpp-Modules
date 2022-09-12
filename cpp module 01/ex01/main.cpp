#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    int zombie_number = 3;
    Zombie* zombie = zombieHorde(zombie_number, "rick");

    for( int i = 0; i < zombie_number; i++ )
    zombie[i].announce();

    delete[] zombie;
}