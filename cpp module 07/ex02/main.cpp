#include "Array.hpp"

int main()
{
   
   { Array<int> arr(3);

    arr[2] = 1;

    for(unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << std::endl;
   }
   system("leaks array_template");
}