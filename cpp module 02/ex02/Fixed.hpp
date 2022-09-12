#ifndef _FIXED 
#define _FIXED

#include <iostream>
#include <string>
#include <cmath>

#define EPSILON 0.00001

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

    //overloads
    //arithmetic
    Fixed operator+(const Fixed& c2);
    Fixed operator-(const Fixed& c2);
    Fixed operator*(const Fixed& c2);
    Fixed operator/(const Fixed& c2);

    //comparison

    bool operator==(const Fixed& c2) const;
    bool operator!=(const Fixed& c2) const;
    bool operator>(const Fixed& c2) const;
    bool operator<(const Fixed& c2) const;
    bool operator>=(const Fixed& c2) const;
    bool operator<=(const Fixed& c2) const;

    //increment
    Fixed& operator++();
    Fixed operator++(int);
    //decrement
    Fixed& operator--();
    Fixed operator--(int);

    //static funcs
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
};
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);
#endif

