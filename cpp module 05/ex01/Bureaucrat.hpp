#ifndef BUREAUCRAT_
#define BUREAUCRAT_

#include <iostream>
#define SIGNED 1
#define NOT_SIGNED 0



class Bureaucrat{

    const std::string name;
    int        grade;

    std::string reason;
    std::string form;
    int _signed;

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
    void setReason(const std::string& reasonOrform, int type);
    void signForm();
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &obj);
#endif