#include <iostream>
#include <string>
#include <cmath>
#include "Convert.hpp"

int main(int argc, char* argv[])
{
    if(argc != 2)
        return 0;
    std::string input(argv[1]);
    if(input.size() == 0)
        return 0;

    Convert a(input);
    a.print();
}