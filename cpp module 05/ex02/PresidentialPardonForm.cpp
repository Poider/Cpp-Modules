#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm",25,5)
{
    target = std::string("random");
    std::cout << "PresidentialPardonForm : constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("PresidentialPardonForm",25,5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other)
{
    std::cout << "PresidentialPardonForm : copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
    this->Form::operator=(other);
    std::cout << "PresidentialPardonForm : = operator called" << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm : destructor called" << std::endl;
}

void PresidentialPardonForm::special() const
{
    std::cout << target + " has been pardoned by Zaphod Beeblebrox" << std::endl;
}