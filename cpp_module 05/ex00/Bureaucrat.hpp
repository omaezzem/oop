#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class   Bureaucrat
{
    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &exist);
        Bureaucrat &operator=(const Bureaucrat &exist);
        Bureaucrat(std::string const name, int grade);
        int get_grade();
        std::string const get_name();
        void    GradeTooHighException();
        void    GradeTooLowException();
};


#endif