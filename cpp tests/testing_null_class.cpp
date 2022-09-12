#include <iostream>

class File{
public:

int a;
char c;
void print()
{
    std::cout << a << std::endl;
}
};

int main()
{
    File *a[4];

    for (int i = 0; i < 4; i++)
    {
        if (a[i])
        std::cout << "filled" << std::endl;
        else 
        std::cout << "empty" << std::endl;
    }
}