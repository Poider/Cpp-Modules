#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :  Form("ShrubberyCreationForm",145,137)
{
    target = std::string("random");
    std::cout << "ShrubberyCreationForm : constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm",145,137)
{
    std::cout << "ShrubberyCreationForm : param constructor called" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): Form(other)
{
    std::cout << "ShrubberyCreationForm : copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    this->Form::operator=(other);
    std::cout << "ShrubberyCreationForm : = operator called" << std::endl;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm : destructor called" << std::endl;
}


void ShrubberyCreationForm::special() const
{
    std::ofstream out(target);

    if(out.is_open())
    {
        out << "          &&& &&  & &&" << std::endl;
        out << "      && &//&/|& ()|/ @, &&" << std::endl;
        out << "      &∂/(/&/&||/& /_/)_&/_&"<< std::endl;  
        out << "   &() &∂/&|()|/&∂/ '%'' & ()" << std::endl;  
        out << "  &_∂_&&_∂ |& |&&/&__%_/_& &&" << std::endl;  
        out << "&&   && & &| &| /& & % ()& /&&" << std::endl;  
        out << " ()&_---()&∂&∂|&&-&&--%---()~" << std::endl;  
        out << "     &&     ∂|||" << std::endl;  
        out << "             |||" << std::endl;  
        out << "             |||" << std::endl;
        out << "             |||" << std::endl;
        out << "             |||" << std::endl;
        out << "       , -=-~  .-^- _" << std::endl;
        out.close();
    }
}