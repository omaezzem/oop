#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45, false) , target("tesla")
{
    if (get_grade_sign() < 1 || get_grade_exec() < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (get_grade_exec() > 150 || get_grade_exec() > 150)
        throw Bureaucrat::GradeTooHightException();
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &exist) : AForm(exist)
{
    target = exist.target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &exist)
{
    if (this != &exist)
    {
        AForm::operator=(exist);
        target = exist.target;
    }
    return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
{
    if (get_grade_sign() < 1 || get_grade_exec() < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (get_grade_exec() > 150 || get_grade_exec() > 150)
        throw Bureaucrat::GradeTooHightException();
    _target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!AForm::get_is_signed())
        throw Bureaucrat::GradeTooLowException();
    if (executor.get_grade() > AForm::get_grade_exec())
        throw Bureaucrat::GradeTooLowException();
    static int i = 1;
    if(i)
        std::cout << target <<  "has been robotomized successfully\n"; 
    else
        std::cout << "it informs that the robotomy failed.\n";
    i = !i;
}