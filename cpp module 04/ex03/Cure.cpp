#include "Cure.hpp"

Cure::Cure()
{
    type = std::string("cure");
    std::cout << "Cure : constructor called" << std::endl;
}

Cure::Cure(const Cure& other)
{
    std::cout << "Cure : copy constructor called, copy from: " << other.getType() << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
    std::cout << "Cure : = operator called, copy from : "<< other.getType() << std::endl;
    return *this;
}

Cure::~Cure()
{
    std::cout << "Cure : destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals  " << target.getName() << "'s wounds *"<< std::endl;
}
