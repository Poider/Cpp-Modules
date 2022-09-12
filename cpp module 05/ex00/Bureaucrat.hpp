#ifndef BUREAUCRAT_
#define BUREAUCRAT_

#include <iostream>

class Bureaucrat{

    const std::string name;
    int        grade;
    public:
    Bureaucrat();
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    ~Bureaucrat();

    const std::string& getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
    
    class GradeTooHighException : public std::exception {
        public:
        const char *what() const _NOEXCEPT;
    };

    class GradeTooLowException : public std::exception {
        public:
        const char *what() const _NOEXCEPT;
    };
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &obj);
#endif