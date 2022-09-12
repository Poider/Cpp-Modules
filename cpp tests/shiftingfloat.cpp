#include <iostream>
#include <cmath>
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

int main()
{
    
    std::cout << get_fraction_float(22,5) << std::endl;
}