#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("x"), grade(2)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHightException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat &exist) : name(exist.name) , grade(exist.grade) {}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHightException();
}

std::string const Bureaucrat::get_name() { return (name); }

int Bureaucrat::get_grade() { return (grade); }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &exist)
{
    if (this != &exist)
        grade = exist.grade;
    return *this;
}

void    Bureaucrat::decrementgrade()
{
    if ((grade + 1) > 150)
        throw GradeTooLowException();
    grade++;
}

void    Bureaucrat::incrementgrade()
{
    if ((grade - 1) < 1)
        throw GradeTooHightException();
    grade--;
}

void    Bureaucrat::signForm(Form const &f)
{
    if (f.get_is_signed())
        std::cout << name << " signed "  << f.get_name() << std::endl;
    else
        std::cout << name << " couldn’t sign "  << f.get_name() << " because he did not reach the grade " <<std::endl;
}