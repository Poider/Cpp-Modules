#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat garen("Garen",1);
    Intern someRandomIntern;
    Form* inting;
    inting = someRandomIntern.makeForm("robotomy request", "Bender");
    if(inting)
    {
        try
        {
            inting->beSigned(garen);
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        garen.signForm();
        garen.executeForm(*inting);
        delete inting;
    }
    
    // system("leaks Interns");
}