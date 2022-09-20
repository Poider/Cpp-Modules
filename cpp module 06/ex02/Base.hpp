#ifndef Base_
#define Base_

#define UNUSED(x) (void)(x)

#include <random>
#include <iostream>
#include <string>

class Base{

    public:
   
    virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif