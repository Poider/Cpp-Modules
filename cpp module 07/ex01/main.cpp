#include "iter.hpp"

void func(char c)
{
    std::cout << c << std::endl;
}

int main()
{
    char arr[3] = { 'a', 'b', 'c'};
    ::iter(arr,3,func);
}