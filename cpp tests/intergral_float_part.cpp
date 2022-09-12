#include <iostream>
#include <cmath>

int main    ()
{
    float value = 23.56;
     float     decimal_part;
    float     fraction_part;

    fraction_part = modff(value, &decimal_part);
    std::cout << decimal_part << std::endl;
    std::cout << fraction_part << std::endl;
}