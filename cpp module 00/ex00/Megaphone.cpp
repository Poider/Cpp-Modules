#include "Megaphone.hpp"

int main(int argCount, char **argVector)
{
    // std :: cout << argCount << " " << argVector << std :: endl;
    if(argCount == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for(int i = 1; i < argCount; i++)
        for(int j = 0; j < (int)strlen(argVector[i]); j++)
            std::cout << (char)toupper(argVector[i][j]);
    std::cout << std::endl;
}