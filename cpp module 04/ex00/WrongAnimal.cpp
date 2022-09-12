#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = std::string("WrongAnimal");
    std::cout << "WrongAnimal : constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal : copy constructor called" << std::endl;
    type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal : = operator called" << std::endl;
    type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal : destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal : What does the fox say?" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return this->type;
}