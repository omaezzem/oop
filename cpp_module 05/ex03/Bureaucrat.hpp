#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class AForm;

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
        int get_grade() const;
        std::string const get_name() const;
        void    incrementgrade();
        void    decrementgrade();
        void    signForm(AForm const &f);
        void    executeForm(AForm const &form);
        class   GradeTooHightException : std::exception {};
        class   GradeTooLowException : std::exception {};
};


#endif