#include "Ice.hpp"

Ice::Ice()
{
    type = std::string("ice");
    std::cout << "Ice : constructor called" << std::endl;
}

Ice::Ice(const Ice& other)
{
    std::cout << "Ice : copy constructor called, copy from : "<< other.getType() << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << "Ice : = operator called, copy from : " << other.getType() << std::endl;
    return *this;
}

Ice::~Ice()
{
    std::cout << "Ice : destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}