#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name(std::string("random"))
{
    std::cout << "Bureaucrat : constructor called" << std::endl;
    this->grade = 150;
    reason = "Not signed yet.";
    form = "";
    _signed = NOT_SIGNED;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
    reason = "Not signed yet.";
    form = "";
    _signed = NOT_SIGNED;
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if(grade <= 0)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;

    std::cout << "Bureaucrat : param constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name)
{
    reason = other.reason;
    form = other.form;
    _signed = other._signed;
    grade = other.grade;
    std::cout << "Bureaucrat : copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    reason = other.reason;
    form = other.form;
    _signed = other._signed;
    grade = other.grade;
    std::cout << "Bureaucrat : = operator called" << std::endl;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    return "Grade too low";
}

const std::string& Bureaucrat::getName() const 
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

void Bureaucrat::incrementGrade()
{   
    if(grade == 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade()
{
    if(grade == 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &obj)
{
    out << obj.getName() << ", bureacrat grade " << obj.getGrade() << std::endl;
    return out;
}

void Bureaucrat::setReason(const std::string& reasonOrform, int type)
{
    _signed = type;
    if (type == SIGNED)
        this->form = reasonOrform;
    else
        this->reason = reasonOrform;
}

void Bureaucrat::signForm()
{
    if(_signed == SIGNED)
        std::cout << name << " signed " << form << std::endl;
    else
        std::cout << name << " couldn't sign " << form << " because "<< reason << std::endl;
}