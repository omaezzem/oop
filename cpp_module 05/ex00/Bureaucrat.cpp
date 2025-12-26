#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("x"), grade(70) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &exist) : name(exist.name) , grade(exist.grade) {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade) {}

std::string const Bureaucrat::get_name() { return (name); }

int Bureaucrat::get_grade() { return (grade); }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &exist)
{
    if (this != &exist)
        grade = exist.grade;
    return *this;
}

void    Bureaucrat::GradeTooHighException()
{
    if (grade < 1)
        throw std::exception();
}

void    Bureaucrat::GradeTooLowException()
{
    if (grade > 150)
        throw std::exception();
}
