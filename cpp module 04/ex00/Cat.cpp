#include "Cat.hpp"

Cat::Cat()
{
    type = std::string("Cat");
    std::cout << "Cat : constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat : copy constructor called" << std::endl;
    type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat : = operator called" << std::endl;
    type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat : destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat Meow" << std::endl;
}

const std::string& Cat::getType() const
{
    return this->type;
}