#ifndef PresidentialPardonForm_
#define PresidentialPardonForm_

#include <fstream>
#include <iostream>
#include <string>
#include "Form.hpp"

class PresidentialPardonForm : public Form{

    std::string target;
    public:
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string& target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();

    void special() const;
};

#endif