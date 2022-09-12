//!!! this didnt work fine simple cus float isnt precise in substraction, for example, 0.4 would make it 0.399999

int bitwise_add(int a, int b)
{
    while (b != 0)
    {
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

void add_fraction_to_raw(float fraction_part, int fractional_bits_number, int& raw)
{
    // std::cout<<"pp"<<fraction_part << std::endl;
    for(int i = 1; i <= fractional_bits_number; i++)//start from 1->8 for when f_b_n - i
    {
        fraction_part *= 2;
        if(fraction_part >= 1)
        {
            // raw = raw ^ ( 1 << (fractional_bits_number - i));
            raw = bitwise_add(raw, 1 << (fractional_bits_number - i));
            fraction_part -= 1;
        }
        else
            raw = raw ^ ( 0 << (fractional_bits_number - i));
    }
}
//raw stored               0.01101011 :0.417
//raw needed to be stored  0.01101100  : .4219
Fixed::Fixed(const float value)
{
    float       decimal_part;
    float       fraction_part;
    std::cout << "val" <<value << std::endl;
    // fraction_part = modff(value, &decimal_part);
    decimal_part = int(value);
    fraction_part = value - decimal_part;
    std::cout << "frac" <<fraction_part << std::endl;
    raw_value = (int)decimal_part << fractional_bits_number;
    add_fraction_to_raw(fraction_part, fractional_bits_number, raw_value);
   
    //make fraction part into fraction bits and push them until fractional bits number
    std::cout << "float constructor called" << std::endl;
    // this->raw_value = roundf(value * (1 << Fixed::fractional_bits_number));
}