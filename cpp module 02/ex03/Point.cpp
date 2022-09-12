#include "Point.hpp"

Point::Point()
{
    std::cout << "default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
    std::cout << "param constructor called" << std::endl;
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
    other.x_();
    std::cout << "copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& other)
{
    other.x_();
    std::cout << "= operator called" << std::endl;
    return *this;
}

Point::~Point()
{
    std::cout << "destructor called" << std::endl;
}

const Fixed& Point::x_()const
{
    return this->x;
}

const Fixed& Point::y_()const
{
    return this->y;
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed w1;
    Fixed w2;

    Fixed Ax = a.x_();
    Fixed Ay = a.y_();
    Fixed Bx = b.x_();
    Fixed By = b.y_();
    Fixed Cx = c.x_();
    Fixed Cy = c.y_();
    Fixed Px = point.x_();
    Fixed Py = point.y_();


    w1 = (Ax * (Cy - Ay) + (Py - Ay) * (Cx - Ax) - Px * (Cy - Ay))  / ((By - Ay) * (Cx - Ax) - (Bx - Ax) * (Cy - Ay)); 
    w2 = (Px - Py -Ax+Ay - w1 *(Bx -Ax -By+Ay)) / (Cx - Ax - Cy +Ay);
    // std::cout <<"-------------w1-w2 :"<< w1/w2 << " "<< w2 << std::endl;
   
    if(w1 > 0 && w2 > 0  && w1 + w2 < 1)
        return true;
    return false;
}