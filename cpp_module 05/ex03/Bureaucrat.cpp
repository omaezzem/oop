#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::~Bureaucrat() {}
std::string const Bureaucrat::get_name() const {return name;}

int Bureaucrat::get_grade() const {return grade;}

Bureaucrat::Bureaucrat() : name("x"), grade(2)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHightException();
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
    : name(name), grade(grade)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHightException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &exist)
    : name(exist.name), grade(exist.grade) {}


Bureaucrat &Bureaucrat::operator=(const Bureaucrat &exist)
{
    if (this != &exist)
        grade = exist.grade;
    return *this;
}


void Bureaucrat::incrementgrade()
{
    if (grade - 1 < 1)
        throw GradeTooHightException();
    grade--;
}

void Bureaucrat::decrementgrade()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(AForm const &f)
{
    if (f.get_is_signed())
        std::cout << name << " signed " << f.get_name() << std::endl;
    else
        std::cout << name << " couldn’t sign " << f.get_name()
                  << " because grade is too low" << std::endl;
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.get_name() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << " couldn’t execute " << form.get_name()
                  << " because an error occurred" << std::endl;
    }
}
