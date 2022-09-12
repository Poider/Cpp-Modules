
#include "Intern.hpp"

Intern::Intern()
{
    forms_list[0].first = "shrubbery creation";
    forms_list[1].first = "robotomy request";
    forms_list[2].first = "presidential pardon";


    forms_list[0].second = new_Shrubbery;
    forms_list[1].second = new_Robotomy;
    forms_list[2].second = new_Presidental;

    std::cout << "Intern : constructor called" << std::endl;
}

Intern::Intern(const Intern& other)
{
    UNUSED(other);
    forms_list[0].first = "shrubbery creation";
    forms_list[1].first = "robotomy request";
    forms_list[2].first = "presidential pardon";


    forms_list[0].second = new_Shrubbery;
    forms_list[1].second = new_Robotomy;
    forms_list[2].second = new_Presidental;
    std::cout << "Intern : copy constructor called" << std::endl;
}



Intern& Intern::operator=(const Intern& other)
{
    UNUSED(other);
    forms_list[0].first = "shrubbery creation";
    forms_list[1].first = "robotomy request";
    forms_list[2].first = "presidential pardon";


    forms_list[0].second = &new_Shrubbery;
    forms_list[1].second = &new_Robotomy;
    forms_list[2].second = &new_Presidental;
    std::cout << "Intern : = operator called" << std::endl;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern : destructor called" << std::endl;
}

Form *new_Shrubbery(const std::string& target)
{
    return (new ShrubberyCreationForm(target));
}

Form *new_Presidental(const std::string& target)
{
    return (new PresidentialPardonForm(target));
}

Form *new_Robotomy(const std::string& target)
{
    return (new  RobotomyRequestForm(target));
}


Form* Intern::makeForm(const std::string& formName, const std::string& target)
{
    for(int i = 0; i < 3 ; i++)
    {
        if(formName == forms_list[i].first)
            return forms_list[i].second(target);
    }
    std::cout << "no such form exists" << std::endl;
    return 0;
}

