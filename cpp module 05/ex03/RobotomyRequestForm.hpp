#ifndef RobotomyRequestForm_
#define RobotomyRequestForm_

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include "Form.hpp"

class RobotomyRequestForm : public Form{

    std::string target;
    public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string& target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();

    void special() const;
};

#endif