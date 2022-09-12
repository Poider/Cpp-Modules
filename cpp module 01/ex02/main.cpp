#include <string>
#include <iostream>

int main()
{
    std::string brain("HI THIS IS BRAIN");
    std::string *brainPtr = &brain;
    std::string& brainref = brain;

    std::cout <<"The memory address of the string variable: "<<(void *)&brain << std::endl\
    <<"The memory address held by stringPTR: " <<(void *)brainPtr << std::endl\
    << "The memory address held by stringREF: "<<(void *)&brainref << std::endl;
  
    std::cout << "The value of the string variable: " << brain << std::endl\
    << "The value pointed to by stringPTR: " <<*brainPtr<< std::endl \
    << "The value pointed to by stringREF: " << brainref << std::endl;
}