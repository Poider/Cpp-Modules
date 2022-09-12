#include "Harl.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Expected an arguemnt" << std::endl;
        return 1;
    }
    Harl harl;
    char c = argv[1][0];
    c = tolower(c);
    switch(c)
    {
        case 'd':
            harl.complain("debug");
            harl.complain("info");
            harl.complain("warning");
            harl.complain("error");
            break;
        
        case 'i':
            harl.complain("info");
            harl.complain("warning");
            harl.complain("error");
            break;
        
        case 'w':
            harl.complain("warning");
            harl.complain("error");
            break;
        
        case 'e':
            harl.complain("error");
            break;
    }
}