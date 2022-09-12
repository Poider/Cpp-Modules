#ifndef Form_
#define Form_

#include <iostream>
#include <string>

class Form{

    public:
    Form();
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();
};

#endif