#include "Zombie.hpp"

Zombie::Zombie(const std::string& name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << name << ":  BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " is destroyed" << std::endl;
}

Zombie::Zombie()
{
    this->name = std::string("");
}

void Zombie::init_zombie(const std::string& name)
{
    this->name = name;
}