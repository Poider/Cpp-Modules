#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main()
{
    randomChump("rick");
    Zombie  *zombie = newZombie( "morty" );

    zombie->announce();
    delete zombie;
}