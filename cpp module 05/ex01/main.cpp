#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
    Bureaucrat garen("Garen",100);
    Form    inting("inting_form",90,50);
    // Form    inting("inting_form",110,50);
    try
    {
        inting.beSigned(garen);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    garen.signForm();
}