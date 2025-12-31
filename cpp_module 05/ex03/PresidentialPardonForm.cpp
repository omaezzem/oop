#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5, false), target("david")
{
    if (get_grade_sign() < 1 || get_grade_exec() < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (get_grade_exec() > 150 || get_grade_exec() > 150)
        throw Bureaucrat::GradeTooHightException();
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &exist) : AForm(exist)
{
    target = exist.target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &exist)
{
    if (&exist != this)
    {
        AForm::operator=(exist);
        target = exist.target;
    }
    return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
{
    if (get_grade_sign() < 1 || get_grade_exec() < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (get_grade_exec() > 150 || get_grade_exec() > 150)
        throw Bureaucrat::GradeTooHightException();
    _target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!AForm::get_is_signed())
        throw Bureaucrat::GradeTooLowException();
    if (executor.get_grade() > AForm::get_grade_exec())
        throw Bureaucrat::GradeTooLowException();

    std::cout << target <<" has been pardoned by Zaphod Beeblebrox.\n";
}