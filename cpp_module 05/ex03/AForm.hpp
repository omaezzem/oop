#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool is_signed;
        const int grade_sign;
        const int grade_exec;
    public:
        AForm();
        AForm(const std::string name, int grade_sign, int grade_exec, bool is_signed);
        AForm(const AForm &other);
        virtual ~AForm();
        AForm &operator=(const AForm &other);
        std::string const get_name() const;
        bool get_is_signed() const;
        int get_grade_sign() const;
        int get_grade_exec() const;
        void beSigned(Bureaucrat const &b);
        virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, AForm const &form);

#endif

