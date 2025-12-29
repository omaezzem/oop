#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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
        Form();
        ~Form();
        Form(const Form &exist);
        Form &operator=(const Form &exist);
        Form(std::string const name, int const grade_sign, int const grade_exec, bool is_signed);
        void    beSigned(Bureaucrat &b);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif