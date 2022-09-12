#ifndef POINT_
#define POINT_

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point{
    const Fixed x;
    const Fixed y;
    
    public:
    Point();
    Point(const float x, const float y);
    Point(const Point& other);
    Point& operator=(const Point& other);
    ~Point();

    const Fixed& x_()const;
    const Fixed& y_()const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif