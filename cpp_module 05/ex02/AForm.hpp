#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const name;
        bool    is_signed;
        int     grade_sign;
        int     grade_exec;
    public:
        std::string const get_name() const;
        bool    get_is_signed() const;
        int     get_grade_sign() const;
        int     get_grade_exec() const;
        AForm();
        ~AForm();
        AForm(const AForm &exist);
        AForm &operator=(const AForm &exist);
        AForm(std::string const name, int const grade_sign, int const grade_exec, bool is_signed);
        void    beSigned(Bureaucrat &b);
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif