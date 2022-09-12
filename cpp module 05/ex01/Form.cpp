#include "Form.hpp"

Form::Form() : name(std::string("random")), sign(150), exec(150)
{
    std::cout << "Form : constructor called" << std::endl;
    _signed = false;
}

Form::Form(const std::string &name, int sign, int exec) : name(name), sign(sign), exec(exec)
{
    _signed = false;
    if(sign > 150 || exec >150)
        throw Form::GradeTooLowException();
    if(exec <= 0 || sign <= 0)
        throw Form::GradeTooHighException();
    std::cout << "Form : param constructor called" << std::endl;
}

Form::Form(const Form& other) : name(other.name), sign(other.sign), exec(other.exec)
{
    _signed = other._signed;
    std::cout << "Form : copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other)
{
    _signed = other._signed;
    std::cout << "Form : = operator called" << std::endl;
    return *this;
}

Form::~Form()
{
    std::cout << "Form : destructor called" << std::endl;
}


const char* Form::GradeTooHighException::what() const _NOEXCEPT
{
    return "Grade too high";
}

const char* Form::GradeTooLowException::what() const _NOEXCEPT
{
    return "Grade too low";
}

const std::string & Form::getName() const
{
    return name;
}

bool Form::getSigned() const
{
    return _signed;
}

int Form::getSign() const
{
    return sign;
}

int Form::getExec() const
{
    return exec;
}

std::ostream& operator<< (std::ostream& out, const Form& form)
{
    out << "form " + form.getName() + " is_signed : " << form.getSigned()\
    << " form sign grade: " << form.getSign() << " form exec grade: " << form.getExec()
    << std::endl;
    return out;
}
void Form::beSigned(Bureaucrat& bureaucrat)
{
    if(bureaucrat.getGrade() <= sign)
    {
        _signed = true;
        bureaucrat.setReason(name ,SIGNED);
    }
    else
    {
        _signed = false;
        bureaucrat.setReason("Grade too low" ,NOT_SIGNED);
        throw Form::GradeTooLowException();
    }
}