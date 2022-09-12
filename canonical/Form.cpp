#include "Form.hpp"

Form::Form()
{
    std::cout << "Form : constructor called" << std::endl;
}

Form::Form(const Form& other)
{
    std::cout << "Form : copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    std::cout << "Form : = operator called" << std::endl;
    return *this;
}

Form::~Form()
{
    std::cout << "Form : destructor called" << std::endl;
}
