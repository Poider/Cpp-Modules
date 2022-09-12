#ifndef _FIXED 
#define _FIXED
#include <iostream>
#include <string>
#include <cmath>

class Fixed{

    int raw_value;
    static const int fractional_bits_number = 8;
    
    public:

    //constructors
    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    //setters getters
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif