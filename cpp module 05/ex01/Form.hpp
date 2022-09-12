#ifndef Form_
#define Form_

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form{

    const std::string name;
    bool _signed;
    const int sign;
    const int exec;

    public:
    Form();
    Form(const std::string &name, int sign, int exec);
    Form(const Form& other);
    Form& operator=(const Form& other);
    ~Form();

    class GradeTooHighException : public std::exception {
        public:
        const char *what() const _NOEXCEPT;
    };

    class GradeTooLowException : public std::exception {
        public:
        const char *what() const _NOEXCEPT;
    };

    const std::string & getName() const;
    bool getSigned() const;
    int getSign() const;
    int getExec() const;

    void beSigned(Bureaucrat& bureaucrat);
};

std::ostream& operator<< (std::ostream& os, const Form& form);

#endif