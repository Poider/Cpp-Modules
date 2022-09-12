#ifndef Intern_
#define Intern_

#include <utility>
#include <iostream>
#include <string>
#define UNUSED(x) (void)(x)
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

class Intern;
typedef Form*(*formMaker)(const std::string&);
Form *new_Shrubbery(const std::string& target);
Form *new_Presidental(const std::string& target);
Form *new_Robotomy(const std::string& target);
class Intern{

    
    std::pair<std::string, formMaker> forms_list[3];
    
    public:
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    ~Intern();
    
    Form* makeForm(const std::string& formName, const std::string& target);
};

#endif