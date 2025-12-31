#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137, false), target("home")
{
    if (get_grade_sign() < 1 || get_grade_exec() < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (get_grade_exec() > 150 || get_grade_exec() > 150)
        throw Bureaucrat::GradeTooHightException();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &exist) : AForm(exist)
{
    target = exist.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &exist)
{
    if (this != &exist)
    {
        AForm::operator=(exist);
        target = exist.target;
    }
    return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
{
    if (get_grade_sign() < 1 || get_grade_exec() < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (get_grade_exec() > 150 || get_grade_exec() > 150)
        throw Bureaucrat::GradeTooHightException();
    _target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!AForm::get_is_signed())
        throw Bureaucrat::GradeTooLowException();
    if (executor.get_grade() > AForm::get_grade_exec())
        throw Bureaucrat::GradeTooLowException();
    std::string file = target + "_shrubbery";
    std::ofstream out(file.c_str());

    out << "  ###  \n";
    out << " ##### \n";
    out << "#######\n";
    out << "  ###  \n";
    out << "  ###  \n";
    out.close();
}