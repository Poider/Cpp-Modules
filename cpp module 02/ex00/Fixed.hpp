#ifndef _FIXED 
#define _FIXED
#include <iostream>
#include <string>

class Fixed{

    int raw_value;
    static const int fractional_bits_number = 8;
    
    public:
    Fixed();
    Fixed(const Fixed& other);
    void operator=(const Fixed& other);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif