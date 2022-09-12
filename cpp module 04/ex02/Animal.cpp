#include "Animal.hpp"

Animal::Animal()
{
    type = std::string("Animal");
    std::cout << "Animal : constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal : copy constructor called" << std::endl;
    type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal : = operator called" << std::endl;
    type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal : destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal : random sound" << std::endl;
}

const std::string& Animal::getType() const
{
    return this->type;
}