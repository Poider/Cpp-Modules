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

Fixed Fixed::operator+(const Fixed& c2)
{
    Fixed temp;
    
    temp.raw_value = this->raw_value + c2.raw_value;
    return temp;
}

Fixed Fixed::operator-(const Fixed& c2)
{
    Fixed temp;
    
    temp.raw_value = this->raw_value - c2.raw_value;
    return temp;
}

Fixed Fixed::operator*(const Fixed& c2)
{
    Fixed temp;

    temp.raw_value = this->raw_value * c2.raw_value;
    temp.raw_value = temp.raw_value >> fractional_bits_number;
    return temp;
}

Fixed Fixed::operator/(const Fixed& c2)
{
    float percentage = (float)this->raw_value / (float)c2.raw_value;
    Fixed temp(percentage);
    return temp;
}

bool Fixed::operator==(const Fixed& c2) const
{
    return (this->raw_value == c2.raw_value);
}

bool Fixed::operator!=(const Fixed& c2) const
{
    return (this->raw_value != c2.raw_value);
}

bool Fixed::operator>(const Fixed& c2) const
{
    return (this->raw_value > c2.raw_value);
}

bool Fixed::operator<(const Fixed& c2) const
{
    return (this->raw_value < c2.raw_value);
}

bool Fixed::operator>=(const Fixed& c2) const
{
    return (this->raw_value >= c2.raw_value);
}

bool Fixed::operator<=(const Fixed& c2) const
{
    return (this->raw_value <= c2.raw_value);
}

Fixed& Fixed::operator++()
{
    // this->raw_value = raw_value + (1 << fractional_bits_number);
    this->raw_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    // this->raw_value = raw_value + (1 << fractional_bits_number);
    this->raw_value++;
    return tmp;
}


Fixed& Fixed::operator--()
{
    // this->raw_value = raw_value - (1 << fractional_bits_number);
    this->raw_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    // this->raw_value = raw_value - (1 << fractional_bits_number);
    this->raw_value--;
    return tmp;
}


const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if(a.raw_value < b.raw_value)
        return a;
    return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a.raw_value < b.raw_value)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a.raw_value < b.raw_value)
        return b;
    return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if(a.raw_value < b.raw_value)
        return b;
    return a;
}



//it works on negative value cus when you shift negative value of decimal part it does compliment 2s by itself cus its included in the negative value, then you add it to the fraction value


