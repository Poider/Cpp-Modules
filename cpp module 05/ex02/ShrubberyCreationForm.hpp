#ifndef ShrubberyCreationForm_
#define ShrubberyCreationForm_

#include <fstream>
#include <iostream>
#include <string>
#include "Form.hpp"

class ShrubberyCreationForm : public Form{

    std::string target;
    public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();

    void special() const;
};

#endif