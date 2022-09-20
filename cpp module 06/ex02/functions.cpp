#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include "Base.hpp"

Base * generate(void)
{
    srand(time(NULL));
    int random_numb = rand() % 3;
    Base *ptr = NULL;
    switch (random_numb) {
        case 0:
            ptr = new A;
            break;
        case 1: 
            ptr = new B;
            break;
        case 2:
            ptr = new C;
            break;
    }
    return ptr;
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "type : A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "type : B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "type : C" << std::endl;
}

void identify(Base& p)
{   
    int success = 1;
    try {
        A& a = dynamic_cast<A&>(p);
        UNUSED(a);
    }
    catch(std::exception& e) { 
        success = 0;
    }
    if(success == 1)
    {
        std::cout << "type : A" << std::endl;
        return;
    }
    success = 1;
    try {
        B& b = dynamic_cast<B&>(p);
        UNUSED(b);
    }
    catch(std::exception& e) { 
        success = 0;
    }
    if(success == 1)
    {
        std::cout <<  "type : B" << std::endl;
        return;
    }

    success = 1;
    try {
        C& c = dynamic_cast<C&>(p);
        UNUSED(c);
    }
    catch(std::exception& e) { 
        success = 0;
    }
    if(success == 1)
    {
        std::cout <<  "type : C" << std::endl;
        return;
    }
}
