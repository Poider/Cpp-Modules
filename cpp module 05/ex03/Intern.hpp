#ifndef Intern_
#define Intern_

#include <iostream>
#include <string>
#define UNUSED(x) (void)(x)
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

template <class T1, class T2>
class _pair{
    public:
    _pair()
    {};

    ~_pair()
    {};

    _pair(const _pair<T1,T2> &other)
    {
        UNUSED(other);
    };

    _pair<T1,T2>& operator=(const _pair<T1,T2> &other)
    {
        UNUSED(other);
        return *this;
    };

    typedef T1 first_type;
    typedef T2 second_type;
    T1 first;
    T2 second;
};



class Intern;
typedef Form*(*formMaker)(const std::string&);
Form *new_Shrubbery(const std::string& target);
Form *new_Presidental(const std::string& target);
Form *new_Robotomy(const std::string& target);
class Intern{

    
    _pair<std::string, formMaker> forms_list[3];
    
    public:
    Intern();
    Intern(const Intern& other);
    Intern& operator=(const Intern& other);
    ~Intern();
    
    Form* makeForm(const std::string& formName, const std::string& target);
};

#endif