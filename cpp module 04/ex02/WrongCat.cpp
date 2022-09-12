#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = std::string("WrongCat");
    std::cout << "WrongCat : constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    std::cout << "WrongCat : copy constructor called" << std::endl;
    type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat : = operator called" << std::endl;
    type = other.type;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat : destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Do I Meow?" << std::endl;
}

const std::string& WrongCat::getType() const
{
    return this->type;
}