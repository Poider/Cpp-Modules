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

Fixed& Fixed::operator=(const Fixed& other)
{
    raw_value = other.raw_value;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
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

Fixed::Fixed(const int value)
{
    raw_value = (value << fractional_bits_number);
    std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    this->raw_value = roundf(value * (1 << Fixed::fractional_bits_number));
}

float get_fraction_float(const int value, const int fraction_bit_numb)
{
    float fraction;

    fraction = 0;
    for(int i = 0; i < fraction_bit_numb; i++)
    {
        int bit = (value & ( 1 << i )) >> i;
        fraction +=  (1 / pow(2,fraction_bit_numb - i)) * (float)bit;
    }
    return fraction;
}

float Fixed::toFloat( void ) const
{
    float fraction;
    float dec;

    fraction = get_fraction_float(raw_value, fractional_bits_number);
    dec = (float)(raw_value >> fractional_bits_number);
    while(fraction > 1)
        fraction /= 10;
    fraction += dec;
    // std::cout <<"raw"<< raw_value<< std::endl;
    return fraction;
}

int Fixed::toInt( void ) const
{
    return(raw_value >> fractional_bits_number);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}