#include "AForm.hpp"
#include "Bureaucrat.hpp"

std::string const AForm::get_name() const {return name;}
bool AForm::get_is_signed() const {return is_signed;}
int AForm::get_grade_sign() const {return grade_sign;}
int AForm::get_grade_exec() const {return grade_exec;}

AForm::AForm() : name("xform"), is_signed(false), grade_sign(3), grade_exec(140)
{
    if (grade_exec > 150 || grade_sign > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade_exec < 1 || grade_sign < 1)
        throw Bureaucrat::GradeTooHightException();
}

AForm::AForm(const std::string namep, int grade_signp, int grade_execp, bool is_signedp)
        : name(namep), is_signed(is_signedp),
            grade_sign(grade_signp), grade_exec(grade_execp)
{
    if (grade_exec > 150 || grade_sign > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade_exec < 1 || grade_sign < 1)
        throw Bureaucrat::GradeTooHightException();
}

AForm::AForm(const AForm &exist)
    : name(exist.name), is_signed(exist.is_signed),
      grade_sign(exist.grade_sign), grade_exec(exist.grade_exec) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &exist)
{
    if (this != &exist)
        is_signed = exist.is_signed;
    return *this;
}

void AForm::beSigned(Bureaucrat const &b)
{
    if (b.get_grade() <= grade_sign)
        is_signed = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
    os << "AForm " << form.get_name()
       << ", signed: " << form.get_is_signed()
       << ", sign grade: " << form.get_grade_sign()
       << ", exec grade: " << form.get_grade_exec();
    return os;
}
