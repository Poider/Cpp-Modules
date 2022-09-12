#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm",72,45)
{
    target = std::string("random");
    std::cout << "RobotomyRequestForm : constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("RobotomyRequestForm",72,45)
{
    this->target = target;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other)
{
    std::cout << "RobotomyRequestForm : copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    this->Form::operator=(other);
    std::cout << "RobotomyRequestForm : = operator called" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm : destructor called" << std::endl;
}

void RobotomyRequestForm::special() const
{
    srand(time(NULL));
    int randomized = rand() % 2;
    if(randomized == 0)
        std::cout << target + " : the robotomy failed." << std::endl;
    else
        std::cout << target +  " has been robotomized successfully 50% of the time." << std::endl;
}