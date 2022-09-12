#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria : constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
    std::cout << "AMateria : copy constructor called" << std::endl;
}


AMateria::AMateria(const AMateria& other)
{
    this->type = other.type;
    std::cout << "AMateria : copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    this->type = other.type;
    std::cout << "AMateria : = operator called" << std::endl;
    return *this;
}

AMateria::~AMateria()
{
    std::cout << "AMateria : destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria : use materia pawa on" << target.getName() << std::endl;
}