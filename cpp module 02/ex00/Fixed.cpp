#include "Fixed.hpp"

Fixed::Fixed()
{
    raw_value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    raw_value = other.raw_value;
    std::cout << "Copy constructor called" << std::endl;
}

void Fixed::operator=(const Fixed& other)
{
    raw_value = other.raw_value;
    std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return raw_value;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    raw_value = raw;
}