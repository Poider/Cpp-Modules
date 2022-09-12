#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat garen("Garen",1);
    ShrubberyCreationForm inting("Homey");
    // RobotomyRequestForm inting("Electronic");
    // PresidentialPardonForm inting("Queen of england");
    try
    {
        inting.beSigned(garen);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    garen.signForm();
    garen.executeForm(inting);
}