#include "Dog.hpp"

Dog::Dog()
{
    type = std::string("Dog");
    std::cout << "Dog : constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog : copy constructor called" << std::endl;
    type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog : = operator called" << std::endl;
    type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog : destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog Woof" << std::endl;
}

const std::string& Dog::getType() const
{
    return this->type;
}