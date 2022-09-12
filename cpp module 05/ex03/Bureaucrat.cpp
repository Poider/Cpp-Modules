#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name(std::string("random"))
{
    std::cout << "Bureaucrat : constructor called" << std::endl;
    this->grade = 150;
    reason = "Not signed yet.";
    _form = "";
    _signed = NOT_SIGNED;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
    reason = "Not signed yet.";
    _form = "";
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
    _form = other._form;
    _signed = other._signed;
    grade = other.grade;
    std::cout << "Bureaucrat : copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    reason = other.reason;
    _form = other._form;
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
        this->_form = reasonOrform;
    else
        this->reason = reasonOrform;
}

void Bureaucrat::signForm()
{
    if(_signed == SIGNED)
        std::cout << name << " signed " << _form << std::endl;
    else
        std::cout << name << " couldn't sign " << _form << " because "<< reason << std::endl;
}

void Bureaucrat::executeForm(Form const & form)
{
    int sucess = 1;
    //try to add if bureaucrat signed?
    try{
        form.execute(*this);
    }
    catch(std::exception & e){
        std::cout << e.what() << std::endl;
        sucess = 0;
    }
    if(sucess == 1)
        std::cout << name + " executed " + form.getName() << std::endl;
}