#include "Point.hpp"

int main()
{
    Point a = Point(-3,0);
    Point b = Point(-1,3);
    Point c = Point(2,0);
    Point P = Point(1,0.2);

    bool result = bsp(a, b, c, P);
    if (result)
        std:: cout << "result : inside" << std::endl;
    else
        std:: cout << "result : outside" << std::endl;
        return 0;
}